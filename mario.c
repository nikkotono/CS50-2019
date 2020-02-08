// Solution to CS50's Fall 2019 Pset1 / mario.c by Nicolas Matiz.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
   
    do{
        height = get_int("height: ");
    }
    while(height > 8 || height < 1);

    for(int i = 0; i < height; i++){
        
        for(int j = 0; j < height-1-i; j++){
            printf(" ");
        }
        for(int k = 0; k < i+1; k++){
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}
