nome1:str; nome2:str
salario1:float; salario2: float
idade1:int
sexo:str


nome1= input(" NOME DA PRIMEIRA PESSOA: ")
salario1 = float(input("Salario da primeira pessoa: "))

nome2 = input(" NOME DA SEGUNDA PESSOA: ")
salario2 =  float(input("Salario da segunda pessoa: "))

idade1 = int(input(" Digite uma idade: "))
sexo = input(" Digite um sexo(F/M): ")

print(f" Nome 1: {nome1}")
print(f" Nome 2: {nome2}")
print(f" Salario 1: {salario1:.2f}")
print(f" Salario 2: {salario2:.2f}")
print (f" Idade: {idade1}")
print (f" Sexo: {sexo}")