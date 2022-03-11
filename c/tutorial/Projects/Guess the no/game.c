    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    int main(){
        int num=0,nofguess=1,guess=0;

        printf("\nWELCOME TO GUESS THE NUMBER !!!\n");
        printf("    ");       
        printf("    -By Amrit\n");
        
             //Generates random no and stores in num
        srand(time(0));    
        num = rand()%100+1;
            //printf("num is %d\n",num);
        
        for (printf("\nwhats your guess? - ");1;nofguess++){
            scanf("%d",&guess);
            
            if (guess == num){
                printf("\nyou guessed the no in only %d tries and the no was %d !!\n",nofguess,num);
                break;
            }
            //if user guesses larger number            
            if (guess>num){
                printf("guess lower - ");
            }
            //if user guesses smaller number
            if (guess < num){
                printf("guess higher - ");        
            }
        }      
    return 0;
    }