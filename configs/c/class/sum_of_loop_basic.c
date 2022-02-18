#include<stdio.h>
int main()
{
    long num,d1,d2,d3,d4,d5,d6;
    printf("enter 6 digit number: ");
    scanf("%d",&num);
    d1  = num%10;
    num = num/10;
    d2  = num%10;
    num = num/10;
    d3  = num%10;
    num = num/10;
    d4  = num%10;
    num = num/10;
    d5  = num%10;
    num = num/10;    
    d6  = num%10;
    num = num/10;
    printf("reversed number of is %d%d%d%d%d%d",d1,d2,d3,d4,d5,d6);
    
}