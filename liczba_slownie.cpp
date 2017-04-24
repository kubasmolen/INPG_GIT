#include <stdio.h>
#include <stdlib.h>
#include <math.h>    // pow()

/* rozklad_liczby - rozklada liczby na jednosci dziesiatki i setki oraz
   okresla forme gramatyczna przyrostka                                  */

int rozklad_liczby(unsigned short rozklad[4], unsigned long liczba)
{
  int n;
    int m;
  for(n=0;n<4;n++) rozklad[n]=0;    // czysci tablice
  if(0>liczba>999) return -1;       // sprawdza czy liczba jest prawidlowa
  for(n=3;n>0;n--) {
    if(liczba<20) {                 // jesli liczba(reszta)<20 jednostki=liczba
      rozklad[1]=liczba;
      break;
    }
    rozklad[n]=liczba/pow(10,n-1);  // wyznaczamy kolejne cyfry liczby przez dzielenie przez potegi 10
    liczba%=(int)pow(10,n-1);       // liczbe zmniejszamy kolejno o setki i dziesiatki
  }
  if(rozklad[1]==0 && rozklad[2]==0 && rozklad[3]==0) rozklad[0]=0;           // warunki okreslajace forma gramatyczna
    else if(rozklad[1]==1 && rozklad[2]==0 && rozklad[3]==0) rozklad[0]=1;    // przyrostka
      else if(rozklad[1]<=4 && rozklad[1]>1) rozklad[0]=2;
        else rozklad[0]=3;
  return 0;
}

/* zmiana branch test 3 */

int main()
{
  unsigned long liczba;
  short n;
  unsigned short rozklad[4]={0,0,0,0};   // tablica rozkladu liczby elementy to kolejno forma gramatyczna przyrostka, jednosci, dziesiatki, setki
  char *J[]={"","jeden","dwa","trzy","cztery","piec","szesc","siedem ","osiem","dziewiec","dziesiec","jedenascie","dwanascie","trzynascie","czternascie","pietnascie","szesnascie","siedemnascie","osiemnascie","dziewietnascie"};
  char *D[]={"","dziesiec","dwadziescia","trzydziesci","czterdziesci","piedziesiat","szezdziesiat","siedemdziesiat","osiemdziesiat","dziewiedziesiat"};
  char *S[]={"","sto","dwiescie","trzysta","czterysta","piecset","szescset","siedemset","osiemset","dziewiecset"};
  char *T[][4]={{"","miliard","miliardy","miliardow"},
                {"","milion","miliony","milionow"},
                {"","tysiac","tysiace","tysiecy"},
                {"","","",""}};

  printf("podaj liczbe: ");
  scanf("%d",&liczba);            // wiadomo :)

  for(n=9;n>=0;n-=3) {                      // petle wykonujemy 4 razy przetwarzamy liczbe od konca(miliardow)
    rozklad_liczby(rozklad, liczba/pow(10,n));    // rozkladamy liczbe kolejno okreslajaca miliardy, miliony itd...
    liczba%=(int)pow(10,n);                       // zmniejszamy liczbe kolejno o miliardy, miliony....
    if(rozklad[3]) printf("%s ", S[rozklad[3]]);  // wyprowadzanie liczby
    if(rozklad[2]) printf("%s ", D[rozklad[2]]);
    if(rozklad[1]) printf("%s ", J[rozklad[1]]);
    if(rozklad[0]) printf("%s ", T[3-(n/3)][rozklad[0]]);  // 3-(n/3) forma okreslajaca z jakim przyrostkiem mamy doczynienia, w petli odlicza od 0 do 3
  }
  printf("\n");     // zeby ladnie wygladalo

  system("PAUSE");
  return 0;
}
