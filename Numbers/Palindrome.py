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
    number = int(input('Enter the number: '))
    if palindrome(number):
        print(number,' is a palindrome')
    else:
        print(number,' is not a palindrome')
        
if __name__ == '__main__':
    main()
