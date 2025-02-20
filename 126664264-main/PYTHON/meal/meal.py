def main():
    time = input("What time is it? ").strip()

    time = convert(time)

    if time >= 7 and time <= 8:
        print("breakfast time")
    elif time >= 12 and time <= 13:
        print("lunch time")
    elif time >= 18 and time <= 19:
        print("dinner time")

def convert(time):
    hr, min = time.split(":")
    hr = float(hr)
    min = float(min)
    return hr + ((min * 10 / 60)/10)

if __name__ == "__main__":
    main()
