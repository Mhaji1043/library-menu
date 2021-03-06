/*----------------------------
    Project:County  Library Management system
    Author: Mohamed Ahmed Haji
    Date:25/10/2021
    Compiler:GNU GCC
    Language :C99
    Licence:MIT


---------------------------------*/

/*
    DATA TYPES
    -Groups data according to the operations that can be
    performed on that data
        => int - intergers rep whole numbers both -ve and +ve
        => char - a single ASCII character. usually enclosed in '
        => double - floating points numbers with a double precision
        => float - numbers with a fraction part
        => void -null || nothing
----------------------
IDENTIFIERS
----------------------
*/

#include <stdio.h>
int main(){
    printf("\t County Library Management System\n");
    printf("1:Log in: \n");// The admnin log in to the system
    printf("Welcome Mr  Mohamed\n");
    printf("2:Add user: \n");//Adding the user
    printf("3:Add book: \n");//adding a book
    printf("4:Delete user: \n");//deleting user option
    printf("5:Delete book: \n");//deleting a book when necessary
    printf("6:Update user: \n");//updating the user profile
    printf("7:Change password: \n");//changing password whenever the admin want
    printf("8:Log out => \n");//log out of the system option

    return 0;
}
