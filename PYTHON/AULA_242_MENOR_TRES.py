num1 = int(input(' Primeiro valor: '))
num2 = int(input(' Segundo valor: '))
num3 = int(input(' Terceiro valor: '))


if num1 < num2:
    menor = num1
elif num2<num3:
    menor=num2
else:
    menor=num3

print(' MENOR =',menor)