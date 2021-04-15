/**
 * @file mainCode.c
 * @author Vivek Tiwari (vt2174781@gmail.com)
 * @brief This project contaings 2 games and 1 application. it started from a story where you have to write two character names.
 * it starts from a rock paper scissor which decide character what plays next.
 * it uses testing, makefile(for running all files from one place) and folder wise characterized.
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

/**
 * @brief fuction.h is the header file for our project where all functions are declared.
 * used for ease of program so user understand easily called as multifile programming.
 */
#include "function.h"

// used to define printf and scanf in short term so decrease the LOC
#define pf printf
#define sf scanf

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;
unsigned int result_Math_Quastionaire = 0;


/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);



/**
 * @brief This is the main fuction from here it actually runs
 * 
 * @return int 
 */
int main()
{
    system("color 02");
    char YourName[10], BffName[10] ;
    printf("\033[36;5m\n");
    printf("\e]50;@ARGV\a");
    pf("\n\t\t\t\t\tBefore Entering On Environment.\n \t\t\t\t   Just type Your Two favourite Character Names..\n");
    pf("\t\t\t\t\tYour First Character Name\n\t\t\t\t");
    // cppcheck-suppress invalidscanf
    sf("%s",YourName);
    pf("\t\t\t\tYour Second Character Name\n\t\t\t\t\t");
    // cppcheck-suppress invalidscanf
    sf("%s",BffName);


    //this part is for writing data into CSV file
    FILE* fptr = fopen("data.csv", "a+");

    if (!fptr) {
        // Error in file opening
        printf("Can't open file\n");
        return 0;
    }
    fprintf(fptr, "First Character Name,Second Character Name\n");
    fprintf(fptr, "%s,%s\n", YourName, BffName);
    printf("\nNew Account added to record");
    fclose(fptr);
    //Ending part writing into CSV file

    LoadingIcon();
    Environment(YourName, BffName);
    Rock_Paper_Scissor(YourName, BffName);

    printf("\n****Math Questionaire Quiz****\n");
    while(1)
    {
        calculator_menu();
    }

    return 0;
}


/**
 * @brief this is the menu for Math Quastionaire where we one character choose operand and one choose operation
 * expected result compare with real result and count the score for that.
 * 
 */
void calculator_menu(void)
{
    printf("\nChoose your category\n");
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit (Don't wanna play now");
    printf("\n\tEnter your choice to play Questionaire\n");
   
    //  __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you for playing. Exiting the Application\n");
        sleep(1);
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tLet's give you a number\n");
        // __fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        // __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:                                                           //case for addition of two numbers 
            printf("Enter your Answer : - \n");
            // __fpurge(stdin);
            scanf("%d", &result_Math_Quastionaire);

            if( add(calculator_operand1, calculator_operand2) == result_Math_Quastionaire)
                printf("True\n");
            else
                printf("You are Wrong\n");

            printf("Correct answer is : -");
            printf("\n\t%d + %d = %d\nEnter to continue", calculator_operand1, calculator_operand2,add(calculator_operand1, calculator_operand2));

            


            // __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:                                                       //case for Subtraction of two numbers 

            printf("Enter your Answer : - \n");
            // __fpurge(stdin);
            scanf("%d", &result_Math_Quastionaire);

            if( add(calculator_operand1, calculator_operand2) == result_Math_Quastionaire)
                printf("True\n");
            else
                printf("You are Wrong\n");

            printf("Correct answer is : -");

            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));
            
            // __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:                                                      //case for Multiplication of two numbers 

            printf("Enter your Answer : - \n");
            // __fpurge(stdin);
            scanf("%d", &result_Math_Quastionaire);

            if( add(calculator_operand1, calculator_operand2) == result_Math_Quastionaire)
                printf("True\n");
            else
                printf("You are Wrong\n");

            printf("Correct answer is : -");

            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));
            
            // __fpurge(stdin);
            getchar();
            break;
        case DIVIDE:                                                        //case for Division of two numbers 

            printf("Enter your Answer : - \n");
            // __fpurge(stdin);
            scanf("%d", &result_Math_Quastionaire);

            if( add(calculator_operand1, calculator_operand2) == result_Math_Quastionaire)
                printf("True\n");
            else
                printf("You are Wrong\n");

            printf("Correct answer is : -");

            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));
            
            // __fpurge(stdin);
            getchar();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}