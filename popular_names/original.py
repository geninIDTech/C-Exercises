class Name:
    def __init__(self, name, isMale, occurrences):
        self.name = name
        self.isMale = isMale
        self.occurrences = occurrences


# Step 3: Fill out the function definitions
def topMaleYear(names):
    return []


def topFemaleYear(names):
    return []


def topAnyYear(names):
    return []


def topMaleLetter(names, letter):
    return []


def topFemaleLetter(names, letter):
    return []


def topAnyLetter(names, letter):
    return []


def probabilityMaleYear(names):
    return 0.0


def probabilityFemaleYear(names):
    return 0.0


def probabilityMaleNameYear(names, name):
    return 0.0


def probabilityFemaleNameYear(names, name):
    return 0.0


def main():
    # Step 1: Load the data in this 2D list
    # where the first indices are the year starting from 0 (1880)
    # and the second indices are the actual names
    popularNames = []

    choice = 0

    while True:
        print("1. Top 10 Male Names of a Year")
        print("2. Top 10 Female Names of a Year")
        print("3. Top 10 Names of a Year")
        print("4. Top 10 Male Names given a letter in a Given Year")
        print("5. Top 10 Female Names given a letter in a Given Year")
        print("6. Top 10 Names given a letter in a Given Year")
        print("7. Probability of a Male Baby in a Given Year")
        print("8. Probability of a Female Baby in a Given Year")
        print("9. Probability of Male Baby Name in a Given Year")
        print("10. Probability of Female Baby Name in a Given Year")
        print("11. Quit")

        choice = int(input("-> "))

        # Step 2: Programming the menu logic
        if choice == 1:
            year = int(input("Enter Year: "))
            list = topMaleYear(popularNames[year-1880])
            for i in range(10):
                print(str(i+1) + ". " + list[i].name)
        elif choice == 2:
            return 2
        elif choice == 3:
            return 3
        elif choice == 4:
            return 4
        elif choice == 5:
            return 5
        elif choice == 6:
            return 6
        elif choice == 7:
            return 7
        elif choice == 8:
            return 8
        elif choice == 9:
            return 9
        elif choice == 10:
            return 10
        elif choice == 11:
            break
        else:
            continue

        print()

if __name__ == "__main__":
    main()