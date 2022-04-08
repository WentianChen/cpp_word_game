#ifndef SESSION_H
#define SESSION_H
#pragma once

#include <vector>
using namespace std;


class Session {

    private:
        int current_index;
        int guessCount;

    public:
        Session(){};
        bool isGuessCorrect(int index);
        bool isGuess(string word);
        static int getScore();
};

#endif