var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var distpercorrida = parseFloat(lines.shift());
var combgasto = parseFloat(lines.shift());
var consumomedio = distpercorrida / combgasto;
console.log(consumomedio.toFixed(3)+" km/l");