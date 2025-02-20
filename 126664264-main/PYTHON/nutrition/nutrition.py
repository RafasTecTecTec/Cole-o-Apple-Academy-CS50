def main():
    item = input("Item: ").lower()

    frutas = [
        {"nome" : "apple", "calorias" : "130"},
        {"nome" : "avocado", "calorias" : "50"},
        {"nome" : "banana", "calorias" : "110"},
        {"nome" : "cantaloupe", "calorias" : "50"},
        {"nome" : "grapefruit", "calorias" : "60"},
        {"nome" : "grapes", "calorias" : "90"},
        {"nome" : "honeydew melon", "calorias" : "50"},
        {"nome" : "kiwifruit", "calorias" : "90"},
        {"nome" : "lemon", "calorias" : "15"},
        {"nome" : "lime", "calorias" : "20"},
        {"nome" : "nectarine", "calorias" : "60"},
        {"nome" : "orange", "calorias" : "80"},
        {"nome" : "peach", "calorias" : "60"},
        {"nome" : "pear", "calorias" : "100"},
        {"nome" : "pineapple", "calorias" : "50"},
        {"nome" : "plums", "calorias" : "70"},
        {"nome" : "strawberries", "calorias" : "50"},
        {"nome" : "sweet cherries", "calorias" : "100"},
        {"nome" : "tangerine", "calorias" : "50"},
        {"nome" : "watermelon", "calorias" : "80"}
    ]

    for fruta in frutas:
        if fruta["nome"] == item:
            print(fruta["calorias"])

main()
