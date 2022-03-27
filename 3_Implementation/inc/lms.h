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
    int count;
    float price;
    int quantity;
}books;

/**
 * @brief return type for funtions for unit testing
 * 
 */

typedef enum values {
    pass = 1,
    fail = 0
}values;

/**
 * @brief function to find a book by its ID
 * @param id 
 * @return values 
 */
 
 void mainmenu()
 
 /**
  * @brief description about mainmenu
  *
  * @return void
  * /
  
values searchbook(int id);

/**
 * @brief function to add new books to the library
 * 
 * @return values 
 */
values addbook(int id,char name[],char author[]);

/**
 * @brief funtion to denote discarded books
 * 
 * @param id 
 * @return values 
 */
values deletebook(int id);

/**
 * @brief function to view all the books
 * 
 * @return test_values 
 */
values issuebook(int id);

/**
 * @brief function to issue the books
 * 
 * @return test_values 
 */
 values editbook(int id);

/**
 * @brief function to edit the books
 * 
 * @return values 
 */
 
values viewbook(void);

#endif

