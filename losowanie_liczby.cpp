#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{

    int tab[20];
    srand(time(0));
    cout<<"Wygenerowalem tablice liczb: \n";
    for(int i=0;i<20;i++)

    {
    tab [i]=rand()%20;
    cout<< tab[i]<<"\n\n";
    }

int suma=0;
for(int i=0;i<20;i++)
{
suma+=tab[i];
}

cout<<"\nSUMA = "<<suma;
int max=tab[0];
int min=tab[0];
int wiekszych=0;
int mniejszych=0;
for(int i=0;i<20;i++)
{
        if(tab[i]>max)
        max=tab[i];
        if(tab[i]<min)
        min=tab[i];
        if(tab[i]>=10)
        wiekszych++;
        if(tab[i]<10)
        mniejszych++;
        }
/* zmiana master 5 */
        cout<<"\nMax: "<<max;
        cout<<"\nmin: "<<min;
        cout<<"\nwiekszych: "<<wiekszych;
        cout<<"\nmniejszych: "<<mniejszych;
        cout<<" \n\n";



    system("PAUSE");
    return EXIT_SUCCESS;
}
