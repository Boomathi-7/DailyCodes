# Get a three-digit number from user and print the sum of the digits

num = int(input("Enter a three-digit number: "))
digit_1 = num//100
digit_3 = num%10
digit = num%100
digit_2 = digit//10
print("Sum of digits:", digit_1+digit_2+digit_3)
