#include <stdio.h>
#include <stdbool.h>

/* Count who attended today */

bool SeatOccupied(int seatNumber)
{
    return true;  // Not a very good function
}

int main()
{
    int count = 0;

    int numberOfSeats = 280;

    for (int i = 0; i < numberOfSeats; i++) {
        if (SeatOccupied(i)) {
            count = count + 1;
        }
    }

    printf("Number here today = %d\n", count);
}