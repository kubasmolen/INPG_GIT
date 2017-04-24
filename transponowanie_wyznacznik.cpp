#include<iostream>
#include<math.h>
using namespace std;

float odA[3][3], dop[3][3], A[3][3]={1,2,3,2,1,4,2,1,5};
int i, j;

main()
{
for(i=0;i<3;i++)                                            // dla kazdego wiersza i zostaja pzypisane liczyby kolumn j
{for(j=0;j<3;j++)
{A[i][j];
dop[i][j];}}                                                 //przypisanie liczb macierzy A.33 do A.ij i dop.33 do dop.ij

cout<<"      m. A ";
         for(i=0;i<3;i++)
         {cout<<"\n\n";
         for(j=0;j<3;j++)
         {cout<<"    "<<A[i][j];}}                           //wypisanie macierzy A
         cout<<"\n\n";

cout<<"\n transponowana m. A";
         for(i=0;i<3;i++)
         {cout<<"\n\n";
         for(j=0;j<3;j++)
         {cout<<"    "<<A[j][i];}}                        //[i][j] -> [j][i] - transponowanie macierzy A


float detA=(A[0][0]*A[1][1]*A[2][2])+(A[0][1]*A[1][2]*A[2][0])+(A[0][2]*A[1][0]*A[2][1])       //wyliczenie wyznacznika macierz A
        -(A[2][0]*A[1][1]*A[0][2])-(A[2][1]*A[1][2]*A[0][0])-(A[2][2]*A[1][0]*A[0][1]);

cout<<"\n\n\n    detA = "<<detA<<"\n\n\n";


      dop[0][0]=A[1][1]*A[2][2]-A[2][1]*A[1][2],           // liczenie dope³nieñ
    dop[1][0]=A[0][1]*A[2][2]-A[2][1]*A[0][2]*(-1),/* zmiana master 9 */

      dop[2][0]=A[0][1]*A[1][2]-A[1][1]*A[0][2],
      dop[0][1]=A[1][0]*A[2][2]-A[2][0]*A[2][1]*(-1),
    dop[1][1]=A[0][0]*A[2][2]-A[2][0]*A[0][2],/* zmiana master 9 */

      dop[2][1]=A[0][0]*A[1][2]-A[1][0]*A[0][2]*(-1),
      dop[0][2]=A[1][0]*A[2][1]-A[2][0]*A[1][1],
      dop[1][2]=A[0][0]*A[2][1]-A[2][0]*A[0][1]*(-1),
      dop[2][2]=A[0][0]*A[1][1]-A[1][0]*A[0][1];

cout<<"              odwrotna m. A\n\n";

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{odA[i][j]=A[j][i]*1/detA*dop[i][j];            // obliczanie macierzy odwrotnej do m. A
}}                                              //cout<<odA[i][j]<<"     ";}}

cout<<"    "<<odA[0][0]<<"       "<<odA[0][1]<<"           "<<odA[0][2]<<endl<<endl
    <<"    "<<odA[1][0]<<"     "<<odA[1][1]<<"     "<<odA[1][2]<<endl<<endl
    <<"       "<<odA[2][0]<<"        "<<odA[2][1]<<"         "<<odA[2][2]<<endl<<endl;

cout<<"\n\n\n\n";
system("pause");}
