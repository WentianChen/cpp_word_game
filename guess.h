#ifndef GUESS_H
#define GUESS_H
#pragma once

#include <string>

using namespace std;

class Guess{
    private:
        string correctWord_;
        string message_;

public:
        Guess(string correctWord){
            correctWord_ = correctWord;
        };
        bool isCorrect;
        void run();
        void formAnswer(string word);
        void setCorrectBool(string word);
        string lowerString(string word);
        void displayMessage();
};

#endif