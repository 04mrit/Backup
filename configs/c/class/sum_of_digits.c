#include <stdio.h>
void main(){
    long num, sum=0,rem=0;
    printf ( "Enter the number ");
    scanf("%d",&num);
    while (num>0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num/10;
    }
    
    printf("sum is %d\n",sum);

}