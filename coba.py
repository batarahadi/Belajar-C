def rubah(a,b):
    tampung = a
    a = b
    b = tampung
    return a,b

x = 10
y = 20
print(x,y)
print(rubah(x,y))