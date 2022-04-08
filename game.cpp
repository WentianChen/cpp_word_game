#include "game.h"
#include <vector>
#include "iostream"
#include "session.h"
#include <string>
#include "guess.h"
#include "Dictionary.h"

using namespace std;

void Game::run() {

    while (!isOver){

        int choice = mainMenu();

        if (choice == 3 ){
            helpText();
            continue;
        }

        if (choice == 1){
            startNewSession();
        }

        if (choice == 2){
            displayStatistic();
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

    cout << "Played: X Win%: 100 Current streak:1 Max Streak:1" << endl;
    cout << endl;

    cout << "GUESS DISTRIBUTION" << endl;
    cout << "1: 0" << endl;
    cout << "1: 0" << endl;
    cout << "1: 0" << endl;
    cout << "1: 0" << endl;
    cout << "1: 0" << endl;
    cout << endl;

}

int Game::mainMenu(){
    int answer = 0;

    while (true){
        cout << "Welcome to Werdle." << endl;
        cout << "Select an option :" << endl;
        cout << endl;

        cout << "1. Play a game." << endl;
        cout << "2. View statistic." << endl;
        cout << "3. View help." << endl;
        cout << endl;
        cout << "> ";
        cin >> answer;
        if (answer == 1 || answer == 2 || answer == 3){
            break;
        }
    }

    return answer;
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

