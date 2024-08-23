# -*- coding: utf-8 -*-

dias = int(input())

anos = dias
dias %= 365
meses = dias
dias %= 30

print(f"{anos} ano(s)")
print(f"{meses} mes(es)")
print(f"{dias} dia(s)")