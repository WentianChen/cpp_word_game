#ifndef SESSION_H
#define SESSION_H
#pragma once

#include <vector>
#include "guess.h"

using namespace std;


class Session {

    private:
        vector<Guess> guesses_;
        string correctWord_;
        bool winOrLoss_ = false;
        int guessLimit = 6;

    public:
        Session(string correctWord){
            correctWord_ = correctWord;
        };
        static int getScore();
        void endMessage();

    void run();
};



#endif
