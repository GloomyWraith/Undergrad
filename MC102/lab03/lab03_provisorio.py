###################################################
# MC102 - Algoritmos e Programação de Computadores
# Laboratório 3 - Imposto de Renda
# Nome: Daniel Danilo Nunes dos Reis
# RA: 169250
###################################################

# Leitura de dados

rend_trib = float(input('Rendimento tributável: '))
prev = float(input('Gasto com previdência: '))
edu = float(input('Gasto com educação: '))
retido = float(input('Imposto retido na fonte: '))

# Abatimento com calculo simplificado

base_simpl = 0.8*rend_trib

print(base_simpl)

# Abatimento com calculo completo

base_compl = rend_trib
if prev < 0.12*rend_trib:
    base_compl = rend_trib - prev
else:
    base_compl = 0.88*base_compl

if edu < 3561.50:
    base_compl = base_compl - edu
else:
    base_compl = base_compl - 3561.50

print(base_compl)

# Calculo do IR com calculo simplificado

aliq = [0, 0.075, 0.15, 0.225, 0.275]
deduzir = [0, 1713.58, 4257.57, 7633.51, 10432.32]
base_refer = [22847.77, 33919.81, 45012.61, 55976.17]
i = 0

for i in range(len(base_refer)):
    if base_simpl < base_refer[i]:
        break
    else:
        i = i + 1
    print(i)
    

ir_simpl = base_simpl*(aliq[i]) - (deduzir[i])

# Calculo do IR com calculo completo

for i in range(len(base_refer)):
    if base_compl < base_refer[i]:
        break
    else:
        i = i + 1
    

ir_compl = base_compl*(aliq[i]) - (deduzir[i])

print(i, aliq[i], deduzir[i])

# Calculo do IR devido com calculo simplificado

ajuste_simpl = ir_simpl - retido

# Calculo do IR devido com calculo completo

ajuste_compl = ir_compl - retido

# Saída

print("Base de calculo (Simplificado):", format(base_simpl, ".2f").replace(".", ","))
print("Base de calculo (Completo):", format(base_compl, ".2f").replace(".", ","))
print("Valor do IR (Simplificado):", format(ir_simpl, ".2f").replace(".", ","))
print("Valor do IR (Completo):", format(ir_compl, ".2f").replace(".", ","))
print("Valor do ajuste (Simplificado):", format(ajuste_simpl, ".2f").replace(".", ","))
print("Valor do ajuste (Completo):", format(ajuste_compl, ".2f").replace(".", ","))
