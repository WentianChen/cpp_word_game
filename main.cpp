#include <iostream>
#include "game.h"

using namespace std;




int main(){
    Game game = Game();

    while (!game.isOver) {
        game.startGame();
    }

    return 0;
}
