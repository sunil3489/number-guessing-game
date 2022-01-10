/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguess=1;
    srand(time(0));
    number = rand()%100+1;//generates  a random number between 1 and 100
    printf("the number is %d\n",number);
    // keep running the loop until the number is gussed
    do{
        printf("guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("lower number please\n");
        }
        else if(guess<number){
            printf("higher number please!\n");
        }
        else{ 
            printf("you guessed it in %d attempts\n",nguess);
        }
        nguess++;
    }while(guess!=number);

    return 0;
}
