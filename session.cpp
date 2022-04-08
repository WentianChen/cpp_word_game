#include <string>
#include "session.h"
#include "guess.h"

#include "iostream"
using namespace std;


int Session::getScore() {
    return 0;
}

void Session::run() {
    string word;
    // loop until reach guess limit
    while (true){
        if (guesses_.size() == 6){
            break;
        }
        Guess g = Guess(correctWord_);
        g.run();
        guesses_.push_back(g);
        // send response to user
        for (int i = 0; i < guesses_.size(); i++) {
            guesses_[i].displayMessage();
        }
        if (g.isCorrect){
            winOrLoss_ = true;
            break;
        }

    }
    endMessage();
}


void Session::endMessage() {
    int num = 0;
    if (winOrLoss_){
        if (num == 1){
            cout << "Impossible!" << endl;
        }
        else if (num == 2){
            cout << "Amazing!" << endl;
        }
        else if (num == 3){
            cout << "Outstanding!" << endl;
        }
        else if (num == 4){
            cout << "Great!" << endl;
        }
        else if (num == 5){
            cout << "Nice one!" << endl;
        }
        else {
            cout << "You got there!" << endl;
        }
    }else{
        cout << "Correct answer: " << correctWord_ << endl;
    }
    cout << endl;
}
