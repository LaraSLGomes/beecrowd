var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var numf = parseFloat(lines.shift());
var horat = parseFloat(lines.shift());
var varh = parseFloat(lines.shift());
var salariototal = horat * varh;
console.log("NUMBER = " +Math.round(numf));
console.log("SALARY = U$ " +salariototal.toFixed(2));