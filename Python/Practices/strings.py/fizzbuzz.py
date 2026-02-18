#AC

start = 1

while start <=50:
    if start%5==0 and start%3==0:
        print("FizzBuzz")
    elif start%5==0:
        print("Buzz")
    elif  start%3==0:
        print("Fizz")
    else:
        print(start)
    start+=1    