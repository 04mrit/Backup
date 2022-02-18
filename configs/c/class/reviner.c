#include <stdio.h>
void main(){
    long num,rev=0,rem=0;
    printf ( "Enter the number ");
    scanf("%d",&num);
    while (num>0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num/10;
    }
    
    printf("reverse num is %d\n",rev);

}