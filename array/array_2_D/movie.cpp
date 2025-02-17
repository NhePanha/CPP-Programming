#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Movie {
    int id;
    string title;
    string release;
    string format;
    float price;
    string time;
    string category;
};

const int ROWS = 10;
const int COLUMNS = 10;
char seats[ROWS][COLUMNS];

struct Ticket {
    int movieId;
    string movieTitle;
    char row;
    int seat;
    int hall;
    float price;
    string type; // VIP or Normal
};

vector<Movie> movies;
vector<Ticket> tickets;

void initializeSeats() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            seats[i][j] = 'O'; // O for open seat
        }
    }
}

void displaySeats() {
    cout << "\nSeat Availability:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}

void insertMovie() {
    Movie movie;
    cout << "Enter movie ID: ";cin >> movie.id;
    cout << "Enter title: ";cin.ignore();getline(cin, movie.title);
    cout << "Enter release date: ";getline(cin, movie.release);
    cout << "Enter format (2D/3D): ";getline(cin, movie.format);
    cout << "Enter price: ";cin >> movie.price;
    cout << "Enter time: ";cin.ignore();getline(cin, movie.time);
    cout << "Enter category: ";getline(cin, movie.category);
    movies.push_back(movie);cout << "Movie added successfully!\n";
}

void checkMovies() {
    cout << "Available Movies:\n";
    for (const auto &movie : movies) {
        cout << "ID: " << movie.id << ", Title: " << movie.title << "\n";
    }
}
void bookTicket() {
    int movieId;
    cout << "Enter movie ID to book: ";
    cin >> movieId;
    
    for (const auto &movie : movies) {
        if (movie.id == movieId) {
            Ticket ticket;
            ticket.movieId = movie.id;
            ticket.movieTitle = movie.title;
            cout << "Enter row (0-9): ";int row;cin >> row;
            cout << "Enter seat number (0-9): ";int column;cin >> column;
            if (row >= 0 && row < ROWS && column >= 0 && column < COLUMNS && seats[row][column] == 'O') {
                seats[row][column] = 'X'; // X for booked seat
                ticket.row = 'A' + row;
                ticket.seat = column + 1;
                cout << "Enter hall number: ";
                cin >> ticket.hall;
                cout << "Enter seat type (VIP/Normal): ";
                cin >> ticket.type;
                ticket.price = movie.price;
                tickets.push_back(ticket);
                cout << "Ticket booked successfully!\n";
            } else {
                cout << "Seat not available!\n";
            }
            return;
        }
    }
    cout << "Movie ID not found.\n";
}

void checkTickets() {
    cout << "Booked Tickets:\n";
    for (const auto &ticket : tickets) {
        cout << "Movie: " << ticket.movieTitle << ", Row: " << ticket.row << ", Seat: " << ticket.seat << ", Hall: " << ticket.hall << ", Type: " << ticket.type << "\n";
    }
}

void checkSeats() {
    displaySeats();
}

int main() {
    initializeSeats();
    int choice;
    do {
        cout << "\n1. Insert Movie\n2. Check & Book Movie\n3. Check Ticket\n4. Check Seat\n5. Exit\nEnter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                insertMovie();
                break;
            case 2:
                checkMovies();
                bookTicket();
                break;
            case 3:
                checkTickets();
                break;
            case 4:
                checkSeats();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 5);
    return 0;
}