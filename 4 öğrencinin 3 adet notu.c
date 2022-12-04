#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

/*1. 4 öğrencinin 3 adet notunu (mat, fizik, kimya) giriniz. 
Ortalamasını da matris içinde hesaplayınız.*/
int main()
{
	float ortalama,notlar[4][3];
	int i,j;
	
	for(i=0;i<4;i++)
	{

		printf("Ogrenci %d:\n",i+1);
		float toplam=0;
		for(j=0;j<3;j++)
		{
			tekrarGirsin:
			if(j==0)
			printf("matematik ");
			else if(j==1)
			printf("fizik ");
			else if(j==2)
			printf("kimya ");
			
			
			printf("notunu giriniz:");
			scanf("%f",&notlar[i][j]);
			if(notlar[i][j] > 100 || notlar[i][j] <0)
				goto tekrarGirsin;
			
			toplam+=notlar[i][j];	
		}
		ortalama=toplam/3;
		
		printf("ortalama= %f\n",ortalama);
		printf("\n");
	}	
return 0;
}
