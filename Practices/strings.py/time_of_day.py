#AC

time=int(input("What is the hour in millitary time: "))

if time<=11:
    print("Good morning!")
elif time<=20:
    print("Good evening!")
elif time>12:
    print("Good afternoon!")
elif time>24:
    print("How did you do that")