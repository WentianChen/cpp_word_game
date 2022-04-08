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
    while (guesses.size() <= guessLimit ){
        Guess g = Guess(word, correctWord_);
        g.run();
        guesses.push_back(g);
    }

}

