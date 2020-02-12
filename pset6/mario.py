# Solution to CS50's Fall 2019 Pset6 / mario.py by Nicolas Matiz.

from cs50 import get_int

height = 0
while height > 8 or height < 1:
    height = get_int("height: ")

for i in range(height):
    for j in range(height-1-i):
        print(" ",end="")
    for k in range(i+1):
        print("#",end="")
    print("")
