numbers = [1,324,432,5,64,5,64,57, 54,46,43]
names = ["Eren", "Mikesa", "Jean", "Connie", "Ymir", "Annie", "Rainer", "Berthold", "Krista", 
         "Grisha", "Collosal", "Armored", "Armin", "Erwin"]
print(len(names))
names[8] = "Historia"
names.append("Levi") #adds to the end of the list
index=names.index("Grisha")
names.pop(index) #removes item from a list based on index (or the end if no index is gien)
print(names)

for name in names: 
    print(f"Hello {name}")

for number in numbers: 
    print(f"{number}-10 = {number-10}")