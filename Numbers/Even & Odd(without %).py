num = int(input("ente a number: "))
x = num & 1
if(x == 0):
    print(f"{num} is even")
else:
    print(f"{num} is odd")
