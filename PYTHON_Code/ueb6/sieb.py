# Aufgabe 2 sieb.py
def sieb(n):
    sieb = []
    
    for i in range(n + 1):
        sieb.append(i)
    
    sieb.pop(0)
    sieb.pop(0)
    print(sieb)
    
    j = 0
    while j < len(sieb):
        sieb = sieb[j :len(sieb) :sieb[j]]
        j += 1
    print(sieb)

sieb(12)
