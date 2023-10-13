###################################################
# MC102 - Algoritmos e Programação de Computadores
# Laboratório 6 - Plataforma
# Nome: Daniel Danilo Nunes dos Reis
# RA: 169250
###################################################

# Leitura de dados

plataforma = [int(i) for i in input().split()]
i = int(input())

# Movimentação

atual = int(i - 1)
caminho = []
final = ""

while 0 <= atual <= (len(plataforma) - 1):
    anterior = atual
    atual = anterior + plataforma[anterior]
    caminho.append(anterior)
    print(anterior + 1)
    if atual in caminho:
        final = "loop"
        break

if atual > (len(plataforma) - 1):
    final = "direita"
if atual < 0:
    final = "esquerda"

print(final)
