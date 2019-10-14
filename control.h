
int cursor_x;
int cursor_y;
int input_flag;
int turn;
int turn_flag;

int check();
void change();
void results();
int place();

int input(){

	if((GetKeyState(VK_RIGHT) & 0x8000) && cursor_x < 7){
        cursor_x++;
		input_flag = 1;

    }else if((GetKeyState(VK_LEFT) & 0x8000) && cursor_x > 0){
        cursor_x--;
        input_flag = 1;

    }
    
    if((GetKeyState(VK_UP) & 0x8000) && cursor_y > 0){
        cursor_y--;
        input_flag = 1;

    }else if((GetKeyState(VK_DOWN) & 0x8000) && cursor_y < 7){
        cursor_y++;
        input_flag = 1;

    }

    if(GetKeyState(VK_RETURN) & 0x8000){
    	input_flag = 1;

    	if(place(cursor_x, cursor_y) == 1){
            turn++;

    	}
        
    }

    if(GetKeyState(VK_SPACE) & 0x8000){
        input_flag = 1;

        turn++;
        
    }

    if(GetKeyState(VK_BACK) & 0x8000){
        input_flag = 1;

        results();
        restart = 1;

    }

    return(0);

}