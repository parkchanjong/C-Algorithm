#include <stdio.h>

int memo[100];

int fibonacci(int x) {
  if(x == 1) return 1;
  if(x == 2) return 1;
  if(memo[x] != 0) return memo[x];
  return memo[x] = fibonacci(x - 1) + fibonacci(x - 2);
}

int main(void) {
  printf("%d", fibonacci(30));
};