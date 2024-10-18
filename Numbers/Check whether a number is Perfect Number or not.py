num = int(input("ente a number: "))
sum = 0
x  = num // 2
for i in range(1,x+1):
    if(num % i == 0):
        sum += i

if sum == num:
    print(f"{num} is a perfect number")
else:
    print(f"{num} is not perfect number")
