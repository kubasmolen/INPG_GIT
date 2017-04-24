#include <cstdlib>
#include <iostream>
#include <math.h>

int n;
double x;
const int M=200;
double T[M];

int czytaj()
{
    int i;

    do/* zmiana master 10 */

    {
        printf("Dla wielomianu a :\n");
        printf("podaj stopien wielomianu. \nn=");
        scanf("%d:\n",&n);
        if(n<0)printf("stopien wielomianu musi byc wiekszy od 0 \n");
        else if(n>M)printf("stopien wielomianu usi byc mniejszy od %d \n", M);
    }
    while (n<0||n>(M-1));
    printf("podaj wartosc X. \nX=");
    scanf("%lf", &x);
    printf("podaj wartosc wspolczynnikow A: \n");
    for(i=n;i>=0;i--)
    {
                     printf("A%d=", i);
                     scanf("%lf", T+i);
    }
    printf("n=%d x=%.3lf\n",n,x);
    return n;
}
int main()
{
    int i;
    double S=0,N;
    czytaj();
    for(i=n;i>=0;i--) S+=(T[i]*(pow(x,i)));
    printf("wartosc wielomianu wynosi: \ny(x)=%.4lf\n",S);
    printf("X=%.3lf n=%d",x,n);
    scanf("%d",&N);/* zmiana master 10 */

    return 0;
}
