arr = []
def accept(n):
    global arr
    a = []
    print("Enter", n, "elements:")
    for i in range(n):
        e = int(input(f"Element {i+1}: "))
        a.append(e)
    arr = a
def insert():
    pos = int(input("Enter position to insert at (starting from 1): "))
    val = int(input("Enter element to insert: "))
    if 1 <= pos <= len(arr) + 1:
        arr.insert(pos - 1, val)
    else:
        print("Invalid position!")
def delete():
    pos = int(input("Enter position to delete (starting from 1): "))
    if 1 <= pos <= len(arr):
        t = arr.pop(pos - 1)
        print(t, "removed from array")
    else:
        print("Invalid position!")
def modify():
    pos = int(input("Enter position to modify (starting from 1): "))
    if 1 <= pos <= len(arr):
        val = int(input("Enter new value: "))
        arr[pos - 1] = val
    else:
        print("Invalid position!")
def display():
    print("The array: ")
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()
def main():
    n = int(input("Enter number of elements to accept: "))
    accept(n)
    while True:
        print("\nMenu:")
        print("1. Insert")
        print("2. Delete")
        print("3. Modify")
        print("4. Display")
        print("5. Exit")
        ch = input("Enter your choice: ")
        if ch == '1':
            insert()
        elif ch == '2':
            delete()
        elif ch == '3':
            modify()
        elif ch == '4':
            display()
        elif ch == '5':
            print("Exiting...")
            break
        else:
            print("Invalid choice!")
main()
