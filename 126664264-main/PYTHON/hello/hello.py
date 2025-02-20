def main():
    nome = input("Qual seu nome pia? ").strip().title()

    hello(nome)

def hello(to = "world"):
    print("Hello,", to)


main()
