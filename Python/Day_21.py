# Get a two-digit number from user and make the ten’s digit as 1, then print it

num = int(input("Enter a 2-digit number: "))
digit2 = num%10
print("Result:", (10+digit2))
