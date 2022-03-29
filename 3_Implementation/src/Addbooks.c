#include<lms.h>
void addBook()
{
    int days;
    s_BooksInfo addBook = {0};
    FILE *fp = NULL;
    int status = 0;
    fp = fopen(FILE_NAME,"ab+");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }
    printf("\n\n\t\t\tENTER YOUR DETAILS BELOW:");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    printf("\n\t\t\tBook ID NO  = ");
    fflush(stdin);
    scanf("%u",&addBook.books_id);
    do
    {
        printf("\n\t\t\tBook Name  = ");
        fflush(stdin);
        fgets(addBook.bookName,MAX_BOOK_NAME,stdin);
        status = isNameValid(addBook.bookName);
        if (!status)
        {
            printf("\n\t\t\tName contain invalid character. Please enter again.");
        }
    }
    while(!status);
    do
    {
        printf("\n\t\t\tAuthor Name  = ");
        fflush(stdin);
        fgets(addBook.authorName,MAX_AUTHOR_NAME,stdin);
        status = isNameValid(addBook.authorName);
        if (!status)
        {
            printf("\n\t\t\tName contain invalid character. Please enter again.");
        }
    }
    while(!status);
    do
    {
        printf("\n\t\t\tStudent Name  = ");
        fflush(stdin);
        fgets(addBook.studentName,MAX_STUDENT_NAME,stdin);
        status = isNameValid(addBook.studentName);
        if (!status)
        {
            printf("\n\t\t\tName contain invalid character. Please enter again.");
        }
    }
    while(!status);
    do
    {
        //get date year,month and day from user
        printf("\n\t\t\tEnter date in format (day/month/year): ");
        scanf("%d/%d/%d",&addBook.bookIssueDate.dd,&addBook.bookIssueDate.mm,&addBook.bookIssueDate.yyyy);
        //check date validity
        status = isValidDate(&addBook.bookIssueDate);
        if (!status)
        {
            printf("\n\t\t\tPlease enter a valid date.\n");
        }
    }
    while(!status);
    fwrite(&addBook,sizeof(addBook), 1, fp);
    fclose(fp);
}
