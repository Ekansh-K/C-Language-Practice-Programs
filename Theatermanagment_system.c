#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int nc = 5, nr = 5;
int arr[5][5];
int min = 0, max = 1, count = 25;

void SeatSelector() {
    int numseats, sr, sc;
    printf("Enter the number of seats you want to book: ");
    scanf("%d", &numseats);
    if (numseats > count) {//Checking if the number of seats requested is available
        printf("Sorry, the number of seats you want to book is not available\n");
        
    } 
    else if (numseats == 0) {//Checking if the number of seats requested is 0
        printf("Please select at least one seat\n");
        return NULL;
    }

    for (int i = 0; i < numseats; i++) {
        printf("Enter the row and column number of seat %d: ", i + 1);
        scanf("%d %d", &sr, &sc);
        if (sr < 1 || sr > nr || sc < 1 || sc > nc) {
            printf("Invalid seat selection. Please select a seat within the range (1-%d, 1-%d)\n", nr, nc);//Checking For Invalid Seat Selection 
            i--; 
            continue;
        }
        if (arr[sr - 1][sc - 1] == 1) {
            printf("Sorry, the seat is already booked\n");
            i--; 
            continue;
        }
        arr[sr - 1][sc - 1] = 1;
    }

    count -= numseats; //decrementing the count of available seats
    printf("Seats successfully booked!\n");
}
void SeatAllotmentDisplay() {//Seat Allotment Display as the the arrays stores 1 for booked seats and 0 for available seats
    for (int k = 0; k < nc; k++) {
        printf("Seats in %d row:\n", k+1);
        for (int j = 0; j < nr; j++) {
            if (arr[k][j] == 1) {
                printf("B\t");
            } else {
                printf("A\t");
            }
        }
        printf("\n");
    }
    printf("A - Available, B - Booked\n");
}
int rand_prob(int percent, int min, int max) {
    int r = rand() % 100;//probabilistic function to generate random numbers
    if (r < percent) {
        return max;
    } else {
        return min;
    }
}

int main(){
    int choice;
    srand(time(NULL)); //to Seed the rand() num generator so that the random numbers generated are different each time

    for (int i = 0; i < nc; i++) {
        for (int j = 0; j < nr; j++) {
            arr[i][j] = rand_prob(30, min, max);
        }
    }
    printf("Welcome to the Theater Management System\n");
    printf("Enter 1 for seat booking and 2 for seat allotment display: ");
    scanf("%d", &choice);
    if (choice == 1){
        SeatSelector();
    } 
    else if (choice == 2){
        SeatAllotmentDisplay();
    } 
    else{
        printf("Invalid choice\n");
    }
    return 0;
}