// TIC TAC TOE Game in C++
#include<iostream>
using namespace std;

char square[10] = {'o',' ',' ',' ',' ',' ',' ',' ',' ',' '};

// FUNCTION TO RETURN THE GAME STATUS

int checkwin()
{
    if(square[1] == square[2] && square[2] == square[3] && square[1] != ' ')
    {
        return 1;
    }
    else if(square[4] == square[5] && square[5] == square[6] && square[4] != ' ')
    {
        return 1;
    }
    else if(square[7] == square[8] && square[8] == square[9] && square[7] != ' ')
    {
        return 1;
    }
    else if(square[1] == square[4] && square[4] == square[7] && square[1] != ' ')
    {
        return 1;
    }
    else if(square[2] == square[5] && square[5] == square[8] && square[2] != ' ')
    {
        return 1;
    }
    else if(square[3] == square[6] && square[6] == square[9] && square[3] != ' ')
    {
        return 1;
    }
    else if(square[1] == square[5] && square[5] == square[9] && square[1] != ' ')
    {
        return 1;
    }
    else if(square[3] == square[5] && square[5] == square[7] && square[3] != ' ')
    {
        return 1;
    }
    else if(square[1] != ' ' && square[2] != ' ' && square[3] != ' '
            && square[4] != ' ' && square[5] != ' ' && square[6] != ' ' 
            && square[7] != ' ' && square[8] != ' ' && square[9] != ' ')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

// THIS FUNCTION WILL DRAW THE BOARD WITH THE PLAYERS MARK

void board()
{
    system("cls");
    cout<<"\n\n\tTIC TAC TOE GAME \n\n";

    cout<<"Player 1(X) - Player 2(O)" << endl << endl;
    cout<< endl;

    // drawing of the board
    cout << "      |       |       " << endl ;
    cout << "  " << square[1] << "   |   " << square[2] << "   |   " << square[3] << endl;
    cout << "______|_______|_______" << endl;
    cout << "      |       |       " << endl;
    cout << "  " << square[4] << "   |   " << square[5] << "   |   " << square[6] << endl;
    cout << "______|_______|_______" << endl;
    cout << "      |       |       " << endl;
    cout << "  " << square[7] << "   |   " << square[8] << "   |   " << square[9] << endl;
    cout << "      |       |       " << endl << endl;
}

int main()
{
    int player = 1, i, choice;

    char mark;

    do
    {
        board();
        player = (player % 2) ? 1 : 2;
        cout << "Player " << player << ", enter the block number: ";
        cin >> choice;

        mark = (player == 1) ? 'X' : 'O';

        if(choice  == 1 && square[1] == ' ')
        {
            square[1] = mark;
        }
        else if(choice  == 2 && square[2] == ' ')
        {
            square[2] = mark;
        }
        else if(choice  == 3 && square[3] == ' ')
        {
            square[3] = mark;
        }
        else if(choice  == 4 && square[4] == ' ')
        {
            square[4] = mark;
        }
        else if(choice  == 5 && square[5] == ' ')
        {
            square[5] = mark;
        }
        else if(choice  == 6 && square[6] == ' ')
        {
            square[6] = mark;
        }
        else if(choice  == 7 && square[7] == ' ')
        {
            square[7] = mark;
        }
        else if(choice  == 8 && square[8] == ' ')
        {
            square[8] = mark;
        }
        else if(choice  == 9 && square[9] == ' ')
        {
            square[9] = mark;
        }
        else
        {
            cout << "INVALID MOVE! ";

            player--;
            cin.ignore();
            cin.get();
        }

        i = checkwin();
        player++;

    }while(i == -1);
    board();
    if(i == 1)
    {
        cout << "\aCONGRATULATIONS! PLAYER " << --player << " WINS!!";
    }
    else
    {
        cout << "\aGAME DRAW!!";
    }
    cin.ignore();
    cin.get();

    return 0;
}