
int board[8][8];
int turn;

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