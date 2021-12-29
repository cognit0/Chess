//#include "chess_pieces"
#include "chess_board.c"
#include <stdio.h>

int main(void)
{
        t_Tail *board;
        board = get_Board();

        for (int i = 1; i <= 64; i++)
        {
                printf("%d", board[i - 1].color); 
        	if (i % 8 == 0)
					printf("\n");
		}
}
