#include "TicTacToe.h"

int main(){	
	Game game;
	Map map(X, Y);
	
	game.start();
	while(true){
		map.show();
		game.input();
	}
}
