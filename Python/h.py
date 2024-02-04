#print even or odd in list
i = 0
l = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]
odd = []
even = []

while i < len(l):
    if l[i]% 2 == 0:
        even.append(l[i])
    else:
        odd.append(l[i])
    i = i + 1

print("even numbers:", even)
print("odd numbers:", odd)
