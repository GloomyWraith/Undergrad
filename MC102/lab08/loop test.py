for i in range(5):
    print("i: ", i)
    for k in range(4):
        if k <= 2:
            
            i += 1
            print(i, k)
        
        if k > 2:
            break
