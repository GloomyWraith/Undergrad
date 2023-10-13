import numpy
# tarefa 01 de ms211

'''Printa uma matriz'''
def imprimeMatriz(matriz):
    for j in range(len(matriz)):
        for i in range(len(matriz[j])):
            if i != (len(matriz[0]) - 1):   #até o penultimo valor separa com espaço
                print(matriz[j][i], end=' ')
            else:                           #último valor é colocado sem espaço
                print(matriz[j][i])

def montaMatrizHilbert(n):
    n = n+1 #só pro loop ir de 1 até n
    matriz = []
    for j in range(1, n):
        linhas = []
        for i in range(1, n):
            linhas.append((1/(i+j-1)))
        matriz.append(linhas)
    return matriz

matriz = montaMatrizHilbert(5)
imprimeMatriz(matriz)