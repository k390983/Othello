
int board[8][8];
int turn;

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