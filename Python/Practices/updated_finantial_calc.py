def money(income):
    return float(input(f"what is your monthly {income} cost:"))

income=money("income")

rent=money("rent")

utilities=money("utiities") 

groceries=money("groceries") 

transportation=money("transportation") 

def doller(A, a):
    print(f"{A} is {(a/income)*100} percent of income")

doller("rent", rent)

doller("utilitiest", utilities)

doller("groceries", groceries)

doller("transportation", transportation)
