def main():
    coke = 50
    while coke > 0:
        print(f"Amount Due: {coke}")
        coin = int(input("Insert Coin: "))
        if coin == 5 or coin == 10 or coin == 25:
            coke = coke - coin
    print("Change Owed:", abs(coke))

main()
