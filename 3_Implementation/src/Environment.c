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
    sleep(1);
    pf("%s : OH that's cool to hear you want to play outside. but wait a min there was a raining ouside that's why you're saying to play ...\n",BffName);
    sleep(1);
    pf("%s : LOL i didn't see that Sorry\n",YourName);
    sleep(1);
    pf("%s : Really So what can we do now\n",BffName);
    sleep(1);
    pf("%s : Its ok we can play indoor games...\n",YourName);
    sleep(1);
    pf("%s : Yah that's sound interesting. Let me see what type of games we have : -\n\n",BffName);
    sleep(1);
    pf("1 -> Tic Tac Toe.\n2-> Or We can Ask one another a Mathematics Questions...\n");
    sleep(1);
    pf("%s : Aan Mathematics its boring %s let's decide by playing ROCK PAPER SCEASER for find what to play... Isn't it sounds cool...\n\n\t\t",YourName,BffName);
    sleep(1);
    pf("OK THEN LET'S PLAY ROCK PAPER SCISOR");


}