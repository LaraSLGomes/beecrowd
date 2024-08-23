var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var raio = parseFloat(lines.shift());
var area = parseFloat(lines.shift());
var areaResultado = 3.14159 * raio * raio;
console.log("A=" + areaResultado.toFixed(4));