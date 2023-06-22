  1 #include <stdlib.h>
  2 #include <stdio.h>
  3 int main(int argc, char *av[])
  4 {
  5     if (argc == 2)
  6     {
  7         int n1 = atoi(av[1]);
  8         int i = 2;
  9         if ( n1 == 1 )
 10             printf("1");
 11         while(n1 >= i)
 12         {
 13             if ( n1 % i == 0 )
 14             {
 15                 printf("%d", i);
 16                 if (n1 == i)
 17                     break;
 18                 printf("*");
 19                 n1 /= i;
 20                 i = 1;
 21             }
 22             i++;
 23         }
 24     }
 25     printf("\n");
 26 }
