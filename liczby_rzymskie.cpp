#include <stdio.h>
#include <string.h>

struct Rzym_t
{
  char *s;
  int w;
};

/* zmiana new_branch 1 */

static const Rzym_t Rzym[]=
{
  {"M",  1000},
  {"CM",  900},
  {"D",   500},
  {"CD",  400},
  {"C",   100},
  {"XC",   90},
  {"L",    50},
  {"XL",   40},
  {"X",    10},
  {"IX",    9},
  {"V",     5},
  {"IV",    4},
  {"I",     1},
};

const char *dectorom( int liczba )
{
  int i;
  static char Rliczba[20];

  Rliczba[0] = '\0';

  for (i=0; liczba && i<sizeof(Rzym)/sizeof(Rzym[0]); i++)
  {
    while ( Rzym[i].w <= liczba )
    {
      strcat( Rliczba, Rzym[i].s );
      liczba -= Rzym[i].w;
    }
  }
  return Rliczba;
}

int main()
{
  int liczba;

  printf("\n");
  printf("1539\n");
  printf("grupa C\n\n");
  printf("\tProgram przeksztalca liczby arabskie na rzymskie.\n\n");


  for(;;)
  {
    printf("Podaj liczbe arabska: ");

        scanf("%d", &liczba);

        if(liczba<1 || liczba>3999)
                return 0;

        printf("\nLiczba Rzymska: %s\n\n", dectorom(liczba));
  }
  scanf("%d", &liczba);
}
