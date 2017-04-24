#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cmath>


using namespace std;

double srednia(double b, double n ){
    cout << "\nSrednia arytmetyczna wynosi: " << b/n << "\n\n";
}
double max(double liczbaMax ){
    cout << "\nWartosc najwyzsza wynosi: " << liczbaMax << "\n\n";
}
double getN(double n, double s, double A[ 10]){
    int i;
    double b,liczbaMax=0, sa;
    float dodaj=0, sum=0;
    float odchylenie=0;
    do{
    cout << "Podaj N gdzie 2<N<=10:"; cin >> n;
    }
    while(n<2 || n>10);
    for(i=0; i < n; i++){
    cout << "Podaj liczbe na pozycje" << i << " : "; cin >> s;
    A[ i] = s;
    cout << "A[" << i << "] = " << A [i] << endl;
    b += A [i];
    if(A[ i] > liczbaMax ) { liczbaMax = A[ i];}
    }
    srednia(b,n);
    max(liczbaMax);
    sa = b/n;/* zmiana master 8 */


    for(int i=0;i<n;i++)
    { dodaj=(A[i]-sa)*(A[i]-sa);
      sum += dodaj;
    }

    odchylenie=sqrt(sum/n);

    cout<<"\nOdchyodchylenie wynosi "<<odchylenie<< "\n" <<endl;



}


int main(int argc, char *argv[])
{

    double n, s, b=0, A[ 10];
    getN(n,s,A);
    //srednia(b,n,A);
    system("PAUSE");
    return EXIT_SUCCESS;
}
