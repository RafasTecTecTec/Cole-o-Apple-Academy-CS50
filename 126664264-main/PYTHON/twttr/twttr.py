def main():
    frase = input("Input: ")
    traduz(frase)

def traduz(text):
    t = len(text)
    for c in range(t):
        if text[c].lower() not in "aeiou":
            print(text[c], end = "")
        else:
            continue
    print("")

main()
