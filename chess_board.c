#include "chess_tiles.h"
#include <stdlib.h>

 *get_Chess(void)
{
	
}

t_Tail *get_Board(void)
{
	t_Tail *br2;
	br2 = malloc(sizeof(t_Tail) * 64);
	bool color_r = true;
	char a = 'a';
	for (int b = 1; b <= 64; b++)
	{
		br2[b - 1].color = color_r;
		if (color_r == true)
			color_r = false;
		else
			color_r = true;
		if (b % 8 == 0)
			color_r = (color_r) ? false : true;
	}
	int b = 1;
	for (int j = 1; j <= 64; j++)
	{	
		br2[j - 1].position_y = b;
		if (a == 'h' + 1)
			a = 'a';
		br2[j - 1].position_x = a;
		a++;
		if (j % 8 == 0)
			b++;
	}
	return (br2);
}
