#include<stdio.h>      //header file
#include<conio.h>     
void grade(float);       //initialization of Grade function
float percentage(int);   //initialization of percentage function
int main()              //main body
{
    int sum_total=0,i=0;
    int sub[20];
    for(;i<6;i++)       //loop to get input marks
    {
        printf("\n\tenter your %d subject number:",i+1);
        scanf("%d",&sub[i]);
        sum_total+=sub[i];     //adding all marks in one variable
    }
    grade(percentage(sum_total));     //calling functions
}
float percentage(int sum)    //body of percentage function
{
    return (sum*100)/600;
}
void grade(float per)       //body of Gradge function
{
    if(per<33)
    {
        printf("failed,Better Luck Next Time");
    }
    else
    {
        printf("PASSED,Congratulations");
    }
}
/*
by : syed haris ali shah banoori.
    BUY ME A COFFEE:
    Wallet: UQCptojABJk6VT1-pqrSVPmXO_mp7yLEGoEgpArmDvw6HDYx
*/