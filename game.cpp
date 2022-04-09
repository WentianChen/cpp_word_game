#include "game.h"
#include <vector>
#include "iostream"
#include "session.h"
#include <string>
#include "guess.h"
#include "Dictionary.h"

using namespace std;

void Game::run() {
    vector<int> choices;

    while (!isOver){

        int choice = mainMenu();

        if (choice == 1){
            startNewSession();
        }else if (choice == 2){
            displayStatistic();
        }else{
            helpText();
        }

    }

}

void Game::startNewSession() {
    Session s = Session(Dictionary::words[dict_index]); // init a new session
    s.run(); // run a session
    sessions.push_back(s); // push new session into sessions when session end
    increaseDictIndex(); // increase the dict index when session end
}

void Game::increaseDictIndex() {
    dict_index ++;
    if (dict_index > Dictionary::WORD_COUNT){
        dict_index = 0;
    }
}

void Game::displayStatistic() {
    int numPlayed = sessions.size();
    int winPercentage = 0;
    int numWin = 0;
    int currenStreak = 0;
    int maxStreak = 0;

    if (numPlayed > 0){
        vector<int> streak;
        int tmpStreak = 0;
        for (auto & session : sessions) {
            if (session.isWin()){
                numWin ++;
                tmpStreak ++;
                streak.push_back(tmpStreak);
            }else{
                tmpStreak = 0;
            }
        }

        if (streak.size() != 0){
            currenStreak = streak.back();
            maxStreak = *max_element(streak.begin(), streak.end());
        }
        winPercentage = (numWin/numPlayed)*100;


        cout << "Played: "<< numPlayed << " Win%: "<< winPercentage <<" Current streak:" << currenStreak << " Max Streak: " << maxStreak << endl;
        cout << endl;



        for (int i=1; i<7; i++){
            distDict[i] = 0;
        }
        for ( auto &s:sessions){
            distDict[s.getAllGuesses().size()]++;
        }

        cout << "GUESS DISTRIBUTION" << endl;
        cout << "1: " << distDict[1] << endl;
        cout << "2: " << distDict[2] << endl;
        cout << "3: " << distDict[3] << endl;
        cout << "4: " << distDict[4] << endl;
        cout << "5: " << distDict[5] << endl;
        cout << "6: " << distDict[6] << endl;
        cout << endl;
    }else{
        cout << "Played: "<< 0 << " Win%: "<< 0 <<" Current streak:" << 0 << " Max Streak: " << 0 << endl;
        cout << endl;

        cout << "GUESS DISTRIBUTION" << endl;
        cout << "1: 0" << endl;
        cout << "1: 0" << endl;
        cout << "1: 0" << endl;
        cout << "1: 0" << endl;
        cout << "1: 0" << endl;
        cout << endl;
    }


}

int Game::mainMenu(){
    vector<int> answers;
    while (true){
        int ans;
        cout << "Welcome to Werdle." << endl;
        cout << "Select an option :" << endl;
        cout << endl;

        cout << "1. Play a game." << endl;
        cout << "2. View statistic." << endl;
        cout << "3. View help." << endl;
        cout << endl;
        cout << "> ";
        cin >> ans;
        if (ans == 1 || ans == 2 || ans == 3){
            answers.push_back(ans);
            break;
        }
    }

    return answers.back();
}

void Game::helpText(){
    cout << "Guess the WERDLE in six tries." << endl;
    cout << endl;

    cout << "Each guess must a five-letter word. hit the enter button to submit" << endl;
    cout << endl;

    cout << "Examples" << endl;
    cout << "[A] P P L E" << endl;
    cout << "The letter A is in the correct position." << endl;
    cout << "D |E| A L T" << endl;
    cout << "The letter E is in the wrong position." << endl;
    cout << endl;
}

