#include <stdio.h>

int area (int a,int b);

void main(){
    int l =6, b=7;
    printf("%d\n",area(l,b));

}

int area(int a, int b){
    int area = a* b;    
    return area;
}