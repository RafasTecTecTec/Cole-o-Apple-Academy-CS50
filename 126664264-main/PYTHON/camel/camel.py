def main():
     file = input("camelCase: ")
     file = convert(file)
     print("")

def convert(n):
     t = len(n)
     print("snake_case: ", end = "")
     for fc in range(t):
        if n[fc].islower():
            print(n[fc], end = "")
        else:
            print("_", n[fc].lower(), sep = "", end = "")
     return

main()

