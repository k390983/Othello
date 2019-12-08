
int board[8][8];
int cursor_x;
int cursor_y;
int turn;
int check();

void draw(){

	int i,j,k,l;

	l = 0;

	COORD coord;
    coord.X= 0;
    coord.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
    //printf("TURN: %d, x: %d, y: %d\n", turn, cursor_x, cursor_y);

	for(i = 0; i < 8; i++){

		for(k = 0; k < 4; k++){

			for(j = 0; j < 8; j++){

					switch(board[i][j]){
						case 0:
							if(i == cursor_y && j == cursor_x){
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN | BACKGROUND_INTENSITY);

							}else{
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);

							}
							
							if(check(j, i) == 1){
								
								if(i == cursor_y && j == cursor_x){
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY);

								}else{
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | BACKGROUND_GREEN);

								}
								
								switch(k){
									case 0:
										printf("        ");
										break;

									case 1:
										printf("  ▒▒▒▒  ");
										break;

									case 2:
										printf("  ▒▒▒▒  ");
										break;

									case 3:
										printf("        ");
										break;

							}
								
							}else{
								printf("        ");
								
							}
							
							break;

						case 2:
							if(i == cursor_y && j == cursor_x){
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_INTENSITY);

							}else{
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN);
								
							}
							
							switch(k){
								case 0:
									printf("        ");
									break;

								case 1:
									printf("  ████  ");
									break;

								case 2:
									printf("  ████  ");
									break;

								case 3:
									printf("        ");
									break;

							}

							break;

						case 1:
							if(i == cursor_y && j == cursor_x){
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN | BACKGROUND_INTENSITY);

							}else{
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
								
							}
							
							switch(k){
								case 0:
									printf("        ");
									break;

								case 1:
									printf("  ████  ");
									break;

								case 2:
									printf("  ████  ");
									break;

								case 3:
									printf("        ");
									break;

							}
							
							break;

					}

			}

			printf("\n");

		}

	}

	for(i = 0; i < 6; i++){
		if(turn % 2 != 0){

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_GREEN);

			switch(i){
				case 0:  //"00000000001111111111222222222233/\333333444444444455555555556666"
					printf("                                                                ");

					break;

				case 1:  //"00000000001111111111222222222233/\3333334444444444555555555566666"
					printf("    ████               矢印キー: 選択する                       ");

					break;

				case 2:  //"00000000001111111111222222222233/\3333334444444444555555555566666"  
					printf("  ████████           エンターキー: 石を打つ                     ");

					break;

				case 3:  //"00000000001111111111222222222233/\3333334444444444555555555566666"  
					printf("  ████████    バックスペースキー: ゲームを終了する              ");

					break;

				case 4:  //"00000000001111111111222222222233/\3333334444444444555555555566666"  
					printf("    ████                                                        ");

					break;

				case 5:  //"00000000001111111111222222222233/\3333334444444444555555555566666"  
					printf("                                                                ");

					break;

			}

			if(l < 5){
				printf("\n");

			}

			l++;
			
	
		}else{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN);

			switch(i){
				case 0:  //"000000000011111111112222222222333333333344/\444444555555555566666"
					printf("                                                                ");

					break;

				case 1:  //"00000000001111111111222222222233/\3333334444444444555555555566666"
					printf("                       矢印キー: 選択する               ████    ");

					break;

				case 2:  //"00000000001111111111222222222233/\3333334444444444555555555566666"  
					printf("                     エンターキー: 石を打つ           ████████  ");

					break;

				case 3:  //"00000000001111111111222222222233/\3333334444444444555555555566666"  
					printf("              バックスペースキー: ゲームを終了する    ████████  ");

					break;

				case 4:  //"00000000001111111111222222222233/\3333334444444444555555555566666"  
					printf("                                                        ████    ");

					break;

				case 5:  //"00000000001111111111222222222233/\3333334444444444555555555566666"  
					printf("                                                                ");

					break;

			}

			if(l < 5){
				printf("\n");

			}

			l++;
	
		}
	}

}