import math
import matplotlib.pyplot as plt
import numpy as np

'''Fórmula de Q dada no enunciado'''
def Q(K, Y0, v):
    return -1 + (K/Y0)**v

'''Fórmula exata da equação diferencial de Richards Y(t)'''
def solucaoExata(K,alpha, t, t0, v, Y0):
    q = Q(K, Y0, v)
    e = math.e
    divisor = (1 + q * e ** (-1 * alpha * (t - t0))) ** (1/v)
    return K/divisor

'''Equação diferencial de Richards'''
def equacaoDiferencialDeRichards(Y,K,v, alpha):
    return alpha * (1 - (Y/K) ** v) * Y

'''Cálculo do erro relativo'''
def erroRelativo(xreal, xprox):
    vetorErro = []
    for i in range(len(xreal)):
        vetorErro.append((xreal[i] - xprox[i]) / xreal[i])
    return vetorErro

'''Aplicação do método de euler'''
def metodoDeEuler(a,b,h, Y0, K,v, alpha):
    n = int((b-a)/h)
    imagem = [Y0]

    for i in range(n-1):
        yi = Y0 + h * equacaoDiferencialDeRichards(Y0, K, v, alpha)
        Y0 = yi
        imagem.append(yi)

    return imagem

'''Aplicação do método de runge kutta de 4 ordem'''
def rungeKutta4ordem(a,b,h, Y0, K,v, alpha):
    n = int((b - a) / h)
    imagem = [Y0]

    for i in range(n):

        k1 = h * equacaoDiferencialDeRichards(Y0, K, v, alpha)
        k2 = h * equacaoDiferencialDeRichards(Y0 + k1/2, K, v, alpha)
        k3 = h * equacaoDiferencialDeRichards(Y0 + k2/2, K, v, alpha)
        k4 = h * equacaoDiferencialDeRichards(Y0 + k3, K, v, alpha)

        yi = Y0 + (1/6) * (k1 + 2 * k2 + 2 * k3 + k4)
        Y0 = yi
        imagem.append(yi)

    return imagem

def RungeKutta0a4():
    dominio = np.arange(0, 4.05, 0.05)
    imagemReal = solucaoExata(10, 0.5, dominio, 0, 1, 1)
    plt.plot(dominio, imagemReal, color="orchid", linewidth=1.0, label="Real")
    imagemAproximadaRungeKutta = rungeKutta4ordem(0, 4, 0.05, 1, 10, 1, 0.5)
    plt.plot(dominio, imagemAproximadaRungeKutta, color="indigo", linewidth=1.0, label="Runge-Kutta")
    plt.legend()
    plt.show()

def ErroRungeKutta0a4():
    dominio = np.arange(0, 4.05, 0.05)
    imagemReal = solucaoExata(10, 0.5, dominio, 0, 1, 1)
    imagemAproximadaRungeKutta = rungeKutta4ordem(0, 10, 0.05, 1, 10, 1, 0.5)
    erro = erroRelativo(imagemReal, imagemAproximadaRungeKutta)
    plt.plot(dominio, erro, color="red", linewidth=1.0, label="Erro")
    plt.legend()
    plt.show()

def RungeKutta0a10():
    dominio = np.arange(0, 10.05, 0.05)
    imagemReal = solucaoExata(10, 0.5, dominio, 0, 1, 1)
    plt.plot(dominio, imagemReal, color="orchid", linewidth=1.0, label="Real")
    imagemAproximadaRungeKutta = rungeKutta4ordem(0, 10, 0.05, 1, 10, 1, 0.5)
    plt.plot(dominio, imagemAproximadaRungeKutta, color="indigo", linewidth=1.0, label="Runge-Kutta")
    plt.legend()
    plt.show()

def ErroRungeKutta0a10():
    dominio = np.arange(0, 10.05, 0.05)
    imagemReal = solucaoExata(10, 0.5, dominio, 0, 1, 1)
    imagemAproximadaRungeKutta = rungeKutta4ordem(0, 10, 0.05, 1, 10, 1, 0.5)
    erro = erroRelativo(imagemReal, imagemAproximadaRungeKutta)
    plt.plot(dominio, erro, color="indigo", linewidth=1.0, label="Erro")
    plt.legend()
    plt.show()

#-=-=-=-=-=-=-=-=-=-=-=ExercícioC-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#RungeKutta0a4()
#ErroRungeKutta0a4()
#RungeKutta0a10()
#ErroRungeKutta0a10()





