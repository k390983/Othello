
void startup(){
	FILE *fp;
	fp = fopen(".\\log\\log.txt", "a");
	fprintf(fp, "\n%d\n", time(NULL));
	srand(time(NULL));
	system("cls");
	printf("\e[?25l");
	system("MODE 96, 54"); // 12*8, 6*8+6
	system("chcp 65001");
	system("cls");
	SetConsoleTitle("Othello");
	fclose(fp);

    
}