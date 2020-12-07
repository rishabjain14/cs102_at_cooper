/*
* ticTacToe.h
*/

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#define BOARD_SIZE 3
char board[BOARD_SIZE][BOARD_SIZE];

/* Create the board; make sure it starts off empty */
void initBoard(void);

void drawBoard(void);

int userFirst(void);

#endif /* endif of TIC_TAC_TOE_H */
