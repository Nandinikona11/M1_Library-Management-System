#include<stdio.h>
#include"add.h"
#include"menu.h"
#include"delete.h"
#include"namevalid.h"
#include"search.h"
#include"update.h"
#include"user.h"
#include"view.h"
#include"year.h"
#include"unity.h"

void setUp () {}
void tearDown () {}


void test_addBook(void)
{
    TEST_ASSERT_EQUAL((pass),addbook(120,"username","password"));

}

void test_viewBooks(void)
{
     TEST_ASSERT_EQUAL(pass,viewBooks());
}

void test_searchBooks(void)
{
     TEST_ASSERT_EQUAL(pass,searchBooks(125));
     TEST_ASSERT_EQUAL(fail,searchBooks(-2));
}

void test_deleteBooks(void)
{
     TEST_ASSERT_EQUAL(pass,deleteBooks(125));
}

void test_menu(void)
{
    TEST_ASSERT_EQUAL(pass,menu(125));
}
void test_isNameValid(void)
{
    TEST_ASSERT_EQUAL((pass),isNameValid("book"));
}
void test_login(void)
{
    TEST_ASSERT_EQUAL((pass),login("username","password"));
}
void test_updateCredential(void)
{
    TEST_ASSERT_EQUAL((pass),updateCredential("book"));
}
void test_IsLeapYear(void)
{
    TEST_ASSERT_EQUAL((pass),IsLeapYear("2012"));
}

void test_isValidDate(void)
{
    TEST_ASSERT_EQUAL((pass),IsValidDate("1/12/25"));
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_addBook);
    RUN_TEST(test_viewBooks);
    RUN_TEST(test_deleteBooks);
    RUN_TEST(test_IsLeapYear);
    RUN_TEST(test_isNameValid);
    RUN_TEST(test_isValidDate);
    RUN_TEST(test_login);
    RUN_TEST(test_menu);
    RUN_TEST(test_searchBooks);
    RUN_TEST(test_updateCredential);
    return UNITY_END();
}