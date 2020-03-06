#include <stdio.h>

int main() {

int x, n100, n50, n20, n10, n5, n2, n1, resto;

scanf("%d", &x);

n100 = x / 100;
resto = x % 100;

n50 = resto / 50;
resto= resto % 50;

n20 = resto / 20;
resto = resto % 20;

n10 =resto / 10;
resto = resto % 10;

n5 = resto / 5;
resto = resto % 5;

n2 = resto / 2;
resto = resto % 2;

n1 = resto / 1;
resto = resto % 1;

printf("%d\n", x);
printf("%d nota(s) de R$ 100,00\n", n100);
printf("%d nota(s) de R$ 50,00\n", n50);
printf("%d nota(s) de R$ 20,00\n", n20);
printf("%d nota(s) de R$ 10,00\n", n10);
printf("%d nota(s) de R$ 5,00\n", n5);
printf("%d nota(s) de R$ 2,00\n", n2);
printf("%d nota(s) de R$ 1,00\n", n1);

return 0;
  }
