var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var prompt = function(texto) {
    return lines.shift();
};
var km = parseInt(prompt());
var tempo = km * 2;
console.log(tempo+" minutos");