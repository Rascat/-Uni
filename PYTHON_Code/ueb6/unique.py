# python
def unique(array):
    x = 0
    y = 0
    for i in range(len(array)):
        x += i
        y += array[i]

    if (x - y) == 0:
        return True
    else:
        return False
    
list1 = [1 ,1, 2, 3, 4,0]
list2 = [3,2,1,0]
list3 = [1,2,3,4,5,5]
list4 = [2,4,1,3,0]
print(unique(list1))
print(unique(list2))
print(unique(list3))
print(unique(list4))


