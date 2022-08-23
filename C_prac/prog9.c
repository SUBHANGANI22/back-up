/* 
WAP to allow the user to play the game of rock paper scissors times with the computer.Log the scores of computer and the player.
Display the name of the winner at the end.
NOTE:- you have to display the name of the player during the game.Take user name as input form the user.

rock vs scissors - rock wins
paper vs scissors - scissors wins
paper vs rock - paper wins
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    srand(time(NULL));
    char *name;int x,t;
    printf("--------Welcome to the game of rock paper & scissor-----------\n");
    printf("Enter your name:- ");
    scanf("%s",&name);
    printf("computer vs %s\n",&name);
    printf("%s press\n1 for rock\n2 for paper\n3 for scissor\nany number to exit\n",&name);
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        t=rand()%3;
        if(t == 1 )
        {
            printf("\nrock vs rock\n");
            printf("\nThe match is a draw");
        }
        else if(t == 2 )
        {
            printf("\nrock vs paper\n");
        printf("\nComputer wins");
        }
        else if(t = 3)
        {printf("\nrock vs scissor\n");
        printf("\nplayer %s wins\n",&name);
        }
        else
        printf("wrong choice\n");
        break;
    case 2: 
        t=rand();
        if(t == 2)
        {printf("\npaper vs paper\n");
        printf("The match is a draw");
        }
        else if(t == 1 )
        {printf("\npaper vs rock\n");
        printf("\nplayer %s wins\n",&name);
        }
        else if(t = 3)
        {printf("\npaper vs scissor\n");
        printf("\nComputer wins");
        }
        else
        printf("\nwrong choice\n");
        break;
    case 3:
        t=rand();
        if(t == 3)
        {printf("\nscissor vs scissor\n");
        printf("\nThe match is a draw");
        }
        else if(t == 1 )
        {printf("\nscissor vs rock\n");
        printf("\nComputer wins");
        }
        else if(t = 2)
        {printf("\nscissor vs paper\n");
        printf("\nplayer %s wins\n",&name);
        }
        else
        printf("wrong choice\n");
        break;
    
    default:
        break;
    }
    printf("\n---------GAME OVER----------");
    return 0;
}