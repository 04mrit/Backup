#include <stdio.h>
#include <string.h>
int strlng(char *ptr){
    int length =0;
    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }
    return length;
}

void main(){
    char amrit[]="hello";   
    int a = strlng(amrit);
    printf("%d",a);
}