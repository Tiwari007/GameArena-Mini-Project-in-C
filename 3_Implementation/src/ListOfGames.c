#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


#define pf printf
#define sf scanf


char square[10] = {'o','1','2','3','4','5','6','7','8','9'};



void List_Of_Games(){
    int choice;
    
    pf("1 -> Tic Tac Toe.\n2-> Or We can Ask one another a Mathematics Questions...\n");
    scanf("%d", &choice);
    if(choice == 1){
        printf("So you wanna play Tic Tac Toe\n\n");
        int player = 1, i ,choice;
	char mark; // X,O
	do {
		drawBoard(square);
		player = (player % 2) ? 1 : 2;
		printf("Player %d, enter the choice : ",player);
		scanf("%d",&choice);
		mark = (player == 1) ? 'X' : 'O';
		if(choice == 1 && square[1] == '1')
			square[1] = mark;
		else if(choice == 2 && square[2] == '2')
			square[2] = mark;
			else if(choice == 3 && square[3] == '3')
			square[3] = mark;
			else if(choice == 4 && square[4] == '4')
			square[4] = mark;
			else if(choice == 5 && square[5] == '5')
			square[5] = mark;
			else if(choice == 6 && square[6] == '6')
			square[6] = mark;
			else if(choice == 7 && square[7] == '7')
			square[7] = mark;
			else if(choice == 8 && square[8] == '8')
			square[8] = mark;
			else if(choice == 9 && square[9] == '9')
			square[9] = mark;
			
			else {
				printf("Invalid option !");
				player--;
				// getch();
			}
			i = checkWin(square);
			player++;	
		
	}while(i == -1);
	
	drawBoard(square);
	if(i==1){
		printf("\t\t\t\t==>Player %d won",--player);
		// PlaySound(TEXT("C:\\Users\\dell\\Music\\win.wav"),NULL,SND_SYNC);
	}
	else {
		printf("\t\t\t==>Game draw");
	}
    }
    
    else if(choice == 2){
        printf("So you wanna play mathematics problems");
        
    }
}