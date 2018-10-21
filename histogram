#include <stdio.h>
#include<math.h>
void giris(int no[], int notu[], int N);
float ortalama(int notu[], int N); 
void goruntule(int no[], int notu[], int N);
int otele(int notu[],int size);
void siralama_not(int no[],int notu[],int N);
void siralama_no(int no[],int notu[],int N);
int standartsapma(int no[],int notu[],int N,int ort);
void yatayhis(int notu[],int N);
void dikeyhis(int notu[],int N);
int otele(int notu[],int size)
{
	int i=0,toplam=0;
	float sayac=0,ortalama=0,ekle=0;
	for( ;i<size;i++)
	{
		if(notu[i]>20)
		{
			toplam+=notu[i];
			sayac++;
		}
	}
	ortalama=toplam/sayac;
	if(ortalama<50)
	{
	return ekle=50.00-ortalama;
    }
    else
    {
    	return ekle=0;
	}
}
void siralama_not(int no[],int notu[],int N)
{
	int gecici,gecici1;
	for(int i=0; i<N-1;i++)
	{ 
        for(int j=i+1; j<N; j++){
            if(notu[i] > notu[j]){
                gecici = notu[i]; // Dizi[i] yi kaybetmemek için gecicide tutuyoruz
                notu[i] = notu[j]; //dizi[i] yi dizi[i] den daha küçük olan dizi[j] kaydediyoruz
                notu[j] = gecici; // Dizi[j] ye ise dizi[i] değerini kaydediyoruz. Bu değeri gecicide saklamıştık
                gecici1 = no[i]; // Dizi[i] yi kaybetmemek için gecicide tutuyoruz
                no[i] = no[j]; //dizi[i] yi dizi[i] den daha küçük olan dizi[j] kaydediyoruz
                no[j] = gecici1;
            }
        }
   } 
    printf("otelenmis ogrenci notlarinin kucukten buyuge siralmasi\n");
   printf("Ogrenci#\tNotu\n"); 
    for(int i=0; i<N; i++)
           printf("%8d\t%3d\n", no[i], notu[i]); 	
}
void siralama_no(int no[],int notu[],int N)
{
	int gecici,gecici1;
	for(int i=0; i<N-1;i++)
	{ 
        for(int j=i+1; j<N; j++){
            if(no[i] > no[j]){
                gecici = notu[i]; // Dizi[i] yi kaybetmemek için gecicide tutuyoruz
                notu[i] = notu[j]; //dizi[i] yi dizi[i] den daha küçük olan dizi[j] kaydediyoruz
                notu[j] = gecici; // Dizi[j] ye ise dizi[i] değerini kaydediyoruz. Bu değeri gecicide saklamıştık
                gecici1 = no[i]; // Dizi[i] yi kaybetmemek için gecicide tutuyoruz
                no[i] = no[j]; //dizi[i] yi dizi[i] den daha küçük olan dizi[j] kaydediyoruz
                no[j] = gecici1;
            }
        }
   } 
   printf("otelenmis ogrenci numaralarinin kucukten buyuge siralmasi\n");
   printf("Ogrenci#\tNotu\n"); 
    for(int i=0; i<N; i++)
           printf("%8d\t%3d\n", no[i], notu[i]); 	
}
int standartsapma(int no[],int notu[],int N,int ort)
{
	int   i;
   float  toplam = 0.0, std_sap = 0.0;
   /* standart sapma hesabı */
   for(toplam = 0.0, i=0; i<N; i++)
       toplam += pow(notu[i]-ort, 2.0);
   return std_sap = sqrt( toplam/(N-1) );
}
void yatayhis(int notu[],int N)
{
	int  sayi[10]={0,0,0,0,0,0,0,0,0,0};
	for(int i=0;i<N;i++)
	{
		if(notu[i]>=90)
		{
			sayi[0]++;
		}
		else if(notu[i]>=80)
		{
			sayi[1]++;
		}
		else if(notu[i]>=75)
		{
		sayi[2]++;
		}
		else if(notu[i]>=70)
		{
		sayi[3]++;
		}
		else if(notu[i]>=65)
		{
		   sayi[4]++;
		}
		else if(notu[i]>=60)
		{
		sayi[5]++;
		}
		else if(notu[i]>=55)
		{
			sayi[6]++;
		}
		else if(notu[i]>=50)
		{
		sayi[7]++;
		}
		else if(notu[i]>=40)
		{
		sayi[8]++;
		}
		else
		{
			sayi[9]++;
		}
    }  
		printf("A1|");	
		for(int j=0;j<sayi[0];j++)
		{
			printf(" *");
			
		}
		printf("\n");
		printf("A2|");	
		for(int j=0;j<sayi[1];j++)
		{
			printf(" *");
		}
		printf("\n");
		printf("B1|");	
		for(int j=0;j<sayi[2];j++)
		{
		printf(" *");
		}
		printf("\n");
		printf("B2|");	
		for(int j=0;j<sayi[3];j++)
		{
			printf(" *");
			
		}
		printf("\n");
		printf("C1|");	
		for(int j=0;j<sayi[4];j++)
		{
			printf(" *");
		}
		printf("\n");
		printf("C2|");	
		for(int j=0;j<sayi[5];j++)
		{
		printf(" *");
		}
		printf("\n");
		printf("D1|");	
		for(int j=0;j<sayi[6];j++)
		{
			printf(" *");
			
		}
		printf("\n");
		printf("D2|");	
		for(int j=0;j<sayi[7];j++)
		{
			printf(" *");
		}
		printf("\n");
		printf("E |");	
		for(int j=0;j<sayi[8];j++)
		{
		printf(" *");
		}
		printf("\n");
			printf("F |");	
		for(int j=0;j<sayi[9];j++)
		{
		printf(" *");
		}
		printf("\n");
		printf("--+--------------------------------\n\n\n");
	
}
void dikeyhis(int notu[],int N)
{
	int  sayi[10]={0,0,0,0,0,0,0,0,0,0};
	for(int i=0;i<N;i++)
	{
		if(notu[i]>=90)
		{
			sayi[0]++;
		}
		else if(notu[i]>=80)
		{
			sayi[1]++;
		}
		else if(notu[i]>=75)
		{
		sayi[2]++;
		}
		else if(notu[i]>=70)
		{
		sayi[3]++;
		}
		else if(notu[i]>=65)
		{
		   sayi[4]++;
		}
		else if(notu[i]>=60)
		{
		sayi[5]++;
		}
		else if(notu[i]>=55)
		{
			sayi[6]++;
		}
		else if(notu[i]>=50)
		{
		sayi[7]++;
		}
		else if(notu[i]>=40)
		{
		sayi[8]++;
		}
		else
		{
			sayi[9]++;
		}
    } 
    for(int i=7;i>0;i--)
    {
    	printf("%d |",i);
    	if(sayi[0]==i)
		{
				printf(" **");
				sayi[0]--;
		}
		else
		{
				printf("   ");
		}
		if(sayi[1]==i)
		{
			    printf(" **");
				sayi[1]--;
		}
		else
		{
					printf("   ");
		}
		if(sayi[2]==i)
		{
		   	    printf(" **");
				sayi[2]--;
		}
		else
		{
				printf("   ");
				
		}
		if(sayi[3]==i)
		{
				printf(" **");
				sayi[3]--;
		}
		else
		{
					printf("   ");
		}
		if(sayi[4]==i)
		{
			printf(" **");
				sayi[4]--;
		}
		else
		{
					printf("   ");
		}
		if(sayi[5]==i)
		{
			printf(" **");
				sayi[5]--;
		}
		else
		{
				printf("   ");
		}
		if(sayi[6]==i)
		{
			printf(" **");
				sayi[6]--;
		}
		else
		{
				printf("   ");
		}
		if(sayi[7]==i)
		{
			printf(" **");
				sayi[7]--;
		}
		else
		{
					printf("   ");
		}
		if(sayi[8]==i)
		{
			printf(" **");
				sayi[8]--;
		}
		else
		{
					printf("   ");
		}
		if(sayi[9]==i)
		{
			printf(" **");
				sayi[9]--;
		}
		else
		{
					printf("   ");
		}
		printf(" |\n");
	}
	printf("-----------------------------------\n");
	printf("  | A1 A2 B1 B2 C1 C2 D1 D2  E F1 | ");
}
main() 
{ 
int N=0;  
int OgrNo[BUFSIZ], BNotu[BUFSIZ]; 
float ort,yeniort;  
printf("Ogrenci sayisini giriniz: ");  
scanf("%d", &N); 
giris(OgrNo, BNotu, N); 
goruntule(OgrNo, BNotu, N); 
ort = ortalama(BNotu, N);  
printf("Not ortalamasi: %5.2f\n", ort);
//otele(BNotu,N);
int ekle=otele(BNotu,N);
for(int i=0 ;i<N;i++)
	{
		if(BNotu[i]>30)
		{
		  BNotu[i]+=ekle;	
		}
	}
ort = ortalama(BNotu, N);
printf("otelenmis Notlar ve not ortalamasi\n");
goruntule(OgrNo,BNotu, N);
printf("otelenmis Not ortalamasi: %5.2f\n", ort);
siralama_not(OgrNo,BNotu,N);
siralama_no(OgrNo,BNotu,N);
float sapma=standartsapma(OgrNo,BNotu,N,ort);
printf("Standart sapma = %.2f\n",sapma);
yatayhis(BNotu,N);
dikeyhis(BNotu,N);
} 
void giris(int no[], int notu[], int N) 
{   
int i;  
for (i=0; i<N; i++) 
 {
 printf("Ogrenci no gir: ");   
 scanf("%d", &no[i]);   
 printf("%d numarali ogrencinin basari notunu gir : ", no[i]);   
 scanf("%d", &notu[i]);  
 } 
 } 
void goruntule(int no[], int notu[], int N)
{  
printf("Ogrenci#\tNotu\n");  
for (int i=0; i<N; i++)   
printf("%8d\t%3d\n", no[i], notu[i]); 	
} 
float ortalama(int notu[], int N) 
{ 
float t;  
int i;  
t = 0;  
for (i=0; i<N; i++)   
t = t + notu[i];  
float ort = t / N;  
return ort; 
} 
 
