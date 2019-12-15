
void startup(){
	FILE *fp;
	fp = fopen(".\\log\\log.txt", "a");
	fprintf(fp, "\n%d\n", time(NULL));
	srand(time(NULL));
	system("cls");
	printf("\e[?25l");
	system("MODE 64, 38"); // 8*8, 4*8+6
	system("chcp 65001");
	system("cls");
	SetConsoleTitle("Othello");
	SetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), ENABLE_EXTENDED_FLAGS);
	fclose(fp);

    
}