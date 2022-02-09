#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

//Ekrem Gunes' basic game project :
 
int main()
{
	again://for users wanna play again.I used the 'goto'.
	srand(time(NULL));
	int gamer=0,computer=0;
	int rival,you,random,results;
	
	printf("*** Rock-Paper-Cut ***\n\n");
	printf("Rock=1 \t paper=2 \t cut=3 \t\n");
	
	
	int i=1;
	int round=5;
	while(i<=round)
	{
	
		printf("\n\t ROUND %d \n",i);
		you:
		printf("you:");
		scanf("%d",&you);
		if(you>3 || you<=0)
		{
			printf("Please enter someone (1-2-3)\n");
			goto you;
		}
		random=rand()%3+1;
		
		printf("Rival:%d\n",random);
		rival=random;

		switch(you)
		{
			case 1:
				printf("you:  ROCK - ");
				if(rakip==3)
				gamer++;
				break;
			case 2:
				printf("you:  PAPER - ");
				if(rakip==1)
				gamer++;
				break;
			case 3:
				printf("you:  CUT - ");
				if(rakip==2)
				gamer++;
				break;
		}
		switch(rival)
		{
			case 1:
				printf("Rival: ROCK \n");
				if(you==3)
				computer++;
				break;
			case 2:
				printf("Rival: PAPER \n");
				if(you==1)
				computer++;
				break;
			case 3:
				printf("Rival: CUT \n");
				if(you==2)
				computer++;
				break;
		}		
	
		
		if(i==round || gamer==3 || computer==3)
		{
			if(computer>gamer)
			{
				printf("\n    LOSE :(  \n");
				printf("Your point : %d and Computer point : %d \n",gamer,computer);
				printf("\nÝf you wanna play again click to 1 ,if not click to 2...\n");
				scanf("%d",&results);
				if(results==1)
				{
					printf("Game loading again..\n..\n");
					goto again;//baþa dönmesi için
				}
				if(results==2)
				{
				printf("Game finished!");
				break;
				}
			}
			else if(gamer>computer)
			{
				printf("\n*** WÝNNER!! ***\n");
				printf("Your point : %d and Computer point : %d \n",gamer,computer);
				break;
			}
			else if(gamer==computer)
			{
				printf("%d DRAW!",i);
				round++;
				
			}
		}

		i++;
	}
	
	return 0;
}
