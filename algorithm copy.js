function test3(board, operation) {
  const DIR = {
    U: [-1, 0],
    D: [1, 0],
    L: [0, -1],
    R: [0, 1],
  };
  const LEN = board.length;
  const isValid = (y, x) => 0 <= y && y < LEN && 0 <= x && x < LEN;

  let Y = 0;
  let X = 0;
  let score = 0;
  for (let i = 0; i < operation.length; i++) {
    const [dY, dX] = DIR[operation[i]];
    Y += dY;
    X += dX;
    if (isValid(Y, X) === false) {
      Y -= dY;
      X -= dX;
      continue;
    }
    score += board[Y][X];
    board[Y][X] = 0;
  }
  return score;
}
const board2 = [
  [567, 6734, 132],
  [789, 243, 6],
  [89, 33333, 0],
];

console.log(test3(board2, "UUUDD"));
