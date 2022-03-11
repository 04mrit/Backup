#include <stdio.h>

int fact(int a);

void main(){
    int num=5;
    printf("the factorial is %d\n",fact(num));
}

int fact(int a){
    // printf("calling fact %d\n",a);
    if (a==1 | a ==0){        
        return 1;
    }
    else{    
    return a * fact(a-1);        
    }
}