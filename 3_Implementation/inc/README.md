/**
 * @file library_operations.h
 * @author Nandini Kona (nandinikona123@gmail.com)
 * @brief Header file for Phone book Application
 * @version 0.1
 * @date 2022-04-04
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _LIBRARY_OPERATIONS_H_
#define _LIBRARY_OPERATIONS_H_
/**
 * @brief prints the input name
 * @return Text file generated with user input name
 */
void addBook();
/**
 * @brief description of adding a book
 * @return the menu
 */
void searchBooks();
/**
 * @brief lists the books data available in the library
 * @return all the books data
*/

void viewBooks();
/**
 * @brief details of available books
 * @return the books available
*/
void updateCredential();
/**
 * @brief description to update credentials
 */
    void deleteBooks();
/** @brief description of deleted book
 
 */
    void login();
    /**
 * @brief verifying the login credentials from the user
 * 
 */
    int isFileExists(const char *path)
/**
 * @brief show if file exists 
 */
 void init();
 /** 
 * @brief description about credentials
 */
 int isNameValid(const char *name);
 /**
 * @brief description about name validity
 */
 int  IsLeapYear(int year);
 /**
 * @brief description about date
 */
    void menu();
    
#endif /* #define _PHONE_BOOK_H_ */

