#ifndef _CHIEF_HPP_
#define _CHIEF_HPP_
#include <iostream>
#include <vector>



class TicTacToe 
{
private:
    std::vector<std::vector<char>> board; // Игровое поле 4x4
    char currentPlayer; // Текущий игрок (X или O)

public:
    // Конструктор, который инициализирует поле
    TicTacToe();
    // Метод для отображения игрового поля
    void printBoard();
    // Метод для выполнения хода игроком
    bool makeMove(int row, int col);
    // Метод для проверки победы
    bool checkWin();
    // Метод для проверки ничьей
    bool checkDraw();
    // Метод для смены игрока
    void switchPlayer();
    // Основной игровой процесс
    void playGame();
};
#endif // !_CHIEF_HPP_
