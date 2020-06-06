#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;

// RASTGELE DEĞER ATAMA FONKSİYONU//
void  rasgele(int N,int max_dizi[])
{
 for (int i = 0 ; i <N ;i++)
  max_dizi[i]=0+rand()%255;
}
// SIRALAMA ALGORİTMASI FONKSİYONU//

void siralama(int N,int max_dizi[])
{
 int tutulan;

 for(int i=0 ; i <N ; i++ )
 {
  for(int j=0 ; j <N ; j++)
   {
   if(max_dizi[j]> max_dizi[i])
   {
   tutulan=max_dizi[i];
   max_dizi[i]=max_dizi[j];
   max_dizi[j]=tutulan;
   }
  }
 }

}
 // ORTALAMA BULMA FONKSIYONU //
int ortalamasi(int N,int max_dizi[],double ortalama)
{ 
   ortalama=0;
   
 for(int k=0 ; k <N ; k++)
  { 
  ortalama + = max_dizi[k] ;
    
  }
 return ortalama = ortalama / N ;
   
      // MEDYAN BULMA FONKSİYONU//
void medyan_bul(int N,int max_dizi[])
{ 
 double medyan;
   
  if(N%2==0)
  medyan=(max_dizi[N/2] + max_dizi[(N / 2)-1]) / 2 ;
  else 
   medyan=max_dizi[N/2];
   
   cout<<endl <<"Dizinin medyani = " <<medyan <<endl <<endl ;
  
}

   // MOD ALMA FONKSİYONU //

void mod_al(int N,int max_dizi[])
{   
   int sayac,mod=0,degeri ;

   for(int i=0 ;i <N ; i++)
   {
    sayac=0;
     for(int j=0 ; j <N ; j++)
     {
      if(max_dizi[i] == max_dizi[j])
      {
       sayac ++;
      }
      if(sayac> mod)
      {
       mod = sayac;
       degeri = max_dizi[i];
      }
     }
     
   }
   
   if(mod==1)
    cout<<"Butun sayilardan 1 adet vardir. " <<endl <<"Dolayisiyla sayilarin modu her sayi olabilir." <<endl ;
   else
   cout <<endl <<"                 Dizinin Modu   = " < degeri <<endl <<mod <<" adet " <<degeri <<" sayisi vardir. " <<endl;

}
 ////// MAIN //////

int _tmain(int argc, _TCHAR* argv[])
{ bas :
 srand((unsigned int) time(0));
 system("cls") ;
 
 
  // RASTGELE FONKSİYONUNU ÇAĞIRMA //
 int N ; int max_dizi[99999] ;
 cout <<"Kac sayi uretmek istersiniz ? "; cin>> N ;
 cout <<endl <<endl;
 rasgele(N,max_dizi) ;

  for(int i=0 ; i <N ; i++)
 { 
  cout <<i+1 <<".eleman = "  <<max_dizi[i] <<endl ;
 }

  siralama(N,max_dizi);
  cout << endl <<endl ; 
    int ortalama=0;
   cout <<endl<<"Dizinin Kucukten Buyuge Siralanmasi " <<endl <<endl ;
   for(int k=0 ; k <N ; k++)
   { 
    cout <<"  " <<max_dizi[k] <<endl <<endl;
   }
  
 ////////////////////////En buyuk - En Kucuk Elaman ve Fark ////////////////////////////// 

 int enb_eleman=max_dizi[N-1],enk_eleman=max_dizi[0],fark ;

   
   fark=enb_eleman-enk_eleman ;
   cout <<endl <<endl <<"Dizinin en buyuk elemani = " <<enb_eleman <<endl ;
   cout <<"Dizinin en kucuk elemani = " <<enk_eleman <<endl ;
   cout <<"En buyuk ile en kucuk elemanin arasindaki fark = " <<fark <<endl ;

  // ORTALAMA BULMA FONKSIYONUNU ÇAÐIRMA //
   
 ortalamasi(N,max_dizi,ortalama) ;
 cout <<endl <<"Dizinin sayilarinin ortalamasi = " <<ortalamasi (N,max_dizi,ortalama) <<endl <<endl ;
   
 // MOD VE MEDYAN FONKSIYONUNU ÇAĞIRMA //
 
 
 medyan_bul(N,max_dizi) ;
 mod_al(N,max_dizi) ;
 cout <<endl <<endl <<endl ;
 cout <<" Tekrar denemek istiyor musunuz ? " <<endl
   <<" Bunun icin bir tusa basiniz ..." <<endl <<endl;
 char tekrar ;
 cin<<tekrar ;
 if(tekrar== '|') ;
 else
 goto bas ;

 system("pause") ;
 return 0;
}

}