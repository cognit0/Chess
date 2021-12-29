#ifndef _CHESS_TILES_
# define _CHESS_TILES_ 
# include <stdbool.h>

//	Bishop = 2
//	Pawn = 1
//	Rook = 4
//	Knight = 3
//	King = 6
//	Queen = 5
//	Empty = 0
//

//
//	THE BOARD ITSELF
typedef struct 
{
    int color; // 0 being white, 1 being black
    int position_y; // OnBoard Notation
    char position_x; // OnBoard Notation
//	bool is_Empty = true;
//	bool on_Piece = false;
//	int id = 0;
}	t_Tail;

//
// THE PIECES
typedef struct
{
//	const int ID = 1;
//	const int point = 1;
//	int current_position_y;
//  char current_position_x;	
//	char *move_type = "PAWN";
//	bool on_Piece = false;
//	bool at_start = true;
//	bool at_end = false;
//	bool can_take = false;
//	bool can_en_passant = false;
//	bool is_Taken = false;
}	t_Pawn; // Pawn 
typedef struct 
{
//	const int ID = 2;
//	const int point = 3;
//	char *move_type = "BISHOP";
//	int current_position_y;
//	char current_position_x;
//	bool on_Piece = false;
//	bool is_Taken = false;
}	t_Bishop; // Bishop
typedef struct 
{
//	const int ID = 3;
//	const int point = 3;
//	char *move_type = "KNIGHT";
//	int current_position_y;
//	char current_position_x;
//	bool on_Piece = false;
//	bool is_Taken = false;
}	t_Knight; // Knight
typedef struct 
{
//	const int ID = 4;
//	const int point = 5;
//	char *move_type = "ROOK";
//	int current_position_y;
//	char current_position_x;
//	bool on_Piece = false;
//	bool is_Taken = false;
}	t_Rook; // Rook
typedef struct
{
//	const int ID = 5;
//	const int point = 9; // How many points is it
//	char *move_type = "QUEEN"; // How does it move
//	int current_position_y; // on BoardPosition Horizontal
//	char current_position_x; // on BoardPosition Vertical
//	bool on_Piece = false;
//	bool is_Taken = false;
}	t_Queen; // Queen
typedef struct 
{
//	const int ID = 6;
//	bool under_Check = false;
//	char *move_type = "KING";
//	int current_position_y;
//	char current_position_x;
//	bool is_Taken = false;
//	bool on_Piece = false;
}	t_King; // King


t_Tail *get_Board(void);
	

#endif
