#ifndef __LIBRARY_MANAGEMENT_SYSTEM_H__
#define __LIBRARY_MANAGEMENT_SYSTEM_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#define MAX_YR  9999
#define MIN_YR  1900
#define MAX_SIZE_USER_NAME 30
#define MAX_SIZE_PASSWORD  20
#define FILE_NAME  "abc.c"
// Macro related to the books info
#define MAX_BOOK_NAME   50
#define MAX_AUTHOR_NAME 50
#define MAX_STUDENT_NAME 50
#define MAX_STUDENT_ADDRESS 300
#define FILE_HEADER_SIZE  sizeof(sFileHeader)

typedef struct
{
    int yyyy;
    int mm;
    int dd;
} Date;
typedef struct
{
    char username[MAX_SIZE_USER_NAME];
    char password[MAX_SIZE_PASSWORD];
} sFileHeader;
typedef struct// to call in program
{
    unsigned int books_id; // declare the integer data type
    char bookName[MAX_BOOK_NAME];// declare the character data type
    char authorName[MAX_AUTHOR_NAME];// declare the charecter data type
    char studentName[MAX_STUDENT_NAME];// declare the character data type
    char studentAddr[MAX_STUDENT_ADDRESS];// declare the character data type
    Date bookIssueDate;// declare the integer data type
} s_BooksInfo;

/**
 * @brief return type for funtions for unit testing
 * 
 */

typedef enum test_values {
    pass = 1,
    fail = 0
}test_values;

/**
 * @brief function to find a book by its ID
 * @param id 
 * @return test_values 
 */

int isNameValid(const char *name);

/**
  * @brief decription about names
  *
  * @return validname
  */
int  IsLeapYear(int year);

/**
 * @brief description about year
 *
 * @return 1 if year is valid
 */

int isValidDate(Date *validDate);
/**
 * @brief decription about date
 *
 * @return 1 if date is valid
 */

 test_values menu()
 
 /**
  * @brief description about mainmenu
  *
  * @return test_values
  */
  
test_values searchbook(int id);

/**
 * @brief function to add new books to the library
 * 
 * @return test_values 
 */
test_values addbook();

/**
 * @brief funtion to add books
 * 
 * @param id 
 * @return test_values 
 */
test_values deletebooks(int id);

/**
 * @brief function to view all the books
 * 
 * @return test_values 
 */
test_values updatecredential(void);

/**
 * @brief function to update the credentials
 * 
 * @return test_values 
 */
 
test_values login();
/**
 * @brief decription about login access
 *
 * @return test_values
 */

int isFileExists();
/**
 * @brief decription to check if file exists
 *
 * @return 1 if file exists
 */

void init();
/**
 * @brief description 
 *
 * @return 1
 */

int main();
/**
 * //main function
 */

test_values viewbooks(void);

#endif


