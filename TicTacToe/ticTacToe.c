/*
* ticTacToe.c
*/
#include <stdio.h>
#include "ticTacToe.h"

/* Create the board; make sure it starts off empty */
void initBoard(void)
{
		int row;
		int col;

		for (row=0; row < BOARD_SIZE; row ++)
		{
				for (col=0; col < BOARD_SIZE; col++)
				{
						board[row][col] = ' ';
				}
		}
		return;
}

/* Display the board to STDOUT */
void drawBoard(void)
{
		int row;

		printf("\n");
		for (row=0; row< BOARD_SIZE; row++)
		{
				printf("  *  *  \n");
				printf(" %c * %c * %c \n",
						board[row][0], board[row][1], board[row][2]);
				printf("  *  *  \n");
				if (row !=2)
				{
						printf("*******\n");
				}
		}
		printf("\n");
		return;
}

int userFirst(void)
{
    char response;
    printf("Do you want to go first? (y/n)");
    do
    {
        response = getchar();
    } while ( (response != 'y')  &&
            (response != 'Y') && 
            (response != 'n') && 
            (response != 'N'));
    if ( (response == 'y') || (response == 'Y'))
    {
        return(1);
    }
    else 
    {
        return (0);
    }
}

