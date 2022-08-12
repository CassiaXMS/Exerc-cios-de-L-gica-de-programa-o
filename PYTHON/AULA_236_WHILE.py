numero:int
soma: int

numero =  int(input('Digite o primeiro numero: '))

soma=0

while numero != 0:
    soma = soma + numero
    numero = int(input('Digite outro numero: '))

print(' SOMA = ', soma)