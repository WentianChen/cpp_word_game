#include <string>

using namespace std;

class Guess{
    private:
        string guessWord_;
        string correctWord_;
    public:
        Guess(string guessWord, string correct_word){
            guessWord_ = guessWord;
            correctWord_ = correct_word;
        }
        bool isCorrect();
        string formMessage();
        void run();
};