#include "string"
#include "guess.h"

Guess::Guess(string word) {
    guessWord = word;
}

bool Guess::isCorrect() {
    return false;
}

string Guess::sendMessage() {
    return std::string();
}
