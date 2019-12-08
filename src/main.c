
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>

#include "global.h"
#include "draw.h"
#include "ai.h"
#include "screens.h"
#include "startup.h"

#define SLEEP 150

int board[8][8];
int cursor_x;
int cursor_y;
int input_flag;
int turn;
int turn_flag;
int restart;
int players;

int check(int x, int y){

	int a;
	int i, j;

	if(turn % 2 != 0){
		i = 1;
		j = 2;

	}else{
		i = 2;
		j = 1;

	}

	if(board[y][x] == 0){

		//	0

		a = 1;

		if(board[y][x + a] == j){
			while(x + a < 7){

				a++;

				if(board[y][x + a] == 0){
					break;

				}

				if(board[y][x + a] == i){
					return(1);

				}

			}

		}

		//	pi/4

		a = 1;

		if(board[y - a][x + a] == j){
			while(x + a < 7 && y - a > 0){

				a++;

				if(board[y - a][x + a] == 0){
					break;

				}

				if(board[y - a][x + a] == i){
					return(1);

				}

			}

		}

		//	pi/2

		a = 1;
		if(board[y - a][x] == j){
			while(y - a > 0){

				a++;

				if(board[y - a][x] == 0){
					break;

				}

				if(board[y - a][x] == i){
					return(1);

				}

			}

		}

		//	3pi/4

		a = 1;

		if(board[y - a][x - a] == j){
			while(x - a > 0 && y - a > 0){

				a++;

				if(board[y - a][x - a] == 0){
					break;

				}

				if(board[y - a][x - a] == i){
					return(1);

				}

			}

		}

		//	pi

		a = 1;

		if(board[y][x - a] == j){
			while(x - a > 0){

				a++;

				if(board[y][x - a] == 0){
					break;

				}

				if(board[y][x - a] == i){
					return(1);

				}

			}

		}

		//	5pi/4

		a = 1;

		if(board[y + a][x - a] == j){
			while(x - a > 0 && y + a < 7){

				a++;

				if(board[y + a][x - a] == 0){
					break;

				}

				if(board[y + a][x - a] == i){
					return(1);

				}

			}

		}

		//	3pi/2

		a = 1;

		if(board[y + a][x] == j){
			while(y + a < 7){

				a++;

				if(board[y + a][x] == 0){
					break;

				}

				if(board[y + a][x] == i){
					return(1);

				}

			}

		}

		//	7pi/4

		a = 1;

		if(board[y + a][x + a] == j){
			while(x + a < 7 && y + a < 7){

				a++;

				if(board[y + a][x + a] == 0){
					break;

				}

				if(board[y + a][x + a] == i){
					return(1);

				}

			}

		}

	}

	return(0);

}

