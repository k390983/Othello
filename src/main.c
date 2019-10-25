
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>

#include "global.h"
#include "draw.h"
#include "control.h"
#include "place.h"
#include "check.h"
#include "ai.h"
#include "startup.h"
#include "menu.h"
#include "results.h"

#define SLEEP 150

int board[8][8];
int cursor_x;
int cursor_y;
int input_flag;
int turn;
int turn_flag;
int restart;
int players;

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