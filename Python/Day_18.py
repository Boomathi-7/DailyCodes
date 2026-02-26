# Get a four-digit number from user, reverse only the first two digits of the number, then print the number

num = int(input("Enter a four-digit number: "))
digit1 = num//1000
digit = num%1000
digit2 = digit//100
digit34 = num%100
result = (digit2*1000) + (digit1*100) + digit34
print("Result:", result)
