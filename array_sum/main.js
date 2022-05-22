const numbers = [1, 2, 3, 4, 5];

function array_sum(array) {
  let sum = 0;

  array.forEach((element) => (sum = sum + element));

  return sum;
}

console.log(array_sum(numbers));
