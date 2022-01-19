let arry = [];
let visit = [];

function factorial(n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

function dfs(n, m, depth, ans) {
  let str = "";
  if (depth === m) {
    for (let index = 0; index < m; index++) {
      str += arry[index];
    }
    ans.push(parseInt(str));
    const count = factorial(n) / factorial(n - m);
    if (ans.length === count) {
      return ans;
    }
  }

  for (let index = 0; index < n; index++) {
    if (!visit[index]) {
      visit[index] = true;
      arry[depth] = index + 1;
      dfs(n, m, depth + 1, ans);
      visit[index] = false;
    }
  }
}

function test2(n, m) {
  let ans = [];
  dfs(n, m, 0, ans);
  return ans;
}

test2(10, 2);
