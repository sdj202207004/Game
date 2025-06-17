#include "GmaeBoard.h"

//0 => ���
//1 => �̱�
//2 => ��
GmaeBoard::GmaeBoard() {
	m_board[0] = 0;
	m_board[1] = 1;
	m_board[2] = 2;
}

int GmaeBoard::getGameResult(int user, int com) {
	return m_board[(user - com + 3) % 3];
}