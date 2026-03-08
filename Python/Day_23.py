# Get a three-digit number from user and make the ten’s digit as 0, then print it

num = int(input("Enter a 3-digit number: "))
digit1 = num//100
digit3 = num%10
print("Result:", (digit1*100)+digit3)
