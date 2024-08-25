#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int SnakeWaterGun(char you,char computer)
{
    //return 1 if you win otherwise -1 & if you draw  return 0
    //condition for draw( snake-snake , water-water ,gun- gun)
    if(you == computer)
    {
        return 0;
    }
    //non-draw condition
    //(snake-water(water-snake)) (snake-gun(gun-snake))  (gun-water(water-gun))

    if(you=='s'&& computer=='g')
    {
        return -1;
    }
    else if(you=='g'&& computer=='s')
    {
        return 1;
    }
    //--------------------------------------------------------------------------------
    //case2:
    if(you=='s'&& computer=='w')
    {
        return 1;
    }
    else if(you=='w'&& computer=='s')
    {
        return -1;
    }
    //---------------------------------------------------------------------------------------------------
    //case3:
    if(you=='g'&& computer=='w')
    {
        return -1;
    }
    else if(you=='w'&& computer=='g')
    {
        return 1;
    }
}
    //---------------------------------------------------------------------------------
    int main()
    {
        char you ,computer;
        srand(time(0));
        int number=rand()%100+1;

        if(number<33)
        {
            computer='s';
        }
        else if (number>33 && number<66)
        {
            computer='w';
        }
        else{
            computer='g';
        }
        printf("\n Enter ' s for Snake' ,' w for Water', ' g for gun'");
        scanf("%c",&you);
        int result=SnakeWaterGun(you,computer);
       if(result==0)
        {
            printf("Game Draw!!!!!!!!\n");
        }
        else if(result==1)
        {
            printf("\n Congratulation You Are Winner...........!!!");
        }
        else{
            printf("You Lose!!...\n");
        }
         printf("you chose %c and computer chose %c .", you,computer);
        return 0;
    }
    
