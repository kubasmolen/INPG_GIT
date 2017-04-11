
#include<math.h>
#include<iostream.h>

int a,b,c;
int delta(int a, int b,int c)
{return b*b-4*a*c;}
float e(int a,int  b)
{return ((-b)/(2*a));}
float pierwX1(int  a, int  b, int  delta)
{return (-b+sqrt(delta))/(2*a);}
float pierwX2(int  a, int  b, int  delta)
{return (-b-sqrt(delta))/(2*a);}
int xliniowe(int c, int b)
{return -c/b;}

main ()

{

int a,b,c,d;
cout<<"Rownanie kwadratowe:\n a*x*x+b*x+c=0 \n";
cout<<"Podaj a: ";
cin>>a;
cout<<"Podaj b: ";
cin>>b;
cout<<"Podaj c: ";
cin>>c;

if (delta(a,b,c)<0)
      {cout<<"Rownanie nie ma rozwiazan \n";}
      else if (delta(a,b,c)==0)
        {cout<<"Jest tylko jedno rozwiazanie:\n x="<<e(a,b);
        cout<<"\n";}
        else if (delta(a,b,c)>0)
            {cout<<"Sa dwa rozwiazania rowne: \n"<<"x1="<<pierwX1(a,b,delta(a,b,c));
            cout<<"\n"<<"x2="<<pierwX2(a,b,delta(a,b,c));
            cout<<"\n";}
if (a==0)
   {
          cout<<"X jest rowne:"<<xliniowe(c,b);
          cout<<"\n";}
   else
   {
       d=delta(a,b,c);
       cout<<"Delta rownania wynosi:"<<d;
       cout<<"\n";

}
system ("pause");
}
