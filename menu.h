
int players;

void menu(){

    int a,i;
    int input = 0;

    startup();

    while(1){

        COORD coord;
        coord.X= 0;
        coord.Y = 0;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);

        for(i = 0; i < 15; i++){
            printf("\n");

        }

        printf("                            ███    █   █            █   █\n");
        printf("                           █   █   █   █            █   █\n");
        printf("                           █   █ █████ █       ███  █   █    ███\n");
        printf("                           █   █   █   ████   █   █ █   █   █   █\n");
        printf("                           █   █   █   █   █  █████ █   █   █   █\n");
        printf("                           █   █   █   █   █  █     █   █   █   █\n");
        printf("                            ███    ███ █   █   ███   ██  ██  ███\n\n\n");

        //"000000000011111111112222222222333333333344/\4444445555555555666666666677777777778888888888999999"
        //"                         1人で遊ぶ(vs AI)     2人で遊ぶ                                          "
        printf("                              ");

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

        printf("                         矢印キーとエンターキーで選択してください");

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