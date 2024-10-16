import math

def checkPrime(n):
    if n < 2:
        return False  # Numbers less than 2 are not prime

    count = 0
    for i in range(1, int(math.sqrt(n)) + 1):
        if n % i == 0:
            count += 1
            
            # If i is not the square root of n, we count n // i as another divisor
            if n // i != i:
                count += 1
        
    return count == 2  # Prime numbers have exactly two divisors: 1 and itself

def main():
    min_val = int(input("Enter the minimum value: "))
    max_val = int(input("Enter the maximum value: "))
        
    for i in range(min_val, max_val + 1):
        if checkPrime(i):
            print(i, end=" ")

if __name__ == '__main__':
    main()
