/*
* main.c
*/
#include <stdio.h>

#include "ticTacToe.h"

void initBoard(void);
void drawBoard(void); 
int userFirst(void);

char board[BOARD_SIZE][BOARD_SIZE];

int main()
{
		initBoard();
		drawBoard();

    int choice;
    char user = "X";
    char computer = '0';

    choice = userFirst();

    if (choice = 0)
    {
        computer = 'X';
        user = '0';
    }

		return(0);
}

