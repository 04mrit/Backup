#include <stdio.h>

void main(){
    char amrit[]="hello darkness";
    char *ptr = amrit;
    while (*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    
    
}