// Solution to CS50's Fall 2019 Pset6 / cash.py by Nicolas Matiz.

from cs50 import get_float

change = -1.0
while(change < 0):
    change = get_float("Change owed: ")

cents = 0
cents = round(change*100)

coins = 0

while(cents >= 25):
    coins += 1
    cents -= 25

while(cents >= 10):
    coins += 1
    cents -= 10

while(cents >= 5):
    coins += 1
    cents -= 5

while(cents > 0):
    coins += 1
    cents -= 1

print(coins)
