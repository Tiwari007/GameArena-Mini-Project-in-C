#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


#define pf printf
#define sf scanf

/**
 * @brief 
 * 
 * @param YourName 
 * @param BffName 
 */
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