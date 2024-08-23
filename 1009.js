var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var prompt = function(text) {
    return lines.shift();
}
var nome = prompt();
var salarioFixo = parseFloat(prompt());
var totaldeVendas = parseFloat(prompt());
var comissao = totaldeVendas * 0.15;
var salario = salarioFixo + comissao;
console.log("TOTAL = R$ " + salario.toFixed(2));