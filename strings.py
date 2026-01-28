name=input("What is thy name: ").strip().upper()

print("Hello", name[-3:])

sentance = "the quick brown fox jumps over the lazy dog"
print(sentance)
word=input("Pick a word from the sentance to change: ").strip().lower()
new_word=input("What is the new word: ").strip().lower()

start =sentance.find(word)
sentance=sentance.replace(word, new_word)
print(name +"! Did you know?", sentance)