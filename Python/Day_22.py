# Get a three-digit number from user and make the one’s digit as 2, then print it

num = int(input("Enter a 3-digit number: "))
digit = num//10
print("Result:", (digit*10)+2)
