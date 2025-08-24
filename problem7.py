#Check Whether a Number is a Prime or Not

#method1
def check_prime(num):
    for i in range(2,num):
        if num%i ==0:
            return "not prime"
    return "prime"
num = int(input("enter num: "))
print(check_prime(num))        

#method2 optimized by n/2
def check_prime(num):
    for i in range(2,int(num/2)+1):
        if num%i ==0:
            return "not prime"
    return "prime"
num = int(input("enter num: "))
print(check_prime(num))      

#method3  using recursion
def check_prime(num , i=2):
    if num==i:
        return True
    elif num%i == 0:
        return False
    elif num<2:
        return False
    return check_prime(num , i+1)
num = int(input("enter num: "))
if check_prime(num) == True:
    print("Prime")
else:
    print("Not prime")

    