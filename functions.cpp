#include <iostream>
#include <vector>

void greet(std::string msg)
{
std::cout << "============\n";
std::cout << msg << "\n";
std::cout << "============\n\n";
};

void drawBoard(std::vector<char> board)
{
    std::cout << " " << board[0] << " | " << board[1] << " | " << board[2] << "\n";
    std::cout << "___________\n";
    std::cout << " " << board[3] << " | " << board[4] << " | " << board[5] << "\n";
    std::cout << "___________\n";
    std::cout << " " << board[6] << " | " << board[7] << " | " << board[8] << "\n";
}

bool endGame(std::string player, std::vector<char> board)
{   
    bool winner = false;
    if (board[0] == board[1] && board[1] == board[2] || board[3] == board[4] && board[4] == board[5] || board[6] == board[7] && board[7]== board[8] ||
        board[0] == board[3] && board[3] == board[6] || board[1] == board[4] && board[4] == board[7] ||  board[2] == board[5] && board[5]== board[8] ||
        board[0] == board[4] && board[4] == board[8] || board[2] == board[4] && board[4] == board[6]) 
    {
        std::cout << "==============\n";
        std::cout << player << " ganhou!\n";
        std::cout << "==============\n";
        winner = true;
    }
    return winner;
}

void turns(std::string player1, std::string player2, std::vector<char> board)
{
    int numPlays = 0;
    while (numPlays < 9)
    {
        int position;
        
        std::cout << player1 << ", choose an unplayed position!";
        std::cin >> position;
        board[position] = 'X';
        drawBoard(board);
        if (endGame(player1, board) == true)
        {
            break;
        }
        
        std::cout << player2 << ", choose an unplayed position!";
        std::cin >> position;
        board[position] = 'O';
        drawBoard(board);
        if (endGame(player2, board) == true)
        {
            break;
        }    
        
            
        numPlays = numPlays + 2;
    }
}