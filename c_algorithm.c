#include <stdio.h>

long long int memo[1000001][2];

long long int dp(int x) {
  memo[0][0] = 0;
  memo[1][0] = 2;
  memo[2][0] = 7;
  memo[2][1] = 1;
  for (int i = 3; i <= x; i++)
  {
    memo[i][1] = (memo[i-1][1] + memo[i-3][0]) % 1000000007;
    memo[i][0] = (3* memo[i-2][0] + 2* memo[i-1][0] + 2* memo[i][1]) % 1000000007;
  }
  return memo[x][0];
};

int main(void) {
  int x;
  scanf("%d", &x);
  printf("%lld", dp(x));
  return 0;
};