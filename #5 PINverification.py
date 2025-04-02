#5 PIN verification
PIN=1234
count=3
while count>0:
  pin=int(input("enter pin"))
  if PIN==pin:
    print("your pin is correct")
    break
  count-=1
  print("incorrect pin")
if count==0:
   print("your card is blocked")


