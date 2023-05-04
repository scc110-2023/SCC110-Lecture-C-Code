#include <stdio.h>

int SeatOccupied(int whichSeat)
{
    return 1;
}

int main()
{
    int numPeople = 0;

    int seat = 1;

    while (seat <= 200) {
        if (SeatOccupied(seat)) {
            numPeople = numPeople + 1; // numPeople++
        }
        
        seat = seat + 1;
    }

    printf("Number of people here = %d\n", numPeople);
}