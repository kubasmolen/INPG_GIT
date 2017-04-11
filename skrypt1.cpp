/*Co tu tak pusto?*/
#include <cstdlib>
#include <iostream>


char *T[]={"to jest a b pierwszytekst", "to jest abc drugi tekst", "to jest a b b d trzeci tekst", "a b c d e f"};
int main(){
    int N,i,j,k;
    char *tmp;
    for(i=0;i<3;i++)
    {
                    if((stricmp(T[i],T[i+1]))>0)
                    {
                                                tmp=T[i];
                                                T[i]=T[i+1];
                                                T[i+1]=tmp;
                                                i=(-1);
                     }
    }
    for(i=0;i<4;i++)
        {
                k=1;
                for(j=0;j<257;j++)
                {
                        if((T[i][j])==' ')
                                k++;
                        else if((T[i][j])==' ')
                                j=257;
                }
                printf("%snilosc wyrazow :%dnn",T[i],k);
        }
        scanf("%d",&N);
        return 0;

}
