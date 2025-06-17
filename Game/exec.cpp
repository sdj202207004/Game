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
		cout << "����(0) ����(1) ��(2) : ";
		cin >> user;

		if (3 == user) {
			break;
		}

		com = game.normalGame();
		cnt++;
		printf("��� : [ %d ] ��ǻ�� : [ %d ]\n", user, com);
		res = game.getGameResult(user, com);

		switch (res) {
		case 0:
			printf("*******���*******\n");
			game.allDraw();
			break;
		case 1:
			printf("-------�̱�-------\n");
			game.userWin();
			break;
		case 2:
			printf("^^^^^^^����^^^^^^^\n");
			game.comWin();
			break;
		}

		game.printGame();
	}

	return 0;
}