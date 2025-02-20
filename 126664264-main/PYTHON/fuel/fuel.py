
while True:
    try:
        x, y = input("Fraction: ").split("/")
        z = (int(x) / int(y)) * 100
        if z > 100:
            raise ValueError("no bueno friendo")
    except (ValueError, ZeroDivisionError):
        print("no bueno friendo")
    else:
        break

if z >= 99:
    print("F")
elif z <= 1:
    print("E")
else:
    print(round(z), "%", sep = "")

