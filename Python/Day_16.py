# Get a two-digit number from user and print the reverse of the number

num = int(input("Enter a two-digit number: "))
digit1 = num//10    #Ten's digit
digit2 = num%10     #One's digit
reverse = (digit2*10)+digit1
print("Reversed number:", reverse)
