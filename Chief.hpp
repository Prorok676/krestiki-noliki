#ifndef _CHIEF_HPP_
#define _CHIEF_HPP_
#include <iostream>
#include <vector>



class TicTacToe 
{
private:
    std::vector<std::vector<char>> board; // ������� ���� 4x4
    char currentPlayer; // ������� ����� (X ��� O)

public:
    // �����������, ������� �������������� ����
    TicTacToe();
    // ����� ��� ����������� �������� ����
    void printBoard();
    // ����� ��� ���������� ���� �������
    bool makeMove(int row, int col);
    // ����� ��� �������� ������
    bool checkWin();
    // ����� ��� �������� ������
    bool checkDraw();
    // ����� ��� ����� ������
    void switchPlayer();
    // �������� ������� �������
    void playGame();
};
#endif // !_CHIEF_HPP_
