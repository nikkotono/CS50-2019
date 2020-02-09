// Solution to CS50's Fall 2019 Pset1 / cash.c by Nicolas Matiz.

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void){
    
    float change;
    do{
        change = get_float("Change owed: ");
    }
    while(change < 0);

    int cents = 0;
    cents = round(change*100);
    
    int coins = 0;
    
    // count coins
    while(cents >= 25){
        coins++;
        cents = cents - 25;
    }
    while(cents >= 10){
        coins++;
        cents = cents - 10;
    }
    while(cents >= 5){
        coins++;
        cents = cents - 5;
    }
    while(cents > 0){
        coins++;
        cents = cents - 1;
    }

    printf("%d\n",coins);
    return 0;
}
