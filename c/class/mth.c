#include <stdio.h>

void main(){
    int mth =0,day=0;
    printf ("enter the no of days ");
    scanf ("%d\n",&day);
    mth = day / 30;
    day = day %30;
    printf ("that is %d month and %d days \n",mth,day);
}