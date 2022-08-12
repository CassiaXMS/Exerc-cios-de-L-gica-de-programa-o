N = int(input('Qual a ordem da matriz? '))

matriz=[[0 for x in range(N)] for x in range(N)]

for i in range(0, N):
    for j in range(0,N):
        matriz[i][j] = int(input(f' Elemento [{i},{j}]:'))

print(' DIAGONAL PRINCIPAL: ')
for i in range(0, N):
            print(f'{matriz[i][i]}', end=' ' )

print()
contador=0
for i in range(0,N):
    for j in range(0, N):
         if matriz[i][j] < 0:
            contador=contador+1

print(f'Quantidade de negativos: {contador}')