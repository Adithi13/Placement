num = int(input("ente a number: "))
if(num >> 31 == 0):
    print(f"{num} is positive")
else:
    print(f"{num} is negative")
