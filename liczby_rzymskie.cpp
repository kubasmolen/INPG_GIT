#include <stdio.h>
#include <string.h>

struct Rzym_t
{
  char *s;
  int w;
};

static const Rzym_t Rzym[]=
{
  {"M",  1000},/* zmiana master 4 */
  {"CM",  900},/* zmiana master 4 */
  {"D",   500},/* zmiana master 4 */
  {"CD",  400},/* zmiana master 4 */
  {"C",   100},/* zmiana master 4 */
  {"XC",   90},/* zmiana master 4 */
  {"L",    50},/* zmiana master 4 */
  {"XL",   40},/* zmiana master 4 */
  {"X",    10},/* zmiana master 4 */
  {"IX",    9},/* zmiana master 4 */
  {"V",     5},/* zmiana master 4 */
  {"IV",    4},/* zmiana master 4 */
  {"I",     1},/* zmiana master 4 */
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
