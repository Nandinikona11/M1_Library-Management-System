#ifndef __LIBRARY_MANAGEMENT_SYSTEM_H__
#define __LIBRARY_MANAGEMENT_SYSTEM_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>


/**
 * @brief structure for Book Record
 * 
 */
typedef struct books
{
    int book_id;
    char book_name[20];
    char author_name[20];
}books;

/**
 * @brief return type for funtions for unit testing
 * 
 */


 void mainmenu()
 
 /**
  * @brief description about mainmenu
  *
  * @return void
  * /
  
void searchbook(int id);

/**
 * @brief function to add new books to the library
 * 
 * @return values 
 */
void addbook(int id,char name[],char author[])

/**
 * @brief funtion to denote discarded books
 * 
 * @param id 
 * @return values 
 */
void deletebook(int id);

/**
 * @brief function to view all the books
 * 
 * @return test_values 
 */
void issuebook(int id);

/**
 * @brief function to issue the books
 * 
 * @return test_values 
 */
 void editbook(int id);

/**
 * @brief function to edit the books
 * 
 * @return values 
 */
 
void viewbook(void);

#endif


