#AC

income=float(input("What is your monthly income?"))

rent=float(input("What is your monthly rent?"))

utilities=float(input("What is your monthly cost of utilities?"))

groceries=float(input("What is your monthly payment for groceries?"))

transportation=float(input("What is your monthly cost of transportation?"))

total_leftover=income-(rent+utilities+groceries+transportation)

rent_money=(income/rent)

print(rent,"Rent is",rent/income*100,"percent of income.")

print(utilities,"Utlities are",utilities/income*100,"percent of income.")

print(groceries,"Groceries are",groceries/income*100,"percent of income.")

print(transportation,"Transportation is",transportation/income*100,"percent of income.")

print("You have", total_leftover, "left.")

print("Try to save 10 percent of your income.")