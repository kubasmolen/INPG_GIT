#include <stdio.h>
/* zmiana */
char *tydzien[7]={"sobota","niedziela","poniedzialek","wtorek","sroda","czwartek","piatek"};
int dni_mies[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int dni_mies_rok[12];

int sprawdz_date(int d, int m, int r)
{
  return (d>0 && d<=dni_mies[m-1]) && (m>=1 && m<=12) && (r>=1582 && r<=2999);
}

int rok_przestepny(int r)
{
  return (r%400==0 || (r%4==0 && r%100!=0));
}

int mk_dni_mies_rok()
{
  int n;
  for(n=1;n<12;n++) {
    dni_mies_rok[n]=dni_mies_rok[n-1]+dni_mies[n-1];
  }
return n;
}

int ile_przestepnych(int r)
{
  int n,iprzestepnych=0;
  for(n=1;n<r;n++) {
    if(rok_przestepny(n)) iprzestepnych++;
  }
  return iprzestepnych;
}

int main(int argc, char *argv[])
{
  int d,m,r;
  for(;;){
    printf("podaj date(dd.mm.rrrr): ");
    scanf("%d.%d.%d",&d,&m,&r);
    if(rok_przestepny(r)) dni_mies[1]=29;
    else dni_mies[1]=28;
    if(!sprawdz_date(d,m,r)) return 0;
    mk_dni_mies_rok();
    printf("%s\n",tydzien[(d+dni_mies_rok[m-1]+r+ile_przestepnych(r))%7]);
  }
}
