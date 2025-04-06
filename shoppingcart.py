#8 shopping cart - list operations
shopping_list=[]
while True:
  item=input("enter item(type 'done' to exit) ")
  if item=="done":
    break
  else:
    shopping_list.append(item)
print(shopping_list)