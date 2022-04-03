#include "unity.h"
#include "library_operations.h"

#define PROJECT_NAME "library-management-system"

/* Prototypes for all the test functions  for library management system*/

/**
 * @brief Testing function for 
 * 
 */

/**
 * @brief Testing function for adding book
 * 
 */
void test_addBook();

/**
 * @brief Testing function for search
 * 
 */
void test_searchBooks();

/**
 * @brief Testing function for view
 * 
 */
void test_viewBooks();

/**
 * @brief Testing function for update
 * 
 */
void test_updateCredential();

/**
 * @brief Testing function for delete
 * 
 */
void test_deleteBooks();

/**
 * @brief Testing function for login 
 * 
 */
void test_login();

/**
* @brief testing function for init
*
*/
void test_init();

/**
* @brief function testing if file exists
*
*/
int test_isFileExists(const char *path);

/**
 * @brief Testing function for namevalid
 * 
 */
void test_isNameValid(void);

/**
* @brief function testing for valid year
*
*/
int  test_IsLeapYear(int year);

/**
* @brief function testing for date valid
*
*/
int tst_isValidDate(Date *validDate);

/**
 * @brief Testing function for menu
 * 
 */
void test_menu();

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_addBook);
    RUN_TEST(test_searchBooks);
    RUN_TEST(test_viewBooks);
    RUN_TEST(test_updateCredential);
    RUN_TEST(test_deleteBooks);
    RUN_TEST(test_isNameValid);
    RUN_TEST(test_isValidDate);
  ` RUN_TEST(test_isLeapYear);
    RUN_TEST(test_isFileExists);
    RUN_TEST(test_init);
    RUN_TEST(test_login);
    RUN_TEST(test_menu);

    /* Close the Unity Test Framework */
    return UNITY_END;
}
