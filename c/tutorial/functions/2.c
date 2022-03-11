#include <stdio.h>

// this says that sum function will take a,b as integer input and return an integer 
int sum(int a,int b); //function protype

int main(){
   printf("%d\n", sum(5,5)); //function is called in an printf statement  (5 and 5 are aruments)
   return 0;
}

int sum(int a,int b){ //function defination ( a and b are parameters)
    int sum;
    sum = a+b;
    return sum; //returns value of sum at last
}