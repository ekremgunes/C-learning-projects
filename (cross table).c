#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*5. 0-10 arasý rastgele sayýlardan oluþturulmuþ 6x6 bir matris içerisinde (iki köþegenden birinde)
 bulunan sayýlarýn toplamýný kullanýcýnýn isteðine göre bulan program kodunu yazýnýz.*/
int main(){
	srand(time(NULL));
	int matris[6][6];
	int i,j;
	int a=5;
	int girilen,random1,random2;
	int toplam1=0,toplam2=0;
	
	for(i=0;i<6;i++)
	{
			
		for(j=0;j<6;j++)
		{
		    if(i==j)
			{
				random1=rand()%9+1;
				printf(" %d ",random1);
				toplam1+=random1;
			}
			else if(a==j)
			{
				random2=rand()%9+1;
				printf(" %d ",random2);
				toplam2+=random2;
				a--;
			}
			else
			{
				printf(" - ");
			}
		}
		printf("\n");
	}
	sor:printf("\n 1 veya 2 giriniz: ");
	scanf("%d",&girilen);
	if(girilen<1 || girilen>2)
	goto sor;
	
	switch(girilen)
	{
		case 1:
			printf(" toplam 1=%d ",toplam1);
			break;
		case 2:
			printf(" toplam 2=%d",toplam2);
			break;
	}
	
	return 0;
}
