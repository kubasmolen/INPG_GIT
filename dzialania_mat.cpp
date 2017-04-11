#include <stdio.h>
#include <iostream.h>

float suma (float a, float b)
{
      return a+b;
      }
float roznica (float a, float b)
{
      return a-b;
      }

float a; float b;
float iloczyn (float a, float b)
{
      return a*b;
}
float iloraz (float a, float b)
{
      return a/b;
}


main()
{
      float a,b;

cout<<"podaj liczbe: ";
cin>>a;
cout<<"podaj druga liczbe: ";
cin>>b;

cout<<" suma a+b wynosi: "<<suma(a,b)<<"\n";

cout<<" roznica a-b wynosi: "<<roznica(a,b)<<"\n";

cout<<" iloczyn a*b wynosi: "<<iloczyn(a,b)<<"\n";

cout<<" iloraz a\b wynosi: "<<iloraz(a,b)<<"\n";

system("pause");
}
