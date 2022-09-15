#include <stdio.h>

int main(void) {
  int a,b;
  int n;
  a = 1;
  b = 1;
  scanf("%d",&n);
  while (a + b < n) {
    a = a + b;
    b = a - b;
  }
  printf("%d\n", a);
  return 0;
}
