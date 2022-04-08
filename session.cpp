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

    while (guesses.size() <= 6 ){

        cout << "guess > ";
        cin >> word;
        Guess g = Guess(word, correctWord_);

    }

}

