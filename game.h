#include <vector>
#include "session.h"
#include <string>

using namespace std;

class Game {
    private:
        vector<Session> sessions;
    public:

        int currentSessionIndex;
        void startGame();
        void startNewSession();
        vector<Session> getAllSessions();
        Session getCurrentSession();
        string getStatistic();
};

