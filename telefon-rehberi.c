#include<stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>
struct kisi
{
	char iz;
	char ad[15];
	char soyad[15];
	char evtel[15];
	char ceptel[15];
	char istel[15];
	char eposta[30];
	char dogtar[15];
 	char il[15];
 	char ilce[15];
 	char mahalle[15];
 	char sokak[15];
 	char no[15];	
};
int donus()
{
	int donus;
  printf("\n\t---------------------------------------\n");
  printf("\t*                                     *\n");
  printf("\t*         1 - Hesap Goruntuleme       *\n");
  printf("\t*         2 - Hesap Guncelleme        *\n");
  printf("\t*         3 - Yeni Hesap              *\n");
  printf("\t*         4 - Hesap Sil               *\n");
  printf("\t*         5 - arama                   *\n");
  printf("\t*         6 - dogum tarihi arama      *\n");
  printf("\t*         7 - Cikis                   *\n");
  printf("\t*                                     *\n");
  printf("\t---------------------------------------\n\t\t\t");
	scanf("%d",&donus);
	return donus;
}
void goruntuleme()
{
	FILE *rehber;
	rehber=fopen("rehber.txt","r");
	struct kisi kisiler;
	if(rehber==NULL)
	{
		printf("dosya bulunamadi");
	}
	else
	{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++\n");
   	printf("Ad\tSoyad\t\tCep tel\n");
    while(!feof(rehber))
	{
	fscanf(rehber,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",kisiler.ad,kisiler.soyad,kisiler.evtel,kisiler.ceptel,kisiler.istel,kisiler.eposta,kisiler.dogtar,kisiler.il,kisiler.ilce,kisiler.mahalle,kisiler.sokak,kisiler.no); 
	printf("%s\t%s\t\t%s\n",kisiler.ad,kisiler.soyad,kisiler.ceptel); 
     }
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
    fclose(rehber);	
	}
}
int menu2()
{
	 printf("\n\t--------------------------------------\n");
  printf("\t*             hangisini              *\n");
  printf("\t*          gunceleme yapmak          *\n");
  printf("\t*            istersiniz              *\n");
  printf("\t*                                    *\n");
  printf("\t*        1.  isim                    *\n");
  printf("\t*        2.  soyisim                 *\n");
  printf("\t*        3.  ev telefonu             *\n");
  printf("\t*        4.  cep telefonu            *\n");
  printf("\t*        5.  is telefonu             *\n");
  printf("\t*        6.  Eposta                  *\n");
  printf("\t*        7.  dogum tarihi            *\n");
  printf("\t*        8.  il                      *\n");
  printf("\t*        9.  ilce                    *\n");
  printf("\t*        10. mahalle                 *\n");
  printf("\t*        11. sokak                   *\n");
  printf("\t*        12. no                      *\n");
  printf("\t--------------------------------------\n\t\t\t");
  int cevap;
  scanf("%d",&cevap);
  return cevap;
	
}
void guncelleme()
{
	FILE *rehber,*rehber1;
	int cevap;
	struct kisi kisiler;
	struct kisi yedek;
	char aranan[15];
	printf("guncelleme yapmak istediniz kisi kim ?");
	scanf("%s",&aranan);
	int sayac=0;
  rehber=fopen("rehber.txt","r");
  rehber1=fopen("rehber1.txt","w");
  if(rehber==NULL)
  {
  	printf("dosya acilmadi");
  }
else
	{
		while(!feof(rehber))
	{
    fscanf(rehber,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&kisiler.ad,&kisiler.soyad,&kisiler.evtel,&kisiler.ceptel,&kisiler.istel,&kisiler.eposta,&kisiler.dogtar,&kisiler.il,&kisiler.ilce,&kisiler.mahalle,&kisiler.sokak,&kisiler.no);
      if(!strcmp(aranan,kisiler.ad))
	  { 
      printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",kisiler.ad,kisiler.soyad,kisiler.evtel,kisiler.ceptel,kisiler.istel,kisiler.eposta,kisiler.dogtar,kisiler.il,kisiler.ilce,kisiler.mahalle,kisiler.sokak,kisiler.no);
yedek=kisiler;
      sayac++;
      
      }
   }
  
   if(sayac==0)
   {
   	printf("boyle bir kisi bulunmamaktadir\n");
   }
   else
   {
   	 cevap=menu2();
      switch(cevap)
			{
				case 1:
				printf("yeni isimi giriniz:"); scanf("%s",&yedek.ad); break;
				case 2:
				printf("yeni soyisimi giriniz:"); scanf("%s",&yedek.soyad); break;
				case 3:
				printf("yeni ev telefonu giriniz:"); scanf("%s",&yedek.evtel);  break;
				case 4:
				printf("yeni cep telefonu giriniz:"); scanf("%s",&yedek.ceptel);  break;
				case 5:
				printf("yeni is telefonu giriniz:"); scanf("%s",&yedek.istel);  break;
				 case 6:
				printf("yeni Epostayı giriniz:"); scanf("%s",&yedek.eposta);  break;
				case 7:
				printf("yeni dogum tarihini giriniz:"); scanf("%s",&yedek.dogtar); break;
				case 8:
				printf("yeni ili giriniz:"); scanf("%s",&yedek.il); break;
				case 9:
				printf("yeni ilceyi giriniz:"); scanf("%s",&yedek.ilce); break;
				case 10:
				printf("yeni mahalleyi giriniz:"); scanf("%s",&yedek.mahalle); break;
				case 11:
				 printf("yeni sokagi giriniz:"); scanf("%s",&yedek.sokak); break;
				case 12:
				 printf("yeni noyu giriniz:"); scanf("%s",&yedek.no); break;
	       }
	printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",yedek.ad,yedek.soyad,yedek.evtel,yedek.ceptel,yedek.istel,yedek.eposta,yedek.dogtar,yedek.il,yedek.ilce,yedek.mahalle,yedek.sokak,yedek.no);
   	fprintf(rehber1,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",yedek.ad,yedek.soyad,yedek.evtel,yedek.ceptel,yedek.istel,yedek.eposta,yedek.dogtar,yedek.il,yedek.ilce,yedek.mahalle,yedek.sokak,yedek.no);
   	  while(!feof(rehber))
	{
      fscanf(rehber,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&yedek.ad,&yedek.soyad,&yedek.evtel,&yedek.ceptel,&yedek.istel,&yedek.eposta,&yedek.dogtar,&yedek.il,&yedek.ilce,&yedek.mahalle,&yedek.sokak,&yedek.no);
      if(strstr(yedek.ad,aranan))
	  {
      fscanf(rehber,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&yedek.ad,&yedek.soyad,&yedek.evtel,&yedek.ceptel,&yedek.istel,&yedek.eposta,&yedek.dogtar,&yedek.il,&yedek.ilce,&yedek.mahalle,&yedek.sokak,&yedek.no);
      }

  	fprintf(rehber1,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",yedek.ad,yedek.soyad,yedek.evtel,yedek.ceptel,yedek.istel,yedek.eposta,yedek.dogtar,yedek.il,yedek.ilce,yedek.mahalle,yedek.sokak,yedek.no);
      
   }
   }
   
		
	}
	fclose(rehber);
fclose(rehber1);
remove("rehber.txt");
rename("rehber1.txt","rehber.txt");
	
}
void ekleme()
{
	FILE *rehber;
	rehber=fopen("rehber.txt","a");
	struct kisi kisiler;
	char devam='e';
	if(rehber==NULL)
	{
		printf("dosya acilamdi");
	}
	{
		while(devam=='e'||devam=='E')
	    {
	    printf("\n---------------------------------------------------------------------");
     	printf("\nKisinin bilgilerini giriniz;\n");
	     printf("Ad:"); scanf("%s",&kisiler.ad);
	     printf("Soyad:"); scanf("%s",&kisiler.soyad);
	     printf("Ev telefonu:"); scanf("%s",&kisiler.evtel);
	     printf("Cep telefonu :"); scanf("%s",&kisiler.ceptel);
	     printf("Is telefonu :"); scanf("%s",&kisiler.istel);
		 printf("Eposta :"); scanf("%s",&kisiler.eposta);
		 printf("Dogum tarihi(dogum tarihi) :"); scanf("%s",&kisiler.dogtar);
		 printf("Yasadigi il:"); scanf("%s",&kisiler.il);
		 printf("Yasadigi ilce:"); scanf("%s",&kisiler.ilce);
		 printf("Yasadigi mahalle:"); scanf("%s",&kisiler.mahalle);
		 printf("Yasadigi sokak:"); scanf("%s",&kisiler.sokak);
		 printf("no :"); scanf("%s",&kisiler.no);
		fprintf(rehber,"\n%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s",kisiler.ad,kisiler.soyad,kisiler.evtel,kisiler.ceptel,kisiler.istel,kisiler.eposta,kisiler.dogtar,kisiler.il,kisiler.ilce,kisiler.mahalle,kisiler.sokak,kisiler.no); 
       	printf("\nDaha fazla ekleme yapmak istermsiniz(e/E)");
        devam=getche();
	   }
    	fclose(rehber);
  	}
}
void silme()
{
	struct kisi kisiler;
	FILE *rehber,*rehber1;
	int sayac=0;
	rehber=fopen("rehber.txt","r");
    rehber1=fopen("rehber1.txt","w"); 
    char aranan[15];
    printf("Silinecek kayit adi ? :");
    scanf("%s",&aranan);
   
    while(!feof(rehber))
	{
      fscanf(rehber,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&kisiler.ad,&kisiler.soyad,&kisiler.evtel,&kisiler.ceptel,&kisiler.istel,&kisiler.eposta,&kisiler.dogtar,&kisiler.il,&kisiler.ilce,&kisiler.mahalle,&kisiler.sokak,&kisiler.no);
      if(strstr(kisiler.ad,aranan))
	  {
	  	printf("%s\t\t\t",kisiler.ad);
      printf("%s\t\t\t",kisiler.soyad);
      printf("%s---silindi\n",kisiler.ceptel);
      fscanf(rehber,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&kisiler.ad,&kisiler.soyad,&kisiler.evtel,&kisiler.ceptel,&kisiler.istel,&kisiler.eposta,&kisiler.dogtar,&kisiler.il,&kisiler.ilce,&kisiler.mahalle,&kisiler.sokak,&kisiler.no);
      }

  	fprintf(rehber1,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",kisiler.ad,kisiler.soyad,kisiler.evtel,kisiler.ceptel,kisiler.istel,kisiler.eposta,kisiler.dogtar,kisiler.il,kisiler.ilce,kisiler.mahalle,kisiler.sokak,kisiler.no);
      
   }
fclose(rehber);
fclose(rehber1);
remove("rehber.txt");
rename("rehber1.txt","rehber.txt");


}
void arama()
{
	char aranan[15];
	int sayac=0;
	 // dosyadaki tum telefonlarini ara
    // dosyaya ac:
    FILE *rehber;
    struct kisi kisiler;
    printf("\naranacak ismi giriniz(max 15 karakter):");
    scanf("%s",&aranan);
    if((rehber=fopen("rehber.txt","r"))==NULL)
    {
    	printf("dosya acilamadi");
    }
   else
   {
   	// dosya sonuna kadar tum verileri oku:
    while(!feof(rehber))
	{
    fscanf(rehber,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&kisiler.ad,&kisiler.soyad,&kisiler.evtel,&kisiler.ceptel,&kisiler.istel,&kisiler.eposta,&kisiler.dogtar,&kisiler.il,&kisiler.ilce,&kisiler.mahalle,&kisiler.sokak,&kisiler.no);
      if(!strcmp(aranan,kisiler.ad))
	  { 
      printf("%s\t\t\t",kisiler.ad);
      printf("%s\t\t\t",kisiler.soyad);
      printf("%s\n",kisiler.ceptel);
      sayac++;
      }
   }
    if(sayac==0)
    {
    	printf("boyle bir kisi bulunmamaktadir\n");
	}
   	
   }
  fclose(rehber);
}
void arama1()
{
	char aranan[15];
	int sayac=0;
	 // dosyadaki tum telefonlarini ara
    // dosyaya ac:
    FILE *rehber;
    struct kisi kisiler;
    printf("\ndogum tarihini giriniz:");
    scanf("%s",&aranan);
    if((rehber=fopen("rehber.txt","r"))==NULL)
    {
    	printf("dosya acilamadi");
    }
   else
   {
   	// dosya sonuna kadar tum verileri oku:
    while(!feof(rehber))
	{
    fscanf(rehber,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&kisiler.ad,&kisiler.soyad,&kisiler.evtel,&kisiler.ceptel,&kisiler.istel,&kisiler.eposta,&kisiler.dogtar,&kisiler.il,&kisiler.ilce,&kisiler.mahalle,&kisiler.sokak,&kisiler.no);
      if(!strcmp(aranan,kisiler.dogtar))
	  { 
      printf("%s\t\t\t",kisiler.ad);
      printf("%s\t\t\t",kisiler.soyad);
      printf("%s\n",kisiler.ceptel);
      sayac++;
      }
   }
    if(sayac==0)
    {
    	printf("bu dogum tarihine ait kisi bulunmamaktadir\n");
	}
   	
   }
  fclose(rehber);
}
main()
{
	system("COLOR 2A");
	int don;
		while((don=donus())!=7)
		{
			switch(don)
			{
				case 1:
				goruntuleme(); break;
				case 2:
				guncelleme(); break;
				case 3:
				ekleme(); break;
				case 4:
				silme(); break;
				case 5:
				arama(); break;
				case 6:
				arama1(); break;
				default:
				printf("yanlis tus bastiniz  ");break; 
			}	
		}		
}
