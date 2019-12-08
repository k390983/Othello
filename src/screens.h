
int players;
int board[8][8];
int turn;

#define DELAY 250

void menu(){

    int a,i;
    int input = 0;

    while(1){

        COORD coord;
        coord.X= 0;
        coord.Y = 0;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);

        for(i = 0; i < 10; i++){
            printf("\n");

        }

        printf("               ███    █   █            █   █\n");
        printf("              █   █   █   █            █   █\n");
        printf("              █   █ █████ █       ███  █   █    ███\n");
        printf("              █   █   █   ████   █   █ █   █   █   █\n");
        printf("              █   █   █   █   █  █████ █   █   █   █\n");
        printf("              █   █   █   █   █  █     █   █   █   █\n");
        printf("               ███    ███ █   █   ███   ██  ██  ███\n\n\n");

        //"00000000001111111111222222222233/\333333444444444455555555556666"
        //"               1人で遊ぶ(vs AI)     2人で遊ぶ"
        printf("                 ");

        if(a % 2 != 0){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

        }else{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);

        }

        printf("1人で遊ぶ(vs AI)");

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

        printf("     ");

        if(a % 2 != 0){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);

        }else{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

        }

        printf("2人で遊ぶ\n\n\n");

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

        printf("            矢印キーとエンターキーで選択してください");

        if(input == 1){
            input = 0;
            Sleep(150);

        }

        if(GetKeyState(VK_RIGHT) & 0x8000){
            a++;
            input = 1;

        }else if(GetKeyState(VK_LEFT) & 0x8000){
            a--;
            input = 1;

        }

        if(GetKeyState(VK_RETURN) & 0x8000){
			break;

		}

    }


    if(a % 2 != 0){
        players = 2;

    }else{
        players = 1;

    }

}

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

	for(i = 0; i < 10; i++){
		printf("\n");

	}

	printf("\n\n");

	Sleep(DELAY);

	printf("                        ターン: %d\n\n", turn);

	Sleep(DELAY);

	printf("                          空白: %d\n\n", e);

	Sleep(DELAY);

	printf("                            黒: %d ポイント\n\n", b);

	Sleep(DELAY);

	if(players == 1){
		printf("                        白(AI): %d ポイント\n\n", w);

	}else{
		printf("                            白: %d ポイント\n\n", w);

	}


	Sleep(DELAY);

	printf("                  エンターキー: メニューに戻る");

	while(1){
		if(GetKeyState(VK_RETURN) & 0x8000){
			return;

		}

	}

}
