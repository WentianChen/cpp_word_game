#include <string>

using namespace std;

class Guess{
    private:
        string guessWord;
    public:
        Guess(string guessWord, string correct_word);
        bool isCorrect();
        string sendMessage();
};