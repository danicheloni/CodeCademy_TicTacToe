#include <iostream>
#include <string>
#include "functions.hpp"


int main(){    
    greet("TIC TAC TOE");

    //Player input
    std::string player1;
    std::string player2;

    std::cout << "Who is playing:\n";
    std::cin >> player1;
    std::cout << player1 << ", you will be 'X'\n";
    std::cout << "and?\n";
    std::cin >> player2;
    std::cout << player2 << ", you will be 'O'\n";

    //creating board
    std::vector<char> board = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
    drawBoard(board);

    //Taking turns
    turns(player1, player2, board);




return 0;
}//end of main