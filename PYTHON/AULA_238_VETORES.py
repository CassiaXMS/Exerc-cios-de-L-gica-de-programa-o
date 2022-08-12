qtd = int(input(' Quantos numeros voce quer digitar? '))

vet: [float] = [0 for x in range(0,qtd)]

for i in range(0,qtd):
    vet[i] = float(input(' Digite o numero: '))

print()
print(' NUMEROS DIGITADOS: ')

for i in range(0,qtd):
    print(f"{vet[i]:.2f}")

