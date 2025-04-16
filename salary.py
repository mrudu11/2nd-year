def check_salary(s):
  if s>50000:
    print("high income")
  elif 30000<=s<=50000:
    print("medium income")
  else:
    print("low income")
def main():
  salary=int(input("enter salary"))
  check_salary(salary)

if __name__ == "__main__":
  main()
