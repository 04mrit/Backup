#include <stdio.h>

void slice(char *ptr,int m , int n){
    int cnt=n;
    char temp;
    while (ptr!=cnt)
    {
        ptr[ptr+n]=ptr;
    }
    
}

void main(){
    char amrit[]="hello darkness";
    slice(amrit,2,4);
    printf("%s",amrit);    
}