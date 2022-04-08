#include "game.h"
#include <vector>
#include "iostream"
#include "session.h"
#include <string>

using namespace std;


void Game::startGame() {
    startMenu();
}


int Game::startMenu(){
    int answer;

    cout << "Welcome to Werdle." << endl;
    cout << "Select an option :" << endl;
    cout << endl;

    cout << "1. Play a game." << endl;
    cout << "2. View statistic." << endl;
    cout << "3. View help." << endl;
    cout << endl;
    cout << "> ";
    cin >> answer;

    return answer;
}

void Game::helpText(){
    cout << "Guess the WERDLE in six tries." << endl;
    cout << endl;

    cout << "Each guess must a five-letter word. hit the enter button to submit" << endl;
    cout << endl;

    cout << "Examples" << endl;
    cout << "[A] P P L E" << endl;
    cout << "The letter A is in the correct position." << endl;
    cout << "D |E| A L T" << endl;
    cout << "The letter E is in the wrong position." << endl;
    cout << endl;
}

void Game::startNewSession() {

}

vector<Session> Game::getAllSessions() {
    return vector<Session>();
}

Session Game::getCurrentSession() {
    return Session();
}

string Game::getStatistic() {
    return "";
}

bool Game::isOver() {
    return false;
}

