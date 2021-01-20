#include <stdio.h>

int main()
{
	int bakiye = 10000;
	int kredi_borcu = 3000;
	int islem, tutar;
	
	printf("********HALICBANK HOSGELDINIZ*********\n");
	printf("1. BAKIYE SORGULA\n");
	printf("2. PARA YATIR\n");
	printf("3. PARA CEK\n");
	printf("4. KREDI CEK\n");
	printf("5. KREDI BORCU ODE\n");
	printf("6. KREDI BORCU SORGULA\n");
	printf("7. KART IADE\n");
	printf("ISLEM SECINIZ: ");
		scanf("%d",&islem);
	
	
	switch(islem)
		{
		
		case 1:
			printf("BAKIYENIZ:%d\n",bakiye);
			printf("ISLEM SECINIZ: ");
				scanf("%d",&islem);
			
		case 2: 
			printf("BAKIYENIZ:%d\n",bakiye);
	    	printf("YATIRMAK ISTEDIGINIZ TUTARI GIRINIZ: ");
	    		scanf("%d", &tutar);
	    	bakiye=bakiye+tutar;
	    printf("Yeni Bakiyeniz=%d\n", bakiye);
	    printf("ISLEM SECINIZ: ");
			scanf("%d",&islem);	
			
		case 3:
			printf("BAKIYENIZ:%d\n", bakiye);
	    printf("CEKMEK ISTEDIGINIZ TUTARI GIRINIZ: ");
	    	scanf("%d", &tutar);
	    if(tutar>10000)
		{
		printf("MEVCUT BAKIYENIZDEN FAZLA MIKTAR GIRDINIZ!\nYENIDEN GIRINIZ: ");
	    	scanf("%d", &tutar);
		}
	    bakiye=bakiye-tutar;
	    printf("YENI BAKIYENIZ:%d\n", bakiye);
	    printf("ISLEM SECINIZ: ");
	    	scanf("%d",&islem);
	    	
	    case 4:
	    	printf("CEKMEK ISTEDIGINIZ KREDI TUTARI GIRINIZ: ");
	    		scanf("%d",&tutar);
	    bakiye=bakiye+tutar;
	    kredi_borcu=kredi_borcu+tutar;
	    printf("YENI BAKIYENIZ:%d\n", bakiye);
	    printf("GUNCEL KREDI BORCUNUZ:%d\n", kredi_borcu);
	    	printf("ISLEM SECINIZ: ");
				scanf("%d",&islem);
				
	    case 5:
	    	printf("ODEMEK ISTEDIGINIZ KREDI MIKTARINI GIRINIZ: ");
	    		scanf("%d", &tutar);
	    if(tutar>kredi_borcu)
		{
		printf("MEVCUT KREDI BORCUNUZDAN YUKSEK MIKTAR GIRDINIZ!\nYENIDEN GIRINIZ: ");
	    	scanf("%d", &tutar);
		}
	    bakiye=bakiye-tutar;
	    kredi_borcu=kredi_borcu-tutar;
	    	printf("GUNCEL BAKIYENIZ:%d\n", bakiye);
	    	printf("GUNCEL KREDI BORCUNUZ:%d\n", kredi_borcu);
	    	printf("ISLEM SECINIZ: ");
				scanf("%d",&islem);
				
		case 6:
			printf("MEVCUT KREDI BORCUNUZ:%d\n", kredi_borcu);
			printf("ISLEM SECINIZ: ");
				scanf("%d",&islem);
	    	
		case 7: 
			printf("KARTINIZI ALMAYI UNUTMAYIN!");
	    break;
		
	}
}

