# Check Whether a Year is a Leap Year or Not in Python
# Given an integer input as the year, the objective is to Check if a Year is a Leap Year or Not in Python Language
#method1
year = int(input("enter year: "))
if (year % 400 ==0) or (year %4==0 and  year%100 !=0):
    print("Leap Year")
else:
    print("not a leap year")

#method2 using calendar module
import calendar
def isleapyear(year):
    return calendar.isleap(year)
year = int(input("enter year: "))
print(isleapyear(year))

