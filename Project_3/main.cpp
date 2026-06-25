/*
 * Name: Amanda Peplinski
 * Course: CS 210 Programming Languages
 * Project Three - Corner Grocer
 * June 21, 2026
 *
 * Description:
 * This program allows the user to search for grocery item frequencies,
 * display all item frequencies, display a histogram, and exit the program.
 */

#include <iostream>
#include <limits>
#include <cstdlib>
#include "CornerGrocer.h"

using namespace std;

/*
 * Clears the console screen.
 */
void ClearScreen() {
    system("cls");
}

/*
 * Pauses the program so the user can read the output.
 */
void PauseScreen() {
    cout << endl;
    cout << "Press Enter to continue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

/*
 * Displays the program menu.
 */
void DisplayMenu() {
    cout << "==================================" << endl;
    cout << "         CORNER GROCER            " << endl;
    cout << "==================================" << endl;
    cout << "1. Search for an item" << endl;
    cout << "2. Display all item frequencies" << endl;
    cout << "3. Display histogram" << endl;
    cout << "4. Exit program" << endl;
    cout << "==================================" << endl;
    cout << "Enter your choice: ";
}

int main() {
    CornerGrocer grocery;
    int choice = 0;
    string item;
    int frequency;

    // Load grocery data from the input file
    grocery.LoadFile("CS210_Project_Three_Input_File.txt");

    // Create the backup file
    grocery.CreateBackupFile();

    while (choice != 4) {
        ClearScreen();
        DisplayMenu();

        cin >> choice;

        // Input validation
        while (cin.fail() || choice < 1 || choice > 4) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << endl;
            cout << "Invalid selection." << endl;
            cout << "Please enter a number from 1-4: ";
            cin >> choice;
        }

        switch (choice) {

        case 1:
            ClearScreen();

            cout << "Enter item to search for: ";
            cin >> item;

            frequency = grocery.SearchItem(item);

            cout << endl;
            cout << item
                 << " purchased "
                 << frequency
                 << " time(s)." << endl;

            PauseScreen();
            break;

        case 2:
            ClearScreen();

            cout << "All Grocery Item Frequencies" << endl;
            cout << "----------------------------" << endl;

            grocery.PrintAllItems();

            PauseScreen();
            break;

        case 3:
            ClearScreen();

            cout << "Purchase Histogram" << endl;
            cout << "------------------" << endl;

            grocery.PrintHistogram();

            PauseScreen();
            break;

        case 4:
            ClearScreen();

            cout << "Thank you for using Corner Grocer!" << endl;
            cout << "Exiting program..." << endl;

            break;
        }
    }

    return 0;
}