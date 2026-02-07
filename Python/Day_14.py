# Get a three-digit number from user and print the ten’s digit

num = int(input("Enter a three-digit number: "))
res1 = num%100
res2 = res1//10
print("Ten's digit:", res2)
