#include<stdio.h>
int main()
{
    int choice;
    printf("1 for sunday\n 2 for monday\n 3 for tuesday\n 4 for wednesday\n 5 for thursday\n 6 for friday\n 7 for saturday\n");
    printf("enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("you have choosen sunday");
        break;
    case 2:
        printf("you have choosen monday");
        break;
    case 3:
        printf("you have choosen tuesday");
        break;
    case 4:
        printf("ypu have choosen wednesday ");
        break;
    case 5:
        printf("you have chooden thursday");
        break;
    case 6:
        printf("you have choosen friday");
        break;
    case 7:
        printf("you have chooden saturday");
        break;
    default:
        printf("wrong choice");
    }
    return(0);
}
