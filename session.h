#ifndef SESSION_H
#define SESSION_H
#pragma once

#include <vector>
#include "guess.h"

using namespace std;


class Session {

    private:
        vector<Guess> guesses;
        string correctWord_;

    public:
        Session(string correctWord){
            correctWord_ = correctWord;
        };
        static int getScore();

    void run();
};

#endif
