/**
 * @file RockPaperScissor.c
 * @author Vivek Tiwari (vt2174781@gmail.com)
 * @brief This fuction defines a Rock Paper Scissor Game. In that one character have to choose from three option 
 * rock
 * paper
 * scisoor
 * @version 0.1
 * @date 2021-04-13
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

/**
 * @brief This fuction defines a Rock Paper Scissor Game. In that one character have to choose from three option 
 * rock
 * paper
 * scisoor
 * 
 * @param YourName  Your first character name
 * @param BffName   Your second character name
 */
void Rock_Paper_Scissor(char YourName[],char BffName[]){
    int in1,in2;

    LOOP:        //simple goto funtion for directly jumping from anywhere
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
        List_Of_Games(YourName,BffName);
    }
    

    // cppcheck-suppress duplicateExpression
    else if ((in1==1 && in2==2) || (in1==3 && in2==1) || (in1==1 && in2==2)|| (in1==2 && in2==3)){
        printf("Congrats %s! You won!!!!",BffName);
        pf("Ok %s its all upto you your choice now. what you want to play first...\n\n",BffName);
        List_Of_Games(YourName,BffName);
    }

    else{
        pf("You choose a wrong input.. Plzzz Tryy Again\n\n");
        Rock_Paper_Scissor(YourName,BffName);
    }
    
}