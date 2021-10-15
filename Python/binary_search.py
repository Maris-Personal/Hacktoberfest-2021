print("Enter space seperated array elements")
ls = list(map(int, input().split()))
element = int(input("Enter element to be searched: "))


def binarySearch():
    start = 0
    end = len(ls) - 1
    while start <= end:
        mid = (start + end) // 2
        if ls[mid] == element:
            return "Element found at " + str(mid + 1)
        elif ls[mid] < element:
            start = mid + 1
        else:
            end = mid - 1

    return "Element not found"


if __name__ == "__main__":
    print(binarySearch())
