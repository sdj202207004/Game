#include <iostream>

using namespace std;

#include "Game.h"

int main() {
	int user = 0;
	int com = 0;
	int res = 0;
	int cnt = 0;

	Game game;


	while (true) {
		cout << "가위(0) 바위(1) 보(2) : ";
		cin >> user;

		if (3 == user) {
			break;
		}

		com = game.normalGame();
		cnt++;
		printf("사람 : [ %d ] 컴퓨터 : [ %d ]\n", user, com);
		res = game.getGameResult(user, com);

		switch (res) {
		case 0:
			printf("*******비김*******\n");
			game.allDraw();
			break;
		case 1:
			printf("-------이김-------\n");
			game.userWin();
			break;
		case 2:
			printf("^^^^^^^졌다^^^^^^^\n");
			game.comWin();
			break;
		}

		game.printGame();
	}

	return 0;
}