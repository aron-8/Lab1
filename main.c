#include <stdio.h>

int main()
{ /*
//6. Painting
  float Height;
  float Diameter;

  printf("Paint the container\nHeight? ");
  scanf("%f", &Height);
  printf("Diameter? ");
  scanf("%f", &Diameter);
  float area = Height*Diameter*Diameter*3.14159265/4+Height*3.14159265*Diameter;
  printf("%0.1f can(s) of paint needed.\n", area/2);

//7. \n and %d
    printf("  /\n /\n\/\n\n");
    printf("\\\n \\\n  \\\n");
    char k = '"';
    char f[3] = {'%', 'd','\0'};
    printf("printf(%chello\\n%c) will print %chello%c\nand starts a new line\n", k, k, k, k);
    printf("Using %c%s%c we can print the value of an integer variable.\n", k, f, k);


//8. Further problems for practicing
 int a;
 int b;
 printf("Az első?");
 scanf("%d", &a);
 printf("Az maásodik?");
 scanf("%d", &b);
 int o = a+b;
 int s = a*b;
 printf("összeg:%d és szorzat:%d", o, s);

    */
  // Money
  int sum;
  int c;
  for (int i = 50; i <= 200; i = i)
  {
    printf("How many %dFt?", i);
    scanf("%d", &c);
    sum = sum + i * c;
    i = i * 2;
  }
  printf("You has %d Ft!", sum);

  return 0;
}
