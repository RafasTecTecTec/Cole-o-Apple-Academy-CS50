def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")


def is_valid(s):
    # max 6 min 2 chars
    ls = len(s)
    if ls < 2 or ls > 6:
        return False

    # sem nenhuma pontuação ou espaços
    for count in range(ls):
        if not s[count].isalnum():
            return False

    # começar com 2 letras
    if not s[:2].isalpha():
        return False

    # numero devem estar juntos no final, primeiro numero !0
    for count in range(ls):
        if s[count].isdecimal() and s[count] == "0":
            return False
        elif s[count].isdecimal() and s[count] != "0":
            break

    for count in range(ls):
        if s[count].isdecimal():
            for l in range(count, ls - 1):
                if s[l].isalpha():
                    return False

    return True

main()
