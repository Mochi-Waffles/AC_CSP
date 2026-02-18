#AC
income=float(input("What is your monthly income cost?"))

rent=float(input("What is your monthly rent cost?"))

utilities=float(input("What is your monthly utilities cost?"))

groceries=float(input("What is your monthly groceries cost?"))

transportation=float(input("What is your monthly transportation cost?"))

total_leftover=income-(rent+utilities+groceries+transportation)

rent_money=(income/rent)

print(rent,"Rent is",rent/income*100,"percent of income.")

print(utilities,"Utlities are",utilities/income*100,"percent of income.")

print(groceries,"Groceries are",groceries/income*100,"percent of income.")

print(transportation,"Transportation is",transportation/income*100,"percent of income.")

print("You have", total_leftover, "left.")

print("Try to save at least 10 percent of your income, which is,", (total_leftover/10))