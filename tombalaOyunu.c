#include <stdlib.h>
#include<stdio.h>
#include <time.h>
#include <conio.h>
int kural(int e,int d,int s){
	int buyuk,kucuk,orta;
	if(e>d&&e>s){
		if(d>s){
			orta=d;
			kucuk=s;
		}
		else{
			orta=s;
			kucuk=d;	
		}
		buyuk=e;
	}
	else if(d>s&&d>e){
		if(e>s){
			orta=e;
			kucuk=s;
		}
		else{
			orta=s;
			kucuk=e;	
		}
		buyuk=d;
	}
	else{
		if(d>e){
			orta=d;
			kucuk=e;
		}
		else{
			orta=e;
			kucuk=d;	
		}
		buyuk=s;
		
	}
	if(buyuk-kucuk>orta){
		return 0;
	}
	else{
		return 1;
	}
}
main(){
	printf("oyuna baslamak icin bir tusa basiniz... \n");
	getch();
	char cevap='e';
	while(cevap=='e'||cevap=='E'){    
	    int a,b,c,toplam=0,kontrol=1,cot=1;
	    while(cot==1){
	    srand(time(NULL));
            a=rand()%99+1; 
            b=rand()%99+1;
	        c=rand()%99+1;
			if(a==b||b==c||a==c){
				cot=1;
			}
			else{
				cot=0;
			}			
		}
	    printf("\npul1 : %d \n",a);
	    printf("pul2 : %d \n",b);
            printf("pul3 : %d \n",c);
	    toplam=a+b+c;
	    int i,dogru=0;
	    for(i=2;i<toplam;i++){
	       if(toplam%i==0){
	  	dogru =0;
	    }
	    }
	    dogru= 1;
    	if(toplam<150){
		printf("tebrikler ,kazandiniz. (1. kural) \n");
		kontrol=0;
        }
    	if(dogru==0){
		printf("tebrikler ,kazandiniz. (2. kural) \n");
		kontrol=0;
    	}
    	if(kural(a,b,c)==0){
		printf("tebrikler ,kazandiniz. (3. kural) \n");
		kontrol=0;
    	}
    	if(kontrol==1){
		printf("maalesef kaybetiniz... \n");
    	}
    	printf("oyuna devam etmek icin [e/E] \n");
    	cevap=getche();	
	}	
}
