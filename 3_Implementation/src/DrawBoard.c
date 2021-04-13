#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


#define pf printf
#define sf scanf



/**
 * @brief 
 * 
 * @param square 
 */
void drawBoard(char * square){
	system("clear");
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