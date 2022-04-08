#ifndef GAME_H
#define GAME_H
#pragma once

#include <vector>
#include "session.h"
#include <string>

using namespace std;

class Game {
    private:
        vector<Session> sessions;
        int currentSessionIndex;
        int startMenu();
        void helpText();

    public:
        Game(){};
        bool isOver = false;
        void startGame();
        void startNewSession();
        vector<Session> getAllSessions();
        Session getCurrentSession();
        string getStatistic();
};

#endif
