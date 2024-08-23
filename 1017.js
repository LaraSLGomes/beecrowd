var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var prompt = function(texto) {
    return lines.shift()};
const gastoPorL = 12;
var tempo = parseFloat(prompt());
var velocidade = parseInt(prompt());
var totalPercorrido = tempo * velocidade;
var consumo = totalPercorrido / gastoPorL;
console.log(consumo.toFixed(3));