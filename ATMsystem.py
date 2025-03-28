#3 ATM SYSTEM
print("Welcome")
total_bal=100000
print("Menu=>\n1.check balance\n2.deposit money\n3.withdraw money\n4.exit system")
ch=int(input("enter choice"))
if ch==1:
   print(total_bal)
elif ch==2:
  deposit=int(input("enter deposit amount"))
  total_bal=total_bal+deposit
  print(total_bal)
elif ch==3:
  withdraw=int(input("enter withdraw amount"))
  if withdraw>total_bal:
    print("insufficient balance")
  else:
    total_bal=total_bal-withdraw
    print(total_bal)
else:
  print("Thank You")
