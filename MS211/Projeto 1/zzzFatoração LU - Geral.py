# -*- coding: utf-8 -*-
"""
Created on Sat Sep 25 14:45:26 2021

@author: Reis
"""
import numpy as np

np.set_printoptions(precision = 18)

#Matriz de entrada:
dim = int(input("Dimensão: ")) #dimensão da matriz
matriz = np.array([])
for i in range(dim):
    linha = np.array(input().split(), dtype = np.float32)
    matriz = np.append(matriz, linha)
matriz = matriz.reshape(dim,dim)

#Lado direito da equação Ax = c
c = np.array(input("c = ").split(), dtype = np.float64)

def TrocaLinhas(m, i, k):
    j = m[i].copy()
    m[i] = m[k]
    m[k] = j
    return m.copy()


def LUfactor(dim, matriz, c):    #Calcula as Matrizes L e U de uma tranformação
    L = np.zeros((dim,dim), dtype = np.float64)
    for j in range(dim - 1): #iteração das colunas
        
            for i in range(dim-1, j, -1): #Calcula o multiplicador de cada linha para uma dada coluna
                # print("(i, j ) = ", i, j)
                
                r = abs(matriz[i][j]) - abs(matriz[j][j])
                print(r,"(i, j ) = ", i, j )
                if r > 0 and matriz[i][j-1] != 0: #condições p troca (Erro númerico!!)
                    
                    matriz = TrocaLinhas(matriz,j,i)
                    c = TrocaLinhas(c,j,i)
                    # print("linhas trocadas: ", i+1, ",", j+1,". Conta: ",r )
                    # print(matriz[i][j])
                
                if i > j and matriz[j][j] != 0:
                    mult = np.array(matriz[i][j]/matriz[j][j], dtype = np.float64)
                    matriz[i] = np.subtract(matriz[i], (np.multiply(matriz[j], mult.copy())))
                    L[i][j] = np.add(L[i][j], mult.copy(), dtype = np.float64)   
                    if matriz[i][j] != 0:       #Correção da matriz quando o calculo acima nao zera os elemntos do triangulo inferior da matriz
                        matriz[i][j] = 0
                    print("M = ", matriz, "(i, j, ) = (",i, " ", j," ",  ")") 
        # print("M_", i,j,k, " = ", matriz)
    for i in range(dim):
        L[i][i] = np.add(L[i][i], 1.0000)
    return(matriz, L, c)


U, L, c = LUfactor(dim,matriz.copy(), c)

# print(L, U, c, sep="\n")