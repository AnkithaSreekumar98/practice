#include<stdio.h>
int main()
{
    int choice;
    printf("1 for porotta\n 2 for biriyani\n 3 for fried rice\n 4 for mandhi");
    printf("enter your choice");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        printf("you have selected porotta");
        break;
    case 2:
        printf("you have selected biriyani");
        break;
    case 3:
        printf("you have selected fried rice");
        break;
    case 4:
        printf("you have selected mandhi");
        break;
    default:
        printf("wrong choice entered");
    }
    return(0);
}
