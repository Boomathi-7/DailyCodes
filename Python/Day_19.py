# Get a four-digit number from user and only reverse the last two digits of the number, then print the number

num = int(input("Enter a 4-digit number: "))
digit_12 = num//100
digit = num%100
digit_3 = digit//10
digit_4 = num%10
result = (digit_12*100)+(digit_4*10)+digit_3
print("Result:", result)
