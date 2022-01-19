#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int  number , guess, nguesses = 1,ex ,RorQ;;
    srand(time(0));
    number = rand() % 50 + 1;
    printf("  let's play a game [:-\n\n");
    do
    {

    do
    {

        printf("Guess a number between 1 - 50 !\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else{
            printf("You have guessed it in %d attemps",nguesses);
        }





        nguesses++;


    } while (guess != number);

     printf("\n\n\tDo you want to Replay[2] or Quit[3] :");
     scanf("%d",&RorQ);

      system("cls");

    }while(RorQ == 2);


    printf("i hope you enjoy this game [: regards - MOHIT ROY :]\n");
    getchar();


    return 0;
}
