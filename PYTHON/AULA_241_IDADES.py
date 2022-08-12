print('Dados da primeira pessoa:')
nome1 = str(input(' NOME: '))
idade1 = int(input(' IDADE: '))

print('Dados da segunda pessoa:')
nome2 = str(input(' NOME: '))
idade2 = int(input(' IDADE: '))

media = (idade1+ idade2) / 2

print(f' A idade de {nome1} e {nome2} eh de {media: .1f} anos.')