/**
 * @file LoadingIcon.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


#define pf printf
#define sf scanf


char square[10] = {'o','1','2','3','4','5','6','7','8','9'};


/**
 * @brief 
 * 
 */
void LoadingIcon(){
       
    const int trigger = 500; // ms
    const int numDots = 4;
    const char prompt[] = "\t\t\t\t\tWait for Seconds Loading Environment";

    while (1) {
        // Return and clear with spaces, then return and print prompt.
        printf("\r%*s\r%s", sizeof(prompt) - 1 + numDots, "", prompt);
        fflush(stdout);

        // Print numDots number of dots, one every trigger milliseconds.
        for (int i = 0; i < numDots; i++) {
            usleep(trigger * 1000);
            fputc('.', stdout);
            fflush(stdout);
        }
        break;
    }
}





/**
 * @brief 
 * 
 * @param YourName 
 * @param BffName 
 */
void Environment(char YourName[],char BffName[]){
    pf("\n\n\t\tOk so Here You are Welcome %s and %s to our environmentnt... Let's GO\n\n\t\t\t\n",YourName,BffName);
    pf("So here is yours two character\n\n");
    pf("            ******                       ******           \n");
    pf("            ******                       ******           \n");
    pf("            ******                       ******           \n");
    pf("              **                           **             \n");
    pf("              **                           **             \n");
    pf("             *  *                         *  *            \n");
    pf("            *    *                       *    *           \n");
    pf("           *      *                     *      *          \n\n");
    pf("          => %s                          => %s        \n\n",YourName,BffName);


    pf("\t\t\tLet's Look at their conversation : - \n\n\n");
    pf("%s : Hey %s Can we play games outside?\n",YourName,BffName);
    sleep(3);
    pf("%s : OH that's cool to hear you want to play outside. but wait a min there was a raining ouside that's why you're saying to play ...\n",BffName);
    sleep(3);
    pf("%s : LOL i didn't see that Sorry\n",YourName);
    sleep(3);
    pf("%s : Really So what can we do now\n",BffName);
    sleep(3);
    pf("%s : Its ok we can play indoor games...\n",YourName);
    sleep(3);
    pf("%s : Yah that's sound interesting. Let me see what type of games we have : -\n\n",BffName);
    sleep(3);
    pf("1 -> Tic Tac Toe.\n2-> Or We can Ask one another a Mathematics Questions...\n");
    sleep(3);
    pf("%s : Aan Mathematics its boring let's decide by playing ROCK PAPER SCEASER for find what to play... Isn't it sounds cool...\n\n\t\t",YourName);
    sleep(3);
    pf("OK THEN LET'S PLAY ROCK PAPER SCISOR");


}


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




void Rock_Paper_Scissor(char YourName[],char BffName[]){
    int in1,in2;

    LOOP:
    printf("%s and %s please follow the rules for the game\nPress 1 for stone\nPress 2 for paper\nPress 3 for scissors\n\n",YourName,BffName);
    printf("Now let us start the game\n");

    printf("%s is it STONE 1, PAPER 2 OR SCISSORS 3\n",YourName);
    scanf("%d",&in1);
    printf("%s is it STONE 1, PAPER 2 OR SCISSORS 3\n",BffName);
    scanf("%d",&in2);

    if ((in1==1 && in2==1) || (in1==2 && in2==2) || (in1==3 && in2==3)){
        printf("Neither %s nor %s won, it is a draw",YourName,BffName);
        goto LOOP;
    }
    

    // cppcheck-suppress duplicateExpression
    else if ((in1==1 && in2==3) || (in1==3 && in2==2) || (in1==1 && in2==3)|| (in1==2 && in2==1) || (in1==3 && in2==2) || (in1==1 && in2==3)){
        printf("Congrats %s! You won!!!!",YourName);
        pf("Ok %s its all upto you your choice now. what you want to play first...\n\n",YourName);
        List_Of_Games();
    }
    

    // cppcheck-suppress duplicateExpression
    else if ((in1==1 && in2==2) || (in1==3 && in2==1) || (in1==1 && in2==2)|| (in1==2 && in2==3)){
        printf("Congrats %s! You won!!!!",BffName);
        pf("Ok %s its all upto you your choice now. what you want to play first...\n\n",BffName);
        List_Of_Games();
    }
    
}


int checkWin(char * square){
	if(square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if(square[7] == square[8] && square[8] == square[9])
		return 1;
	else if(square[1] == square[4] && square[4] == square[7])
		return 1;
	else if(square[2] == square[5] && square[5] == square[8])
		return 1;
	else if(square[3] == square[6] && square[6] == square[9])
		return 1;
	else if(square[1] == square[5] && square[5] == square[9])
		return 1;
	else if(square[3] == square[5] && square[5] == square[7])
		return 1;
	else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] !='4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else 
		return -1;	
}


void drawBoard(char * square){
	system("cls");
	printf("\n\n\n\n\n\n\t\t\t\t\t\t Tic Tac Toe \n\n");
	printf("\t\t\t\t\tPlayer1 (X) - Player2 (O) \n\n\n");
	printf("\t\t\t\t                |               |               \n");
    printf("\t\t\t\t                |               |               \n");
    printf("\t\t\t\t                |               |               \n");
	printf("\t\t\t\t       %c        |       %c       |       %c      \n",square[1],square[2],square[3]);
    printf("\t\t\t\t                |               |               \n");
    printf("\t\t\t\t                |               |               \n");
	printf("\t\t\t\t________________|_______________|_______________\n");
    printf("\t\t\t\t                |               |               \n");
    printf("\t\t\t\t                |               |               \n");
    printf("\t\t\t\t                |               |               \n");
    printf("\t\t\t\t                |               |               \n");
	printf("\t\t\t\t       %c        |       %c       |       %c      \n",square[4],square[5],square[6]);
    printf("\t\t\t\t                |               |               \n");
    printf("\t\t\t\t                |               |               \n");
	printf("\t\t\t\t________________|_______________|_______________\n");
	printf("\t\t\t\t                |               |               \n");
    printf("\t\t\t\t                |               |               \n");
    printf("\t\t\t\t                |               |               \n");
	printf("\t\t\t\t       %c        |       %c       |       %c      \n",square[7],square[8],square[9]);
    printf("\t\t\t\t                |               |               \n");
    printf("\t\t\t\t                |               |               \n");
	printf("\t\t\t\t                |               |               \n\n\n\n\n");	
}