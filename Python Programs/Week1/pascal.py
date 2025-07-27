def pascal(n):
    for i in range(n):
        v = 1
        print(" " * (n - i), end="")  
        for j in range(i + 1):
            print(f"{int(v)} ", end="")
            v = v * (i - j) / (j + 1)
        print()
n = int(input("Enter number of rows for Pascal's Triangle: "))
pascal(n)
