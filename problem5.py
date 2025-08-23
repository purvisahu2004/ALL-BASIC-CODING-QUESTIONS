# Find the Sum of the Numbers in a Given Range
# Given two integer inputs as the range [ low , high ], the objective is to find the sum of the numbers that lay in the intervals given by the integer inputs. Therefore we’ll write a code to Find the Sum of the Numbers in a Given Range in Python Language.
low , high = map(int , input("enter any two number ").split())

#method1
sum =0
for i in range(low , high+1):
    sum+=i
print(sum)


#method2
def sum_ofgiven_range(sum , l , h):
    if l>h:
        return sum
    return l + sum_ofgiven_range(sum , l+1 , h)
l , h = map(int , input("enter any two number ").split())
sum =0
print(sum_ofgiven_range(sum , l,h))