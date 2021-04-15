/**
 * @file function.h
 * @author Vivek Tiwari (vt2174781@gmail.com)
 * @brief here all fuction declared
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __FUNCTION_H__
#define __FUNCTION_H__

#include <stdio.h>
#include <stdlib.h>



/**
 * @brief 
 * 
 */
void Environment(char[], char[]);


/**
 * @brief function to show loading icon
 * 
 */
void LoadingIcon();


/**
 * @brief function to play rock paper scissor game 
 * 
 */
void Rock_Paper_Scissor(char[], char[]);


/**
 * @brief fuction to show list of games for playing
 * 
 * @param YourName 
 * @param BffName 
 */
void List_Of_Games(char[],char[]);


/**
 * @brief function to decide who is winner
 * here player 1 - > Your name
 * And player 2 - > Bffname
 * 
 * @param square 
 * @return int 
 */
int checkWin(char * square);


/**
 * @brief funtion to draw playing area for tic tac toe game
 * 
 * @param square 
 */
void drawBoard(char * square);


/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int add(int operand1, int operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int subtract(int operand1, int operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
int multiply(int operand1, int operand2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int divide(int operand1, int operand2);




#endif


