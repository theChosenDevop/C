#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {

    int dice_rolls, i;

    printf("Enter the number of dice rolls: ");

    scanf("%d", &dice_rolls);

    srand(time(NULL));

    for (i= 0; i < dice_rolls; i++)
    {
        int roll = (rand() % 6) + 1;

        printf("Roll %d: %d\n", i + 1, roll);
    }

    return (0);
}