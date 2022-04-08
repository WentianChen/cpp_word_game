#include "string"
#include "guess.h"
#include "iostream"

using namespace std;

void Guess::setCorrectBool(string word){
    if (correctWord_ == word){
        isCorrect = true;
    }else{
        isCorrect = false;
    }
}

void Guess::run() {
    string word;
    cout << endl;
    cout << "guess >";
    cin >> word; // get user input

    while (word.length() != 5){ // word length must be 5
        cout << "guess >";
        cin >> word; // get user input
    }
    word = lowerString(word); // lower the letters
    setCorrectBool(word); // set isCorrect
    string ans = formAnswer(word);
    cout << ans;
}



string Guess::formAnswer(string word){
    string answer;
    // check if in the correct position
    for (int i = 0; i < 5; i++) {

        size_t found = correctWord_.find(word[i]);
        if (found != string::npos){ // in the world
            string tmp;
            if (found == i){ // in the same pos
                tmp.push_back('[');
                tmp.push_back(word[i]);
                tmp.push_back(']');
                answer += tmp;
            }else{ // not in the same pos
                tmp.push_back('|');
                tmp.push_back(word[i]);
                tmp.push_back('|');
                answer += tmp;
            }
        }else{
            answer.push_back(word[i]);
        }
        answer += " ";
    }
    return answer;
}


string Guess::lowerString(string word){
    string newWord;
    char ch;
    // convert char to lower case
    for (int i = 0; i < word.length(); i++) {
        ch = tolower(word[i]);
        newWord.push_back(ch);
    }
    return newWord;
}
