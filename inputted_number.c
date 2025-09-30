#include<stdio.h>
#include<conio.h>
int main(void)
{
    long num,i=1,len;
    printf("\n\tenter number to print its table:");
    scanf("%li",&num);
    printf("\n\tHow long a table you want\n\tlike upto 10 :");
    scanf("%li",&len);
    for(;i<=len;i++)
    {
        printf("\n\t%li * %li = %li",num,i,num*i);    
    }
    return 0;
}