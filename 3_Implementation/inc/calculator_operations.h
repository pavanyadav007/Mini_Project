/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio_ext.h>
/**
*  adds the values1 and values2 and returns the result
* @param[in] values1 
* @param[in] values2 
* @return Result of values1 + values2
*/
int add(int values1, int values2);
/**
*  subtracts the values1, values2 and returns the result
* @param[in] values1 
* @param[in] values2 
* @return Result of values1 - values2
*/ 
int subtract(int values1, int values2);
/**
*  multiply the values1, values2 and returns the result
* @param[in] values1 
* @param[in] values2 
* @return Result of values1 * values2
*/
int multiply(int values1, int values2);
/**
* divides the values1 by values2 and returns the result 
* @param[in] values1 
* @param[in] values2 
* @return integer value of the values1 / values2
* @note returns 0 for divide by 0 error
*/
int divide(int values1, int values2);
/**
* divides the values1 by values2 and returns the remainder 
* @param[in] values1 
* @param[in] values2 
* @return integer value of the values1 % values2
* @note returns 0 for divide by 0 error
*/
int modulo(int values1, int values2);
/**
* raises power of the values1 by values2 and returns the result 
* @param[in] values1 
* @param[in] values2 
* @return integer value of the values1 ^ values2
* @note returns 1 for power of 0 
*/
int power(int values1, int values2);
/**
* get square root of values1 and returns the result 
* @param[in] values1 
* @return floating point value of the sqrt(values1)
*/
int squareroot(int values1);
/**
* get factorial of values1 and returns the result 
* @param[in] values1 
* @return integer value of the values1!
* @note returns 1 for factorial of 0
*/
int factorial(int values1);
/**
* divides 1 by values1 and returns the result 
* @param[in] values1 
* @return flating point value of the 1 / values2
* @note returns 0 for divide by 0 error
*/
int inverse(int values1);
/**
*  multiply the values1 with 74 and returns the result
* @param[in] values1 
* @return Result of values1 * 74
*/
int currency(int values1);
/**
*  multiply the values1 with 12 and returns the result
* @param[in] values1 
* @return Result of values1 * 12
*/
int length(int values1);
#endif 
/* #define __CALCULATOR_OPERATIONS_H__ */
