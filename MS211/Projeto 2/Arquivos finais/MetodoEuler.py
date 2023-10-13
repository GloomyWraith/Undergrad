# -*- coding: utf-8 -*-
"""
Created on Tue Oct 19 16:28:10 2021

@author: Reis
"""
import pandas as pd
import numpy as np
np.set_printoptions(precision = 18)

y_i = float(input()) #valor inicial

h = 0.05                           #tamanho dos intervalos
t = np.arange(0, 4 + h, h)         #intervalo 
n = len(t) + 1                     #número de intervalos

a, k, v = [0.5, 10, 1]            #outros parametros da equação

def Deriv (y):
    
    f = a*(1 - (y/k)**v)*y
    return f

def exata (t):
    
    F = k/((1+ (- 1 +  (k/y_i)**v)*np.exp(-a*v*t))**(1/v))
    return F

Y = np.array([y_i])
pontos = np.array([t[0], y_i, 0])

for i in range(1, n - 1):
    
    y = Y[i - 1] + h*Deriv(Y[i - 1])
    Y = np.append(Y, y)
    E = (exata(t[i]) - y)/exata(t[i])
    pontos = np.concatenate((pontos, np.array([t[i], y, E])), axis = 0)
    
pontos = pontos.reshape(n - 1 , 3)

dados = pd.DataFrame(data = pontos, columns = "t Y Erro".split())

dados.to_excel("ScatterEuler.xlsx")





















