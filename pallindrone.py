def is_palindrome(num):
    original = str(num)
    reversed_num = original[::-1]
    if original == reversed_num:
        print("Number is a palindrome")
    else:
        print("Number is not a palindrome")

def main():
    num = input("Enter a number: ")
    is_palindrome(num)

if __name__ == "__main__":
    main()
