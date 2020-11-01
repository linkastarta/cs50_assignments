#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do 
        //Get height from user
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    
    for (int i = height-1; i >= 0; i--)
    {
        //Counts how many spaces to print for each line
        for (int j = i; j > 0; j--)
        {
            printf(" ");
        }
        //Prints hashes for each line of the first pyramid
        for (int k = 1; k <= height - i; k++)
        {
            printf("#");
        }
        //The gap between the two pyramids
        printf("  ");
        //Prints hashes for the second pyramid
        for (int k = 1; k <= height - i; k++)
        {
            printf("#");
        }
    
        printf("\n");
    }
}