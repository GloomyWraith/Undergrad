###################################################
# MC102 - Algoritmos e Programação de Computadores
# Laboratório 5 - Super Sete
# Nome: Daniel Danilo Nunes dos Reis
# RA: 169250
###################################################

# Leitura de dados

n1 = int(input())
n3 = int(input())
n4 = int(input())
n6 = int(input())

# Impressão dos quatro números das colunas fornecidos como entrada

print("Primeira:", n1)
print("Terceira:", n3)
print("Quarta:", n4)
print("Sexta:", n6)

# Processamento e impressão da lista de possíveis apostas

n2 = n1
n5 = n4
n7 = n6

print("Lista de apostas:")

while n2 <= n3:
    n5 = n4
    while n5 <= n6:
        n7 = n6
        while n7 < 10:
            soma = n1 + n2 + n3 + n4 + n5 + n6 + n7
            if soma % 7 != 0 and soma % 13 != 0:
                print("{} - {} - {} - {} - {} - {} - {}".format(n1, n2, n3, n4, n5, n6, n7))
            n7 += 1
        n5 += 1
    n2 +=  1
