var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var prompt = function(texto) {
    return lines.shift();
};
var N = parseInt(prompt());
var horas = parseInt(N/3600);
N = N % 3600;
var minutos = parseInt(N/60);
N = N % 60;
var segundos = N;
console.log(horas+":"+minutos+":"+segundos);