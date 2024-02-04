#write a program to create a dictionary that will store grade of 3 student and find the avg of these number and percentage
a=int(input("enter the number of subjects of a student"))
dic={}
sum=0
for i in range(a):
    f=input("enter the name:")
    l=int(input("enter the number of the student:"))
    dic[f]=l
print(dic)

for j in dic:
    per=dic[j]*0.01
    print("percentage","of student","=",dic[j],"%")
    sum=sum+dic[j]
avg=sum/a
print("average =",avg)