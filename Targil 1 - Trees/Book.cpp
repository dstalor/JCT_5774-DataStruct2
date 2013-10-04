#include "stdafx.h"
#include "Book.h"


Book::Book(void)
{
}


Book::~Book(void)
{
}
bool Book::is_valid_isbn13(char digits[13])
{
        int i, check=0;
        for (i=0; i<13; i+=2)
                check += digits[i];
        for (i=1; i<12; i+=2)
                check += 3*digits[i];
        return check%10==0;
}