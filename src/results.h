
int board[8][8];
int turn;
int players;

#define DELAY 250

void results(){

	int e,b,w;
	int i,j;

	FILE *fp;
	fp = fopen(".\\log\\results.txt", "a");

	e = 0;
	b = 0;
	w = 0;

	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			if(board[i][j] == 1){
				b++;

			}else if(board[i][j] == 2){
				w++;

			}else{
				e++;

			}
		
		}

	}

	fprintf(fp, "END\n BLACK: %d, WHITE: %d, empty: %d", b, w, e);
	fclose(fp);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

	system("cls");

	for(i = 0; i < 18; i++){
		printf("\n");

	}

	printf("\n\n");

	Sleep(DELAY);

	printf("                                       ターン: %d\n\n", turn);

	Sleep(DELAY);

	printf("                                         空白: %d\n\n", e);

	Sleep(DELAY);

	printf("                                           黒: %d ポイント\n\n", b);
	
	Sleep(DELAY);

	if(players == 1){
		printf("                                       白(AI): %d ポイント\n\n", w);

	}else{
		printf("                                           白: %d ポイント\n\n", w);

	}
	

	Sleep(DELAY);

	printf("                                  エンターキー: メニューに戻る");

	while(1){
		if(GetKeyState(VK_RETURN) & 0x8000){
			return;

		}

	}

}