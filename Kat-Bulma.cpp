/* Bu programda bir apartman var ve ilk kat�nda sadece 2 daire var.
 Geriye kalan katlardaki daire say�lar�n� biz belirliyoruz ve 
 istedi�imiz daire hangi katta onu buluyoruz. */

#include<stdio.h> //Kutuphane

//Fonksiyon tan�m�
int func(int kat, int daire) //Fonksiyonumuza iki tane tam say� de�eri at�yoruz(int kat ve int daire).
{
	int f= 2+(daire-3)/kat; //Bu denklem sayesinde i�lemin sonucu ��k�yor.
	return f;
}
int main()
{
	int kat,daire; //Tam say� de�i�ken adlar�m�z.
	char ch; //Char de�i�ken ad�.
	
		printf("Bir katta kac tane daire oldugunu giriniz:\n"); 
    	scanf("%d",&kat); //Ekrandan kat bir katta ka� daire olaca��n� isteme.
	
		printf("Daire numarasini giriniz giriniz:\n");	
		scanf("%d",&daire); //Ekrandan daire numaras� isteme.
	    
	
	    	    
				if (daire<0||kat<0)  //Kat veya daire numaras� negatif girilirse printf i�indeki yaz� ekrana ��k�yor.
					printf("pozitif tam sayi giriniz: \n");			
			
				if (daire>2&&kat>0) //Daire say�s� 2'den b�y�kse yukar�daki fonsiyondan i�lem yap�l�yor ve ekrana ��k�yor.
					printf("daire %i inci kattadir \n",func(kat,daire));
    
				if (daire>0&&daire<=2) //Daire say�s� 1 ve 2 ise printf i�indeki yaz� ekrana ��k�yor.
					printf("daire 1 inci kattadir \n");
		    
		    	if (kat==ch||daire==ch) //Karekter girildigi zaman i�lemi durdurup 36.satirdaki printf'in i�indeki yaz�yor.
     				printf("HATA lutfen karakter girmeyiniz ve pozitif tam sayi giriniz");
		    
				if (kat==0||daire==0) 
					return 0; //Kat veya daireden birisine 0 girilirse i�lem bitiyor ama 35.sat�rdaki i�lemden dolay� buraya gerek yok.
     			
        		else
     				main(); //��lemi ba�a almaya yar�yor.
    }
    
