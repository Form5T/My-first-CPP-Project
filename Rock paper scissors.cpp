#include <cstdlib>
#include <ctime>
#include <iostream>

char getComputerMove()
{
    int move;
    srand(time(NULL));
    move = rand() % 3;

    if (move == 0){
        return 'p';
    }
    else if (move == 1){
        return 's';
    }
    return 'r';
}

int getResults(char playerMove, char computerMove)
{
    if (playerMove == computerMove){
        return 0;
    }
    if (playerMove == 's'&& computerMove=='r'){
        return -1;
    }
    if (playerMove == 's'&& computerMove=='p'){
        return 1;
    }
    if (playerMove == 'r'&& computerMove=='p'){
        return -1;
    }
    if (playerMove == 'r'&& computerMove=='s'){
        return 1;
    }
    if (playerMove == 'p'&& computerMove=='s'){
        return -1;
    }
    if (playerMove == 'p'&& computerMove=='r'){
        return 1;
    }
    return 0;
}

int main()
{
    char playerMove;

    std::cout << "\n\n\n\t\t\tWelcome to Stone Paper Scissor"
    "Game\n";

    std::cout << "\n\t\tEnter r for ROCK, p for PAPER, and s "
    "for SCISSOR\n\t\t\t\t\t";

    while(1){
        std::cin >> playerMove;
        if (playerMove == 'p' || playerMove == 'r' || playerMove == 's'){
            break;
        }
        else{
            std::cout <<"\t\t\tInvalid Player Move!!! Please Try Again." << std::endl;

        }
         
    }

    char computerMove = getComputerMove();

    int result = getResults(playerMove, computerMove);

    if (result == 0)(
        std::cout << "\n\t\t\tGame Draw!\n"
    );
    else if (result == 1){
        std::cout << "\n\t\t\tCongratulations! Player won the game!\n";
    }
    else {
        std::cout << "\n\t\t\t0h! Computer won the game!\n";
    }

    std::cout << "\t\t\tYour Move:" <<playerMove<< std::endl;
    std::cout << "\t\t\tComputer's Move:" << computerMove << std::endl;

    return 0;
}