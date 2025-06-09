# this function prints a right triangle with a defined height.

def triangle_printer(height) :
    currRow = 1
    for int in range(0, height) :
        for int in range(0, currRow) :
            print("*", end="")
        currRow += 1
        print()
        

print("Enter height of triangle: ")
x = int(input())

triangle_printer(x)


