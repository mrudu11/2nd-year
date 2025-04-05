#7 ATM cash Dispensing Machine
amount = int(input("enter amount multiple of 500"))
if amount%500==0:
  notes_2000 = print("2000 notes = ", amount//2000)
  notes_500 = print("500 notes =", (amount%2000)//500)
else:
  print("invalid amount")