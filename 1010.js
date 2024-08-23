var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const [cod1, num1, valru1] = lines[0].split(' ').map(Number);
const [cod2, num2, valru2] = lines[1].split(' ').map(Number);
var valorp1 = num1 * valru1;
var valorp2 = num2 * valru2;
var valorTotal = valorp1+valorp2;
console.log("VALOR A PAGAR: R$ " +valorTotal.toFixed(2));