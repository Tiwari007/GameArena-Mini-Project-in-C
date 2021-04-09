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


void Rock_Paper_Scissor(char YourName[],char BffName[]){
    int in1,in2;

    printf("%s and %s please follow the rules for the game\nPress 1 for stone\nPress 2 for paper\nPress 3 for scissors\n\n",YourName,BffName);
    printf("Now let us start the game\n");

    printf("%s is it STONE 1, PAPER 2 OR SCISSORS 3\n",YourName);
    scanf("%d",&in1);
    printf("%s is it STONE 1, PAPER 2 OR SCISSORS 3\n",BffName);
    scanf("%d",&in2);

    if ((in1==1 && in2==1) || (in1==2 && in2==2) || (in1==3 && in2==3))
    printf("Neither %s nor %s won, it is a draw",YourName,BffName);

    // cppcheck-suppress duplicateExpression
    else if ((in1==1 && in2==3) || (in1==3 && in2==2) || (in1==1 && in2==3)|| (in1==2 && in2==1) || (in1==3 && in2==2) || (in1==1 && in2==3))
    printf("Congrats %s! You won!!!!",YourName);

    // cppcheck-suppress duplicateExpression
    else if ((in1==1 && in2==2) || (in1==3 && in2==1) || (in1==1 && in2==2)|| (in1==2 && in2==3))
    printf("Congrats %s! You won!!!!",BffName);
}