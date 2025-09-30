#include<stdio.h>    //header file
#include<conio.h>
int main(void)          //function of main
{
    int year;    //declaration of variable
    printf("\n\tenter year to check wheather its leap OR not: ");
    scanf("%i",&year);
    if(year%4==0)     //adding conditions
    {
        printf("\n\t%i is a leap year",year);
    }
    else if(year%4!=0)
    {
        printf("\n\t%i in not a leap year",year);
    }
    else
    {
        printf("\n\n\t\terror,Retry ");
    }
    return 0;      // This program return no value
    getch();
}
/*
by : syed haris ali shah banoori.
    BUY ME A COFFEE:
    Wallet: UQCptojABJk6VT1-pqrSVPmXO_mp7yLEGoEgpArmDvw6HDYx
*/