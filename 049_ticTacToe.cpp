#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces,char player);
void computerMove(char *spaces,char computer);
bool checkWinner(char *spaces,char player,char computer);
bool checkTie(char *spaces);

int main(){

    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char choice;
    char player;
    char computer;
    do
    {
        std::cout << "Would you like to play X or O?: ";
        std::cin >> choice;
    } while (choice != 'X' && choice != 'O');
    
    if (choice == 'X'){
        player = choice;
        computer = 'O';
    } else if(choice == 'O'){
        player = choice;
        computer = 'X';
    }

    bool running = true;

    drawBoard(spaces); // passing array into function decays into ptr

    while (running){
        playerMove(spaces,player);
        drawBoard(spaces);
        if(checkWinner(spaces,player,computer)){
            running = false;
            break;
        }else if(checkTie(spaces)){
            running =  false;
            break;
        }
        computerMove(spaces,computer);
        drawBoard(spaces);
        if(checkWinner(spaces,player,computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running =  false;
            break;
        }

    }
    std::cout << "Thanks for playing!\n";
    return 0;
}

void drawBoard(char *spaces){
    std::cout << '\n';
    std::cout << "     |     |     \n";
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  \n";
    std::cout << "     |     |     \n";
    std::cout << '\n';
}

void playerMove(char *spaces,char player){
    int number;
    do{
        std::cout << "Enter a spot on to place a marker (1-9): ";
        std::cin >> number;
        number--; // arrays start at 0
        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
    }while(!number > 0 || !number < 8);
    
}

void computerMove(char *spaces,char computer){
    int number;
    srand(time(NULL));

    while (true)
    {
        number = rand() % 9; // random between 0 and 8
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
    
}

bool checkWinner(char *spaces,char player,char computer){
    // rows
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
        spaces[0] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
        spaces[3] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
        spaces[6] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    // columns
    else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
        spaces[0] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]){
        spaces[1] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]){
        spaces[2] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    //diaganols
    else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        spaces[0] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        spaces[2] == player ? std::cout << "You win!\n" : std::cout << "You lose!\n";
    } else{
        return false;
    }
    return true;
}

bool checkTie(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    std::cout << "It's a tie!\n";
    return true;
}