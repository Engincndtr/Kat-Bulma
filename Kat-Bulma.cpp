/* Bu programda bir apartman var ve ilk katında sadece 2 daire var.
 Geriye kalan katlardaki daire sayılarını biz belirliyoruz ve 
 istediğimiz daire hangi katta onu buluyoruz. */

#include<stdio.h> //Kutuphane

//Fonksiyon tanımı
int func(int kat, int daire) //Fonksiyonumuza iki tane tam sayı değeri atıyoruz(int kat ve int daire).
{
	int f= 2+(daire-3)/kat; //Bu denklem sayesinde işlemin sonucu çıkıyor.
	return f;
}
int main()
{
	int kat,daire; //Tam sayı değişken adlarımız.
	char ch; //Char değişken adı.
	
		printf("Bir katta kac tane daire oldugunu giriniz:\n"); 
    	scanf("%d",&kat); //Ekrandan kat bir katta kaç daire olacağını isteme.
	
		printf("Daire numarasini giriniz giriniz:\n");	
		scanf("%d",&daire); //Ekrandan daire numarası isteme.
	    
	
	    	    
				if (daire<0||kat<0)  //Kat veya daire numarası negatif girilirse printf içindeki yazı ekrana çıkıyor.
					printf("pozitif tam sayi giriniz: \n");			
			
				if (daire>2&&kat>0) //Daire sayısı 2'den büyükse yukarıdaki fonsiyondan işlem yapılıyor ve ekrana çıkıyor.
					printf("daire %i inci kattadir \n",func(kat,daire));
    
				if (daire>0&&daire<=2) //Daire sayısı 1 ve 2 ise printf içindeki yazı ekrana çıkıyor.
					printf("daire 1 inci kattadir \n");
		    
		    	if (kat==ch||daire==ch) //Karekter girildigi zaman işlemi durdurup 36.satirdaki printf'in içindeki yazıyor.
     				printf("HATA lutfen karakter girmeyiniz ve pozitif tam sayi giriniz");
		    
				if (kat==0||daire==0) 
					return 0; //Kat veya daireden birisine 0 girilirse işlem bitiyor ama 35.satırdaki işlemden dolayı buraya gerek yok.
     			
        		else
     				main(); //İşlemi başa almaya yarıyor.
    }
    
