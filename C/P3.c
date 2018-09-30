/* Problem 3 */
/* Sup Bro */

#include <stdio.h>


int max_of_four(int a, int b, int c, int d){
  int max=a;
  if (b>max){
    max=b;
  }

  if (c>max){
    max=c;
  }

  if (d>max){
    max=d;
  }
  return max;
}

int main()
{
  int a,b,c,d,max=0;

  scanf("%d %d %d %d", &a,&b,&c,&d);

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  max=max_of_four(a,b,c,d);

  printf("%d\n", max);

  return 0;
}
