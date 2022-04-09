#ifndef GAME_H
#define GAME_H
#pragma once

#include <vector>
#include "session.h"
#include <string>
#include "Dictionary.h"
#include <map>

using namespace std;

class Game {
    private:
        vector<Session> sessions;
        int dict_index = 0;
        string mainMenu();
        void helpText();
        void increaseDictIndex();
        map<int,int> distDict;

    public:
        Game(){};
        bool isOver = false;
        void startNewSession();
        void displayStatistic();
        void run();
};

#endif
