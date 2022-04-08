#include <string>

using namespace std;

class Guess{
    private:
        string guessWord;
    public:
        Guess(string guessWord);
        bool isCorrect();
        string sendMessage();
};