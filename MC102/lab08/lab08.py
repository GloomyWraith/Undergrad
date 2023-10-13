###################################################
# MC102 - Algoritmos e Programação de Computadores
# Laboratório 8 - O Desafio da Palavra Escondida
# Nome: Daniel Danilo Nunes dos Reis
# RA: 169250
###################################################

# DICA: use os métodos lower, replace, split e find


# Leitura de dados
L = int(input())
texto = ""
for i in range(L):
    linha = str(input())
    texto += " " + linha
    
letras = list(str(input()))
lista = [".", ",", ":", ";", "!", "?"]

palavra = []
pos = []

# Verificação da palavra no texto

for pontuacao in lista:
    texto = texto.replace(pontuacao,"") #possivelmente inserir espaço entre as aspas do replace

texto = str(texto.lower())
txt = texto.split()

contem = False
l = 0
k = 0
anterior = 0
while l in range(len(letras)):
    
    for i in range(anterior, len(txt)):
        if anterior < len(txt):
            k = txt[i].find(letras[l])
            if k != -1:
                palavra.append(i + 1)
                pos.append(k + 1)
                anterior = i + 1
                contem = True
                break
    l += 1
# Impressão da saída do programa, caso 

if contem == True and len(palavra) == len(letras):
    print("Palavra encontrada")
    for j in range(len(palavra)):
        print("{0}: palavra {1}, letra {2}".format(letras[j], palavra[j], pos[j]))
else:
    print("Palavra nao encontrada")
