#include "Chief.hpp"

TicTacToe::TicTacToe()
{
   
        board = std::vector<std::vector<char>>(4, std::vector<char>(4, ' '));
        currentPlayer = 'X';
   
}

void TicTacToe::printBoard()
{
    for (int i = 0; i < 4; ++i) 
    {
        for (int j = 0; j < 4; ++j)
        {
            std::cout << board[i][j];
            if (j < 3) std::cout << " | ";
        }
        std::cout << std::endl;
        if (i < 3) std::cout << "-------------\n";
    }
    std::cout << std::endl;
}

bool TicTacToe::makeMove(int row, int col)
{
    if (row < 0 || row >= 4 || col < 0 || col >= 4 || board[row][col] != ' ') 
    {
        std::cout << "Неверный ход. Попробуйте снова.\n";
        return false;
    }
    board[row][col] = currentPlayer;
    return true;
}

bool TicTacToe::checkWin()
{
    // Проверка по строкам
    for (int i = 0; i < 4; ++i) 
    {
        if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer && board[i][3] == currentPlayer)
            return true;
    }

    // Проверка по столбцам
    for (int j = 0; j < 4; ++j) 
    {
        if (board[0][j] == currentPlayer && board[1][j] == currentPlayer && board[2][j] == currentPlayer && board[3][j] == currentPlayer)
            return true;
    }

    // Проверка диагоналей
    if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer && board[3][3] == currentPlayer)
        return true;
    if (board[0][3] == currentPlayer && board[1][2] == currentPlayer && board[2][1] == currentPlayer && board[3][0] == currentPlayer)
        return true;
    return false;
}

bool TicTacToe::checkDraw()
{
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (board[i][j] == ' ')
            {
                return false; // Есть пустые клетки, игра продолжается
            }
        }
    }
    return true; // Все клетки заняты, ничья
}

void TicTacToe::switchPlayer()
{
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

void TicTacToe::playGame()
{
    int row, col;
    while (true) 
    {
        printBoard();
        std::cout << "Игрок " << currentPlayer << ", введите ваш ход (строка и столбец): ";
        std::cin >> row >> col;
        row--; col--; // Индексация с 1, корректируем на 0

        if (makeMove(row, col)) 
        {
            if (checkWin()) 
            {
                printBoard();
                std::cout << "Игрок " << currentPlayer << " победил!\n";
                break;
            }
            if (checkDraw()) 
            {
                printBoard();
                std::cout << "Ничья!\n";
                break;
            }
            switchPlayer();
        }
    }
}



