# Aufgabe 2 sieb.py
def sieb(n):
    sieb = []
    
    for i in range(n + 1):
        sieb.append(i)
    
    sieb.pop(0)
    sieb.pop(0)
    
    j = 0
  
    while j < sieb.__len__():
        
        if (sieb[j] * sieb[j]) >= n:
            break
        negative = sieb[j::sieb[j]]
        negative.pop(0)
        
        for i in negative:
            sieb.remove(i)
        j += 1
    
    print(sieb)


sieb(5)
sieb(9)
sieb(12)
