
qtd=int(input(' Quantos numeros serão digitados: '))

soma = 0
for i in range(0, qtd):
    numero= int(input(' Digite um numero: '))
    soma = soma + numero

print(' SOMA = ', soma)