#include <iostream>
#include <cstdlib>

using namespace std;

// 2d array to display the board of the game
char board[3][3] = {
    {
        '1',
        '2',
        '3',
    },
    {
        '4',
        '5',
        '6',
    },
    {
        '7',
        '8',
        '9',
    },
};

// variable to make turn on each player right after other
char turn = 'X';

// variables to store the index value of the input number of 2d array
int row, column;

// variable to check game is draw or win
bool draw = false;

// declaring the functions
void displayboard();
void player_turn();
bool gameover();

int main()
{

    while (gameover())
    {
        displayboard();
        player_turn();
        gameover();
    }

    if (turn == 'X' && draw != true)
    {
        cout << "Player 2 [O] wins! congratulations " << endl;
    }

    else if (turn == 'O' && draw != true)
    {
        cout << "Player 1 [X] wins! congratulations " << endl;
    }

    else
    {
        cout << "Game Has been Drawn \n Better Luck next Time" << endl;
    }
    return 0;
}

void displayboard()
{

    system("cls");
    cout << "\t\t\t\t\t   TIC TAC TOE " << endl;

    cout << "Player 1[X]" << endl;
    cout << "Player 2[O]" << endl;

    cout << "\t\t\t\t\t     |     |     " << endl;
    cout << "\t\t\t\t\t  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "   " << endl;
    cout << "\t\t\t\t\t_____|_____|_____" << endl;
    cout << "\t\t\t\t\t     |     |     " << endl;
    cout << "\t\t\t\t\t  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "   " << endl;
    cout << "\t\t\t\t\t_____|_____|_____" << endl;
    cout << "\t\t\t\t\t     |     |     " << endl;
    cout << "\t\t\t\t\t  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "   " << endl;
    cout << "\t\t\t\t\t     |     |     " << endl;
}

void player_turn()
{
    int choice;
    if (turn == 'X')
    {
        cout << "Player 1[X] :" << endl;
    }
    else if (turn == 'O')
    {
        cout << "Player 2[O] :" << endl;
    }
    cin >> choice;
    switch (choice)
    {
    case 1:
        row = 0;
        column = 0;
        break;
    case 2:
        row = 0;
        column = 1;
        break;
    case 3:
        row = 0;
        column = 2;
        break;
    case 4:
        row = 1;
        column = 0;
        break;
    case 5:
        row = 1;
        column = 1;
        break;
    case 6:
        row = 1;
        column = 2;
        break;
    case 7:
        row = 2;
        column = 0;
        break;
    case 8:
        row = 2;
        column = 1;
        break;
    case 9:
        row = 2;
        column = 2;
        break;

    default:
        cout << "INVALID INPUT !" << endl;
        break;
    }

    if (turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O')
    {
        board[row][column] = 'X';
        turn = 'O';
    }

    else if (turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O')
    {
        board[row][column] = 'O';
        turn = 'X';
    }

    else
    {

        cout << "\t\t\t\t\t Box Already full \n \t\t\t\t\t Please try another box !" << endl;
        player_turn();
    }

    displayboard();
}

bool gameover()
{
    // win

    for (int i = 0; i < 3; i++)
    {
        // this if statement checks the rows and columns of the table
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
        {
            {
                return false;
            }
        }

        // this if statement the win condition in diagonal pattern
        if (board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
        {
            return false;
        }
    }

    // game running

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                return true;
            }
        }
    }

    // draw game
    draw = true;
    return false;
}