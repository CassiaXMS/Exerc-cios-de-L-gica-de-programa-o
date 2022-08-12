qtd = int(input(' Quantos numeros voce vai digitar? '))

vet = [0 for x in range(qtd)]

for i in range(0,qtd):
    vet[i] = float(input(' Digite um numero: '))

print()
print(' VALORES = ',  end="")
for i in range(0,qtd):
    print(f'{vet[i]: .1f}', end=' ' )

print()
soma=0
for i in range(0,qtd):
    soma = soma + vet[i]
print(f' SOMA= {soma: .2f}')

media = soma / qtd
print(f' MEDIA= {media: .2f}')