# Find the Prime Numbers in a Given Range in Python
# Given two integer as Limits, low and high, the objective is to write a code to in Python Find Prime Numbers in a Given Range in Python Language. To do so we’ll use nested loops to check for the Prime while Iterating through the range.

def checkprime(num):
    if num<2:
        return False
    for i in range(2 , int(num**0.5) +1):
        if num%i == 0:
            return False
    return True

start ,end = map(int , input("enter two num: ").split())
#printing the prime number between start end 
for m in range(start , end+1):
    if checkprime(m):
        print(m)
     