int place(int x, int y){

	int a, b;
	int i, j;

	if(turn % 2 != 0){
		i = 1;
		j = 2;

	}else{
		i = 2;
		j = 1;

	}

    b = 0;

	if(board[y][x] == 0){

		//	0

		a = 1;

		if(board[y][x + a] == j){
			while(x + a < 7){

				a++;

				if(board[y][x + a] == 0){
					break;

				}

				if(board[y][x + a] == i){

                    a = 1;

                    while(board[y][x + a] == j){

                        board[y][x + a] = i;

                        a++;

                    }

					b++;

					break;

				}

			}

		}

		//	pi/4

		a = 1;

		if(board[y - a][x + a] == j){
			while(x + a < 7 && y - a > 0){

				a++;

				if(board[y - a][x + a] == 0){
					break;

				}

				if(board[y - a][x + a] == i){

                    a = 1;


                    while(board[y - a][x + a] == j){

                        board[y - a][x + a] = i;

                        a++;

                    }

					b++;

					break;

				}

			}

		}

		//	pi/2

		a = 1;
		if(board[y - a][x] == j){
			while(y - a > 0){

				a++;

				if(board[y - a][x] == 0){
					break;

				}

				if(board[y - a][x] == i){

                    a = 1;


                    while(board[y - a][x] == j){

                        board[y - a][x] = i;

                        a++;

                    }

					b++;

					break;

				}

			}

		}

		//	3pi/4

		a = 1;

		if(board[y - a][x - a] == j){
			while(x - a > 0 && y - a > 0){

				a++;

				if(board[y - a][x - a] == 0){
					break;

				}

				if(board[y - a][x - a] == i){

                    a = 1;


                    while(board[y - a][x - a] == j){

                        board[y - a][x - a] = i;

                        a++;

                    }

					b++;

					break;

				}

			}

		}

		//	pi

		a = 1;

		if(board[y][x - a] == j){
			while(x - a > 0){

				a++;

				if(board[y][x - a] == 0){
					break;

				}

				if(board[y][x - a] == i){

                    a = 1;


                    while(board[y][x - a] == j){

                        board[y][x - a] = i;

                        a++;

                    }

					b++;

					break;

				}

			}

		}

		//	5pi/4

		a = 1;

		if(board[y + a][x - a] == j){
			while(x - a > 0 && y + a < 7){

				a++;

				if(board[y + a][x - a] == 0){
					break;

				}

				if(board[y + a][x - a] == i){

                    a = 1;


                    while(board[y + a][x - a] == j){

                        board[y + a][x - a] = i;

                        a++;

                    }

					b++;

					break;

				}

			}

		}

		//	3pi/2

		a = 1;

		if(board[y + a][x] == j){
			while(y + a < 7){

				a++;

				if(board[y + a][x] == 0){
					break;

				}

				if(board[y + a][x] == i){

                    a = 1;


                    while(board[y + a][x] == j){

                        board[y + a][x] = i;

                        a++;

                    }

					b++;

					break;

				}

			}

		}

		//	7pi/4

		a = 1;

		if(board[y + a][x + a] == j){
			while(x + a < 7 && y + a < 7){

				a++;

				if(board[y + a][x + a] == 0){
					break;

				}

				if(board[y + a][x + a] == i){

                    a = 1;

                    while(board[y + a][x + a] == j){

                        board[y + a][x + a] = i;

                        a++;

                    }

                    b++;

					break;

				}

			}

		}

	}

    if(b == 0){
        return(0);

    }else{
        board[y][x] = i;

        return(1);

    }

}

int input(){

	if((GetKeyState(VK_RIGHT) & 0x8000) && cursor_x < 7){
        cursor_x++;
		input_flag = 1;

    }else if((GetKeyState(VK_LEFT) & 0x8000) && cursor_x > 0){
        cursor_x--;
        input_flag = 1;

    }
    
    if((GetKeyState(VK_UP) & 0x8000) && cursor_y > 0){
        cursor_y--;
        input_flag = 1;

    }else if((GetKeyState(VK_DOWN) & 0x8000) && cursor_y < 7){
        cursor_y++;
        input_flag = 1;

    }

    if(GetKeyState(VK_RETURN) & 0x8000){
    	input_flag = 1;

    	if(place(cursor_x, cursor_y) == 1){
            turn++;

    	}
        
    }

    if(GetKeyState(VK_SPACE) & 0x8000){
        input_flag = 1;

        turn++;
        
    }

    if(GetKeyState(VK_BACK) & 0x8000){
        input_flag = 1;

        results();
        restart = 1;

    }

    return(0);

}

int main(void){
	
	int i,j;
	int empty;
	int pass;
	

	while(1){
		
		startup();

		cursor_x = 0;
		cursor_y = 0;

		input_flag = 0;
		turn_flag = 0;

		turn = 1;

		restart = 0;

		pass = 0;


		for(i = 0; i < 8; i++){
			for(j = 0; j < 8; j++){
				board[i][j] = 0;

			}

		}

		board[3][3] = 2;
		board[3][4] = 1;
		board[4][3] = 1;
		board[4][4] = 2;

		menu();

		while(restart == 0){

			empty = 0;

			for(i = 0; i < 8; i++){
				for(j = 0; j < 8; j++){
					if(check(i, j) == 1)
						empty++;

				}

			}

			if(empty == 0){
				pass ++;
				turn++;

			}

			if(pass == 2){
				pass = 0;
				results();
				restart = 1;

			}

			if(empty != 0){
				if(players == 1 && turn % 2 == 0){
					ai();
					turn++;

				}else if(players == 1 && turn % 2 != 0){
					input();

				}else if(players == 2){
					input();

				}
			
			}

			if(restart == 0){

				draw();

				if(input_flag == 1){
					
					input_flag = 0;
					Sleep(SLEEP);
					
				}
				
			}

		}
		
	}

}