#include <stdio.h>

void fib(long long x) {
  int a = 1, b = 0, c = 0;
  for (int i = 0; c < x; ++i){
    printf("%d ", c);
    c = a+b;
    b = a;
    a = c;
  }
}

int main(void) {
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  fib(n);
  return 0;
}
