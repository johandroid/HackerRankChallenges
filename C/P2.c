/* Problem 2 */
/* Sup Bro */

#include <stdio.h>

#define MAX_LEN 255

int main()
{
  char ch;
  char s[100];
  char sen[MAX_LEN];

  scanf("%c", &ch);
  scanf("%s", s);
  scanf("\n");
  scanf(" %[^\n]%*c", sen);

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  printf("%c\n", ch);
  printf("%s\n", s);
  printf("%s\n",sen);
  return 0;
}
