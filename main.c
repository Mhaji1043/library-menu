#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("        County Library \n");
    printf("Welcome Mr.Titus.What would you like to do? \n");
    printf("1:Add user: \n");        //Adding the user
    printf("2:Add book: \n");        //adding a book
    printf("3:Delete user: \n");     //deleting user option
    printf("4:Delete book: \n");     //deleting a book option
    printf("5:Update user: \n");     //updating the user profile
    printf("6:Change password: \n"); //changing password option
    printf("7:Log out => \n");       //log out option
    scanf("%d ", &action);
    return 0;
}
    void execute_user_action(int action)
    {
        switch (action)
        {
        case 1:
            printf("Logged in");
            break;
        case 2:
            printf("Add user");
            break;
        case 3:
            printf("Add book");
            break;
        case 4:
            printf("Delete User");
            break;
        case 5:
            printf("Delete book");
            break;
        case 6:
            printf("Update User");
            break;
        case 7:
            printf("Change password");
            break;
        case 8:
            printf("Logged Out");
            break;
        default:
            printf("Unrecognized action. \n");
}
    return 0;
}
