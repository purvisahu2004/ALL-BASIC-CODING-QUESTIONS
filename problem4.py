#Python Program to Find the Sum of First N Natural Numbers

num = int(input("enter  any  natural number: "))
#method1
sum = 0
for i in range (1,num+1):
    sum+=i
print(sum)

#method2
# Formula to Find the Sum of N terms
# Sum = ( Num * ( Num + 1 ) ) / 2

print(int(num*(num+1)/2))

#method3 
#using recursion
def sum_of_num(n):

    if n ==1:
        return 1
    return n + sum_of_num(n-1)
obj = sum_of_num(5)
print(obj)
    