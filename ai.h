
int board[8][8];
int turn;

int mode;
int self, opponent;


int board1[8][8];
int board2[8][8];
int board3[8][8];
int board4[8][8];
int board5[8][8];

int place();

int place1(int x, int y){

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

	if(board1[y][x] == 0){

		//	0

		a = 1;

		if(board1[y][x + a] == j){
			while(x + a < 7){

				a++;

				if(board1[y][x + a] == 0){
					break;
	
				}
	
				if(board1[y][x + a] == i){

                    a = 1;

                    while(board1[y][x + a] == j){

                        board1[y][x + a] = i;

                        a++;

                    }

					b++;

					break;
	
				}
	
			}

		}

		//	pi/4

		a = 1;

		if(board1[y - a][x + a] == j){
			while(x + a < 7 && y - a > 0){

				a++;

				if(board1[y - a][x + a] == 0){
					break;
	
				}

				if(board1[y - a][x + a] == i){

                    a = 1;


                    while(board1[y - a][x + a] == j){

                        board1[y - a][x + a] = i;

                        a++;

                    }

					b++;

					break;
	
				}
	
			}

		}

		//	pi/2

		a = 1;
		if(board1[y - a][x] == j){
			while(y - a > 0){

				a++;

				if(board1[y - a][x] == 0){
					break;
	
				}

				if(board1[y - a][x] == i){

                    a = 1;


                    while(board1[y - a][x] == j){

                        board1[y - a][x] = i;

                        a++;

                    }

					b++;

					break;
	
				}
	
			}

		}

		//	3pi/4

		a = 1;

		if(board1[y - a][x - a] == j){
			while(x - a > 0 && y - a > 0){

				a++;

				if(board1[y - a][x - a] == 0){
					break;

				}

				if(board1[y - a][x - a] == i){

                    a = 1;


                    while(board1[y - a][x - a] == j){

                        board1[y - a][x - a] = i;

                        a++;

                    }

					b++;

					break;

				}

			}

		}

		//	pi

		a = 1;

		if(board1[y][x - a] == j){
			while(x - a > 0){

				a++;

				if(board1[y][x - a] == 0){
					break;

				}

				if(board1[y][x - a] == i){

                    a = 1;


                    while(board1[y][x - a] == j){

                        board1[y][x - a] = i;

                        a++;

                    }

					b++;

					break;

				}

			}

		}

		//	5pi/4

		a = 1;

		if(board1[y + a][x - a] == j){
			while(x - a > 0 && y + a < 7){

				a++;

				if(board1[y + a][x - a] == 0){
					break;
	
				}

				if(board1[y + a][x - a] == i){

                    a = 1;


                    while(board1[y + a][x - a] == j){

                        board1[y + a][x - a] = i;

                        a++;

                    }

					b++;

					break;
	
				}
		
			}

		}

		//	3pi/2

		a = 1;

		if(board1[y + a][x] == j){
			while(y + a < 7){

				a++;

				if(board1[y + a][x] == 0){
					break;
	
				}

				if(board1[y + a][x] == i){

                    a = 1;


                    while(board1[y + a][x] == j){

                        board1[y + a][x] = i;

                        a++;

                    }

					b++;

					break;
	
				}
		
			}

		}

		//	7pi/4

		a = 1;

		if(board1[y + a][x + a] == j){
			while(x + a < 7 && y + a < 7){

				a++;

				if(board1[y + a][x + a] == 0){
					break;
	
				}

				if(board1[y + a][x + a] == i){
                    
                    a = 1;

                    while(board1[y + a][x + a] == j){

                        board1[y + a][x + a] = i;

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
        board1[y][x] = i;

        return(1);

    }

}

int place2(int x, int y){

	int a, b;
	int i, j;

	if(turn % 2 != 0){
		i = 2;
		j = 1;

	}else{
		i = 1;
		j = 2;

	}

    b = 0;

	if(board2[y][x] == 0){

		//	0

		a = 1;

		if(board2[y][x + a] == j){
			while(x + a < 7){

				a++;

				if(board2[y][x + a] == 0){
					break;
	
				}
	
				if(board2[y][x + a] == i){

                    a = 1;

                    while(board2[y][x + a] == j){

                        board2[y][x + a] = i;

                        a++;

                    }

					b++;

					break;
	
				}
	
			}

		}

		//	pi/4

		a = 1;

		if(board2[y - a][x + a] == j){
			while(x + a < 7 && y - a > 0){

				a++;

				if(board2[y - a][x + a] == 0){
					break;
	
				}

				if(board2[y - a][x + a] == i){

                    a = 1;


                    while(board2[y - a][x + a] == j){

                        board2[y - a][x + a] = i;

                        a++;

                    }

					b++;

					break;
	
				}
	
			}

		}

		//	pi/2

		a = 1;
		if(board2[y - a][x] == j){
			while(y - a > 0){

				a++;

				if(board2[y - a][x] == 0){
					break;
	
				}

				if(board2[y - a][x] == i){

                    a = 1;


                    while(board2[y - a][x] == j){

                        board2[y - a][x] = i;

                        a++;

                    }

					b++;

					break;
	
				}
	
			}

		}

		//	3pi/4

		a = 1;

		if(board2[y - a][x - a] == j){
			while(x - a > 0 && y - a > 0){

				a++;

				if(board2[y - a][x - a] == 0){
					break;

				}

				if(board2[y - a][x - a] == i){

                    a = 1;


                    while(board2[y - a][x - a] == j){

                        board2[y - a][x - a] = i;

                        a++;

                    }

					b++;

					break;

				}

			}

		}

		//	pi

		a = 1;

		if(board2[y][x - a] == j){
			while(x - a > 0){

				a++;

				if(board2[y][x - a] == 0){
					break;

				}

				if(board2[y][x - a] == i){

                    a = 1;


                    while(board2[y][x - a] == j){

                        board2[y][x - a] = i;

                        a++;

                    }

					b++;

					break;

				}

			}

		}

		//	5pi/4

		a = 1;

		if(board2[y + a][x - a] == j){
			while(x - a > 0 && y + a < 7){

				a++;

				if(board2[y + a][x - a] == 0){
					break;
	
				}

				if(board2[y + a][x - a] == i){

                    a = 1;


                    while(board2[y + a][x - a] == j){

                        board2[y + a][x - a] = i;

                        a++;

                    }

					b++;

					break;
	
				}
		
			}

		}

		//	3pi/2

		a = 1;

		if(board2[y + a][x] == j){
			while(y + a < 7){

				a++;

				if(board2[y + a][x] == 0){
					break;
	
				}

				if(board2[y + a][x] == i){

                    a = 1;


                    while(board2[y + a][x] == j){

                        board2[y + a][x] = i;

                        a++;

                    }

					b++;

					break;
	
				}
		
			}

		}

		//	7pi/4

		a = 1;

		if(board2[y + a][x + a] == j){
			while(x + a < 7 && y + a < 7){

				a++;

				if(board2[y + a][x + a] == 0){
					break;
	
				}

				if(board2[y + a][x + a] == i){
                    
                    a = 1;

                    while(board2[y + a][x + a] == j){

                        board2[y + a][x + a] = i;

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
        board2[y][x] = i;

        return(1);

    }

}

int place3(int x, int y){

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

	if(board3[y][x] == 0){

		//	0

		a = 1;

		if(board3[y][x + a] == j){
			while(x + a < 7){

				a++;

				if(board3[y][x + a] == 0){
					break;
	
				}
	
				if(board3[y][x + a] == i){

                    a = 1;

                    while(board3[y][x + a] == j){

                        board3[y][x + a] = i;

                        a++;

                    }

					b++;

					break;
	
				}
	
			}

		}

		//	pi/4

		a = 1;

		if(board3[y - a][x + a] == j){
			while(x + a < 7 && y - a > 0){

				a++;

				if(board3[y - a][x + a] == 0){
					break;
	
				}

				if(board3[y - a][x + a] == i){

                    a = 1;


                    while(board3[y - a][x + a] == j){

                        board3[y - a][x + a] = i;

                        a++;

                    }

					b++;

					break;
	
				}
	
			}

		}

		//	pi/2

		a = 1;
		if(board3[y - a][x] == j){
			while(y - a > 0){

				a++;

				if(board3[y - a][x] == 0){
					break;
	
				}

				if(board3[y - a][x] == i){

                    a = 1;


                    while(board3[y - a][x] == j){

                        board3[y - a][x] = i;

                        a++;

                    }

					b++;

					break;
	
				}
	
			}

		}

		//	3pi/4

		a = 1;

		if(board3[y - a][x - a] == j){
			while(x - a > 0 && y - a > 0){

				a++;

				if(board3[y - a][x - a] == 0){
					break;

				}

				if(board3[y - a][x - a] == i){

                    a = 1;


                    while(board3[y - a][x - a] == j){

                        board3[y - a][x - a] = i;

                        a++;

                    }

					b++;

					break;

				}

			}

		}

		//	pi

		a = 1;

		if(board3[y][x - a] == j){
			while(x - a > 0){

				a++;

				if(board3[y][x - a] == 0){
					break;

				}

				if(board3[y][x - a] == i){

                    a = 1;


                    while(board3[y][x - a] == j){

                        board3[y][x - a] = i;

                        a++;

                    }

					b++;

					break;

				}

			}

		}

		//	5pi/4

		a = 1;

		if(board3[y + a][x - a] == j){
			while(x - a > 0 && y + a < 7){

				a++;

				if(board3[y + a][x - a] == 0){
					break;
	
				}

				if(board3[y + a][x - a] == i){

                    a = 1;


                    while(board3[y + a][x - a] == j){

                        board3[y + a][x - a] = i;

                        a++;

                    }

					b++;

					break;
	
				}
		
			}

		}

		//	3pi/2

		a = 1;

		if(board3[y + a][x] == j){
			while(y + a < 7){

				a++;

				if(board3[y + a][x] == 0){
					break;
	
				}

				if(board3[y + a][x] == i){

                    a = 1;


                    while(board3[y + a][x] == j){

                        board3[y + a][x] = i;

                        a++;

                    }

					b++;

					break;
	
				}
		
			}

		}

		//	7pi/4

		a = 1;

		if(board3[y + a][x + a] == j){
			while(x + a < 7 && y + a < 7){

				a++;

				if(board3[y + a][x + a] == 0){
					break;
	
				}

				if(board3[y + a][x + a] == i){
                    
                    a = 1;

                    while(board3[y + a][x + a] == j){

                        board3[y + a][x + a] = i;

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
        board3[y][x] = i;

        return(1);

    }

}

int place4(int x, int y){

	int a, b;
	int i, j;

	if(turn % 2 != 0){
		i = 2;
		j = 1;

	}else{
		i = 1;
		j = 2;

	}

    b = 0;

	if(board4[y][x] == 0){

		//	0

		a = 1;

		if(board4[y][x + a] == j){
			while(x + a < 7){

				a++;

				if(board4[y][x + a] == 0){
					break;
	
				}
	
				if(board4[y][x + a] == i){

                    a = 1;

                    while(board4[y][x + a] == j){

                        board4[y][x + a] = i;

                        a++;

                    }

					b++;

					break;
	
				}
	
			}

		}

		//	pi/4

		a = 1;

		if(board4[y - a][x + a] == j){
			while(x + a < 7 && y - a > 0){

				a++;

				if(board4[y - a][x + a] == 0){
					break;
	
				}

				if(board4[y - a][x + a] == i){

                    a = 1;


                    while(board4[y - a][x + a] == j){

                        board4[y - a][x + a] = i;

                        a++;

                    }

					b++;

					break;
	
				}
	
			}

		}

		//	pi/2

		a = 1;
		if(board4[y - a][x] == j){
			while(y - a > 0){

				a++;

				if(board4[y - a][x] == 0){
					break;
	
				}

				if(board4[y - a][x] == i){

                    a = 1;


                    while(board4[y - a][x] == j){

                        board4[y - a][x] = i;

                        a++;

                    }

					b++;

					break;
	
				}
	
			}

		}

		//	3pi/4

		a = 1;

		if(board4[y - a][x - a] == j){
			while(x - a > 0 && y - a > 0){

				a++;

				if(board4[y - a][x - a] == 0){
					break;

				}

				if(board4[y - a][x - a] == i){

                    a = 1;


                    while(board4[y - a][x - a] == j){

                        board4[y - a][x - a] = i;

                        a++;

                    }

					b++;

					break;

				}

			}

		}

		//	pi

		a = 1;

		if(board4[y][x - a] == j){
			while(x - a > 0){

				a++;

				if(board4[y][x - a] == 0){
					break;

				}

				if(board4[y][x - a] == i){

                    a = 1;


                    while(board4[y][x - a] == j){

                        board4[y][x - a] = i;

                        a++;

                    }

					b++;

					break;

				}

			}

		}

		//	5pi/4

		a = 1;

		if(board4[y + a][x - a] == j){
			while(x - a > 0 && y + a < 7){

				a++;

				if(board4[y + a][x - a] == 0){
					break;
	
				}

				if(board4[y + a][x - a] == i){

                    a = 1;


                    while(board4[y + a][x - a] == j){

                        board4[y + a][x - a] = i;

                        a++;

                    }

					b++;

					break;
	
				}
		
			}

		}

		//	3pi/2

		a = 1;

		if(board4[y + a][x] == j){
			while(y + a < 7){

				a++;

				if(board4[y + a][x] == 0){
					break;
	
				}

				if(board4[y + a][x] == i){

                    a = 1;


                    while(board4[y + a][x] == j){

                        board4[y + a][x] = i;

                        a++;

                    }

					b++;

					break;
	
				}
		
			}

		}

		//	7pi/4

		a = 1;

		if(board4[y + a][x + a] == j){
			while(x + a < 7 && y + a < 7){

				a++;

				if(board4[y + a][x + a] == 0){
					break;
	
				}

				if(board4[y + a][x + a] == i){
                    
                    a = 1;

                    while(board4[y + a][x + a] == j){

                        board4[y + a][x + a] = i;

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
        board4[y][x] = i;

        return(1);

    }

}

int place5(int x, int y){

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

	if(board5[y][x] == 0){

		//	0

		a = 1;

		if(board5[y][x + a] == j){
			while(x + a < 7){

				a++;

				if(board5[y][x + a] == 0){
					break;
	
				}
	
				if(board5[y][x + a] == i){

                    a = 1;

                    while(board5[y][x + a] == j){

                        board5[y][x + a] = i;

                        a++;

                    }

					b++;

					break;
	
				}
	
			}

		}

		//	pi/4

		a = 1;

		if(board5[y - a][x + a] == j){
			while(x + a < 7 && y - a > 0){

				a++;

				if(board5[y - a][x + a] == 0){
					break;
	
				}

				if(board5[y - a][x + a] == i){

                    a = 1;


                    while(board5[y - a][x + a] == j){

                        board5[y - a][x + a] = i;

                        a++;

                    }

					b++;

					break;
	
				}
	
			}

		}

		//	pi/2

		a = 1;
		if(board5[y - a][x] == j){
			while(y - a > 0){

				a++;

				if(board5[y - a][x] == 0){
					break;
	
				}

				if(board5[y - a][x] == i){

                    a = 1;


                    while(board5[y - a][x] == j){

                        board5[y - a][x] = i;

                        a++;

                    }

					b++;

					break;
	
				}
	
			}

		}

		//	3pi/4

		a = 1;

		if(board5[y - a][x - a] == j){
			while(x - a > 0 && y - a > 0){

				a++;

				if(board5[y - a][x - a] == 0){
					break;

				}

				if(board5[y - a][x - a] == i){

                    a = 1;


                    while(board5[y - a][x - a] == j){

                        board5[y - a][x - a] = i;

                        a++;

                    }

					b++;

					break;

				}

			}

		}

		//	pi

		a = 1;

		if(board5[y][x - a] == j){
			while(x - a > 0){

				a++;

				if(board5[y][x - a] == 0){
					break;

				}

				if(board5[y][x - a] == i){

                    a = 1;


                    while(board5[y][x - a] == j){

                        board5[y][x - a] = i;

                        a++;

                    }

					b++;

					break;

				}

			}

		}

		//	5pi/4

		a = 1;

		if(board5[y + a][x - a] == j){
			while(x - a > 0 && y + a < 7){

				a++;

				if(board5[y + a][x - a] == 0){
					break;
	
				}

				if(board5[y + a][x - a] == i){

                    a = 1;


                    while(board5[y + a][x - a] == j){

                        board5[y + a][x - a] = i;

                        a++;

                    }

					b++;

					break;
	
				}
		
			}

		}

		//	3pi/2

		a = 1;

		if(board5[y + a][x] == j){
			while(y + a < 7){

				a++;

				if(board5[y + a][x] == 0){
					break;
	
				}

				if(board5[y + a][x] == i){

                    a = 1;


                    while(board5[y + a][x] == j){

                        board5[y + a][x] = i;

                        a++;

                    }

					b++;

					break;
	
				}
		
			}

		}

		//	7pi/4

		a = 1;

		if(board5[y + a][x + a] == j){
			while(x + a < 7 && y + a < 7){

				a++;

				if(board5[y + a][x + a] == 0){
					break;
	
				}

				if(board5[y + a][x + a] == i){
                    
                    a = 1;

                    while(board5[y + a][x + a] == j){

                        board5[y + a][x + a] = i;

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
        board5[y][x] = i;

        return(1);

    }

}

int check5(int x, int y){

	int a;
	int i, j;

	if(turn % 2 != 0){
		i = 1;
		j = 2;

	}else{
		i = 2;
		j = 1;

	}

	if(board5[y][x] == 0){

		//	0

		a = 1;

		if(board5[y][x + a] == j){
			while(x + a < 7){

				a++;

				if(board5[y][x + a] == 0){
					break;
	
				}
	
				if(board5[y][x + a] == i){
					return(1);
	
				}

				if(board5[y][x + a] == j){
					return(2);
	
				}
	
			}

		}

		//	pi/4

		a = 1;

		if(board5[y - a][x + a] == j){
			while(x + a < 7 && y - a > 0){

				a++;

				if(board5[y - a][x + a] == 0){
					break;
	
				}

				if(board5[y - a][x + a] == i){
					return(1);
	
				}

				if(board5[y - a][x + a] == j){
					return(2);
	
				}
	
			}

		}

		//	pi/2

		a = 1;
		if(board5[y - a][x] == j){
			while(y - a > 0){

				a++;

				if(board5[y - a][x] == 0){
					break;
	
				}

				if(board5[y - a][x] == i){
					return(1);
	
				}

				if(board5[y - a][x + a] == j){
					return(2);
	
				}
	
			}

		}

		//	3pi/4

		a = 1;

		if(board5[y - a][x - a] == j){
			while(x - a > 0 && y - a > 0){

				a++;

				if(board5[y - a][x - a] == 0){
					break;

				}

				if(board5[y - a][x - a] == i){
					return(1);

				}

				if(board5[y - a][x - a] == j){
					return(2);

				}

			}

		}

		//	pi

		a = 1;

		if(board5[y][x - a] == j){
			while(x - a > 0){

				a++;

				if(board5[y][x - a] == 0){
					break;

				}

				if(board5[y][x - a] == i){
					return(1);

				}

				if(board5[y][x - a] == j){
					return(2);

				}

			}

		}

		//	5pi/4

		a = 1;

		if(board5[y + a][x - a] == j){
			while(x - a > 0 && y + a < 7){

				a++;

				if(board5[y + a][x - a] == 0){
					break;
	
				}

				if(board5[y + a][x - a] == i){
					return(1);
	
				}

				if(board5[y + a][x - a] == j){
					return(2);
	
				}
		
			}

		}

		//	3pi/2

		a = 1;

		if(board5[y + a][x] == j){
			while(y + a < 7){

				a++;

				if(board5[y + a][x] == 0){
					break;
	
				}

				if(board5[y + a][x] == i){
					return(1);
	
				}

				if(board5[y + a][x] == j){
					return(2);
	
				}
		
			}

		}

		//	7pi/4

		a = 1;

		if(board5[y + a][x + a] == j){
			while(x + a < 7 && y + a < 7){

				a++;

				if(board5[y + a][x + a] == 0){
					break;
	
				}

				if(board5[y + a][x + a] == i){
					return(1);
	
				}

				if(board5[y + a][x + a] == j){
					return(2);
	
				}
	
			}

		}

	}

	return(0);

}

int score(int board[8][8]){

	int weight[8][8] = {
        {120,-20, 20,  5,  5, 20,-20,120},
        {-20,-40, -5, -5, -5, -5,-40,-20},
        { 20, -5, 15,  3,  3, 15, -5, 20},
        {  5, -5,  3,  3,  3,  3, -5,  5},
        {  5, -5,  3,  3,  3,  3, -5,  5},
        { 20, -5, 15,  3,  3, 15, -5, 20},
        {-20,-40, -5, -5, -5, -5,-40,-20},
        {120,-20, 20,  5,  5, 20,-20,120},

    };

	int alpha, beta;
	int score = 0;

	if(board[0][0] != 0){
		weight[0][1] = 40;
		weight[1][1] = 60;
		weight[1][0] = 40;

	}

	if(board[0][7] != 0){
		weight[0][6] = 40;
		weight[1][6] = 60;
		weight[1][7] = 40;

	}

	if(board[7][0] != 0){
		weight[6][0] = 40;
		weight[6][1] = 60;
		weight[7][1] = 40;

	}

	if(board[7][7] != 0){
		weight[7][6] = 40;
		weight[6][6] = 60;
		weight[6][7] = 40;

	}
	
	switch (mode){

		case 1:
			
			for(alpha = 0; alpha < 8; alpha++){
				for(beta = 0; beta < 8; beta++){
					if(check5(alpha, beta) == self){
						score++;

					}else if(check5(alpha, beta) == opponent){
						score--;

					}

				}

			}

			break;
		
		case 2:

			for(alpha = 0; alpha < 8; alpha++){
				for(beta = 0; beta < 8; beta++){
					if(board[alpha][beta] == self){
						score += weight[alpha][beta];

					}else if(board[alpha][beta] == opponent){
						score -= weight[alpha][beta];

					}

				}

			}

			break;

		case 3:
		
			for(alpha = 0; alpha < 8; alpha++){
				for(beta = 0; beta < 8; beta++){
					if(board[alpha][beta] == self){
						score++;

					}else if(board[alpha][beta] == opponent){
						score--;

					}

				}

			}

			break;	

	}

	return(score);

}

int ai(){
	clock_t start, end;
	float runTime;
	
	start = clock();
	
    int memory1[3][32];
    int memory2[3][32];
    int memory3[3][32];
	int memory4[3][32];
	int memory5[3][32];

    int i, j, k, l, m, n, o, p, q, r;
	int alpha, beta;
    int a, b, c, d, e;
	int A, B, C, D, E;
	int max1, max3, max5;
	int min2, min4;
	int maxPos;
	int count, count1, count2, count3, count4, count5;

	/*
	FILE *fpD;
	fpD = fopen("debug.txt", "w");
	*/

	FILE *fpL;
	fpL = fopen("log.txt", "a");

	if(turn == 1 || turn == 2){
		fprintf(fpL, "\n---- LOG%d ---- START ----\n\n", time(NULL));

	}

    if(turn % 2 != 0){
		self = 1;
		opponent = 2;

	}else{
		self = 2;
		opponent = 1;

	}

	if(turn < 5){
		mode = 1;

	}else if(turn < 55){
		mode = 2;

	}else{
		mode = 3;

	}

	for(alpha = 0; alpha < 3; alpha++){
		for(beta = 0; beta < 32; beta++){
			memory1[alpha][beta] = 0;

		}

	}
	
	count = 0;
    a = 0;
	count1 = 0;

    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){

			for(alpha = 0; alpha < 8; alpha++){
				for(beta = 0; beta < 8; beta++){
					board1[alpha][beta] = board[alpha][beta];

				}

			}

            if(place1(j, i) == 1){
                memory1[0][a] = j;
                memory1[1][a] = i;
				count1++;

				/* fprintf(fpD, "%02d\n\n", count1);

				for(alpha = 0; alpha < 8; alpha++){
					for(beta = 0; beta < 8; beta++){
						fprintf(fpD, "%d", board1[alpha][beta]);

					}

					fprintf(fpD, "\n");

				}

				fprintf(fpD, "\n"); */

				for(alpha = 0; alpha < 3; alpha++){
					for(beta = 0; beta < 32; beta++){
						memory2[alpha][beta] = 0;

					}

				}

				b = 0;
				count2 = 0;

				if(turn < 60){
					for(k = 0; k < 8; k++){
						for(l = 0; l < 8; l++){

							for(alpha = 0; alpha < 8; alpha++){
								for(beta = 0; beta < 8; beta++){
									board2[alpha][beta] = board1[alpha][beta];

								}

							}

							if(place2(l, k) == 1){
								memory2[0][b] = k;
								memory2[1][b] = l;
								count2 ++;

								/* fprintf(fpD, "  %02d%02d\n\n  ", count1, count2);

								for(alpha = 0; alpha < 8; alpha++){
									for(beta = 0; beta < 8; beta++){
										fprintf(fpD, "%d", board2[alpha][beta]);

									}

									fprintf(fpD, "\n  ");

								}

								fprintf(fpD, "\n"); */

								for(alpha = 0; alpha < 3; alpha++){
									for(beta = 0; beta < 32; beta++){
										memory3[alpha][beta] = 0;

									}

								}

								c = 0;
								count3 = 0;
								
								if(turn < 59){
									for(m = 0; m < 8; m++){
										for(n = 0; n < 8; n++){

											for(alpha = 0; alpha < 8; alpha++){
												for(beta = 0; beta < 8; beta++){
													board3[alpha][beta] = board2[alpha][beta];

												}

											}

											if(place3(n, m) == 1){
												memory3[0][c] = m;
												memory3[1][c] = n;
												count3++;

												/* fprintf(fpD, "    %02d%02d%02d\n\n    ", count1, count2, count3);

												for(alpha = 0; alpha < 8; alpha++){
													for(beta = 0; beta < 8; beta++){
														fprintf(fpD, "%d", board3[alpha][beta]);

													}

													fprintf(fpD, "\n    ");

												}

												fprintf(fpD, "\n"); */

												for(alpha = 0; alpha < 3; alpha++){
													for(beta = 0; beta < 32; beta++){
														memory4[alpha][beta] = 0;

													}

												}

												d = 0;
												count4 = 0;

												if(turn < 58){
													for(o = 0; o < 8; o++){
														for(p = 0; p < 8; p++){

															for(alpha = 0; alpha < 8; alpha++){
																for(beta = 0; beta < 8; beta++){
																	board4[alpha][beta] = board3[alpha][beta];

																}

															}

															if(place4(p, o) == 1){
																memory4[0][d] = o;
																memory4[1][d] = p;
																count4 ++;

																/* fprintf(fpD, "      %02d%02d%02d%02d\n\n      ", count1, count2, count3, count4);

																for(alpha = 0; alpha < 8; alpha++){
																	for(beta = 0; beta < 8; beta++){
																		fprintf(fpD, "%d", board4[alpha][beta]);

																	}

																	fprintf(fpD, "\n      ");

																}

																fprintf(fpD, "\n"); */

																for(alpha = 0; alpha < 3; alpha++){
																	for(beta = 0; beta < 32; beta++){
																		memory5[alpha][beta] = 0;

																	}

																}

																e = 0;
																count5 = 0;

																if(turn < 57){
																	for(q = 0; q < 8; q++){
																		for(r = 0; r < 8; r++){

																			for(alpha = 0; alpha < 8; alpha++){
																				for(beta = 0; beta < 8; beta++){
																					board5[alpha][beta] = board4[alpha][beta];

																				}

																			}

																			if(place5(r, q) == 1){
																				memory5[0][e] = q;
																				memory5[1][e] = r;
																				count5++;

																				/* fprintf(fpD, "        %02d%02d%02d%02d%02d\n\n        ", count1, count2, count3, count4, count5);

																				for(alpha = 0; alpha < 8; alpha++){
																					for(beta = 0; beta < 8; beta++){
																						fprintf(fpD, "%d", board5[alpha][beta]);

																					}

																					fprintf(fpD, "\n        ");

																				} */

																				memory5[2][e] = score(board5);

																				//fprintf(fpD, "score: %d(mode %d)\n\n", memory5[2][e], mode);
																				
																				count++;

																				if(count5 == 1){
																					max5 = memory5[2][e];

																				}else if(memory5[2][e] > max5){
																					max5 = memory5[2][e];

																				}

																				if(memory5[2][e] > min4 && count4 > 1){
																					e++;
																					goto FIVE;

																				}

																				e++;
																			}	

																		}

																	}

																	FIVE:

																	memory4[2][d] = max5;
																
																}else{
																	memory4[2][a] = score(board4);

																}
																
																if(count4 == 1){
																	min4 = memory4[2][d];

																}else if(memory4[2][d] < min4){
																	min4 = memory4[2][d];

																}

																d++;

															}

														}

													}

													memory3[2][c] = min4;
												
												}else{
													memory3[2][a] = score(board3);

												}

												if(count3 == 1){
													max3 = memory3[2][c];

												}else if(memory3[2][c] > max3){
													max3 = memory3[2][c];

												}

												if(memory3[2][c] > min2 && count2 > 1){
													c++;
													goto THREE;

												}

												c++;

											}

										}

									}

									THREE:

									memory2[2][b] = max3;
								
								}else{
									memory2[2][a] = score(board2);

								}

								if(count2 == 1){
									min2 = memory2[2][b];

								}else if(memory2[2][b] < min2){
									min2 = memory2[2][b];

								}

								b++;
							
							}

						}

					}

					memory1[2][a] = min2;
					
				}else{
					memory1[2][a] = score(board1);

				}				

				if(count1 == 1){
					max1 = memory1[2][a];
					maxPos = a;

				}else if(memory1[2][a] > max1){
					max1 = memory1[2][a];
					maxPos = a;


				}

				a++;

			}

		}

    }

	/*
	fprintf(fpD, "(%d, %d)\n", memory1[0][maxPos], memory1[1][maxPos]);

	fclose(fpD);
	*/

	place(memory1[0][maxPos], memory1[1][maxPos]);
	
	end = clock();
		
	runTime = (double)(end - start)/CLOCKS_PER_SEC;
	
	fprintf(fpL, "turn %02d: (%d, %d) score = %04d, mode = %d, num = %05d, time = %.3f\n", turn, memory1[0][maxPos], memory1[1][maxPos], memory1[2][maxPos], mode, count, runTime);

	if(turn == 59 || turn == 60){

		int scoreSelf = 0;
		int scoreOpponent = 0;

		for(i = 0; i < 8; i++){
			for(j = 0; j < 8; j++){
				if(board[i][j] == self){
					scoreSelf++;

				}else if(board[i][j] == opponent){
					scoreOpponent++;

				}
			
			}

		}

		fprintf(fpL, "\nRESULTS");
		fprintf(fpL, "\n  SELF:     %d", scoreSelf);
		fprintf(fpL, "\n  OPPONENT: %d\n", scoreOpponent);
		fprintf(fpL, "\n---- LOG%d ---- END ----\n\n", time(NULL));

	}

	fclose(fpL);

    return(0);

}