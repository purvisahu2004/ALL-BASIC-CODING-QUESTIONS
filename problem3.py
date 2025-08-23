#check whether it is vowel or consonant
vowel = 'aeiouAEIOU'
ch = input("enter: ")
if ch.isalpha():
  if ch in vowel:
    print("it is vowel")
  else:
    print("is is consonant")
else:
  print("not a valid input")