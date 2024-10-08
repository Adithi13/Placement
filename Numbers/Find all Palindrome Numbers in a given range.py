def palindrome(n):
    revNum = 0
    dup = n
    while(n > 0):
        last_digit = n % 10
        revNum = (revNum * 10) + last_digit
        n = n // 10
    
    if dup == revNum:
        return True
    else:
        return False
    
def main():
    min_val = int(input("Enter the minimum value: "))
    max_val = int(input("Enter the maximum value: "))
    # number = int(input('Enter the number: '))
    # if palindrome(number):
    #     print(number,' is a palindrome')
    # else:
    #     print(number,' is not a palindrome')
        
    for i in range(min_val, max_val + 1):
        if palindrome(i):
            print(i, end=" ")
if __name__ == '__main__':
    main()
