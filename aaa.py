a = int(input("Input first element : "))
b = int(input("Input last element : "))
odd = []
even = []
for i in range(a,b):
    if(i%2==0):
        even.append(i)
    else:
        odd.append(i)
        
print("Even numbers" ,even)
print("Odd numbers" , odd)
