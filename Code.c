#include <stdio.h>
#include <string.h>
#define ROWS 5
#define COLS 4

typedef struct {
    int booked;
    char name[50];
} Seat;

Seat seats[ROWS][COLS];


void displaySeats() {
    printf("\n--- Seat Layout ---\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (seats[i][j].booked)
                printf("[X] ");
            else
                printf("[%d%c] ", i + 1, 'A' + j);
        }
        printf("\n");
    }
}


void bookSeat() {
    int row;
    char col;
    char name[50];

    displaySeats();
    printf("\nEnter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter seat to book (e.g., 2B): ");
    scanf("%d%c", &row, &col);

    int colIndex = col - 'A';

    if (row < 1 || row > ROWS || colIndex < 0 || colIndex >= COLS) {
        printf("Invalid seat selection.\n");
        return;
    }

    if (seats[row - 1][colIndex].booked) {
        printf("Seat already booked.\n");
    } else {
        seats[row - 1][colIndex].booked = 1;
        strcpy(seats[row - 1][colIndex].name, name);
        printf("Seat %d%c successfully booked for %s!\n", row, col, name);
    }
}


void cancelBooking() {
    int row;
    char col;

    displaySeats();
    printf("\nEnter seat to cancel (e.g., 2B): ");
    scanf("%d%c", &row, &col);

    int colIndex = col - 'A';

    if (row < 1 || row > ROWS || colIndex < 0 || colIndex >= COLS) {
        printf("Invalid seat selection.\n");
        return;
    }

    if (!seats[row - 1][colIndex].booked) {
        printf("Seat is not booked.\n");
    } else {
        seats[row - 1][colIndex].booked = 0;
        printf("Booking for seat %d%c cancelled successfully.\n", row, col);
    }
}


void viewPassengerList() {
    printf("\n--- Passenger List ---\n");
    int count = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (seats[i][j].booked) {
                printf("Seat %d%c: %s\n", i + 1, 'A' + j, seats[i][j].name);
                count++;
            }
        }
    }
    if (count == 0) {
        printf("No bookings found.\n");
    }
}


int main() {
    int choice;
    do {
        printf("\n==========================================\n");
        printf("\n=========WEL COME TO NAGPUR PLATFORM=========\n");
        printf("\n==========================================\n");
        printf("\n==== Aeroplane Seat Booking ====\n");
        printf("1. View Seats\n");
        printf("2. Book Seat\n");
        printf("3. Cancel Booking\n");
        printf("4. View Passenger List\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: displaySeats(); break;
            case 2: bookSeat(); break;
            case 3: cancelBooking(); break;
            case 4: viewPassengerList(); break;
            case 5: printf("Exiting program.\n");
            case 6: printf("======= THANK YOU=========.\n");break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 5);
    return 0;
}
