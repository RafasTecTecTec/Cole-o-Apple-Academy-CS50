def main():
    fala = input("Qual foi mlk? ")
    print(f"{convert(fala)}")


def convert(fala):
    return fala.replace(":)", "🙂").replace(":(","🙁")

main()
