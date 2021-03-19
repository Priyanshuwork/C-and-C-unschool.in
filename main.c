#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,amount,f,r,k,amount1=0,amount2=0,m;
    char name;
    printf("WHAT IS YOUR NAME?\n");
    scanf("%s",&name);
    printf("What is your age?\n");
    scanf("%d",&n);
    printf("What amount you are having right now?\n");
    scanf("%d",&amount);
    printf("-------------------------------------------------------------------------------\n");
    printf("----------------------------------RULES----------------------------------------\n");
    printf("-------------------------------------------------------------------------------\n");
    printf("1. Choose any number between 1 to 10 \n");
    printf("2. If you win you will get 10 times of your money you bet\n");
    printf("3. If you bet on wrong number you will lose\n");
    printf("-------------------------------------------------------------------------------\n");
    while(amount!=0)
        {
        printf("How much money you want to bet?\n");
        scanf("%d",&f);
        printf("Guess your number: \t");
        scanf("%d",&r);
        k=(rand()%(10-1+1))+1;
        printf("The number came was: %d\n",k);

        if(r==k)
        {
            printf("You won the game\n");
            amount1= amount*10;
            printf("Your prize is %d\n",amount1);
        }
        else{
            printf("You lost\n");
            amount2=amount-f;
            printf("You are left with %d\n",amount2);
        }
        printf("Want to do more?\n 1.yes or 2.no \n");
        scanf("%d",&m);
        if(m==1)
            {
            printf("game will continue\n");
        }
            else if(m==2)
                {
                printf("Come back soon\n");
                break; }
                else
                    {
                    printf("Invalid");
                    break;
                }
                }
        return 0;
        }
