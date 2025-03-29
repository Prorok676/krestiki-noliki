#include "Chief.hpp"
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	TicTacToe game;
	game.playGame();
	return 0;
}