/**
 * @file mainCode.c
 * @author Vivek Tiwari (vt2174781@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include<malloc.h>

#include "function.h"
#define pf printf
#define sf scanf



int main()
{
    system("color 02");
    char YourName[10], BffName[10] ;
    pf("\n\t\t\t\t\tBefore Entering On Environment.\n \t\t\t\t   Just type Your Two favourite Character Names..\n");
    pf("\t\t\t\t\tYour First Character Name\n\t\t\t\t");
    sf("%s",YourName);
    pf("\t\t\t\tYour Second Character Name\n\t\t\t\t\t");
    sf("%s",BffName);


    LoadingIcon();
    Environment(YourName, BffName);
    Rock_Paper_Scissor(YourName, BffName);

    
    
    




    





    return 0;
}