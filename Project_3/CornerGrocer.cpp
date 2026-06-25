/*
 * Name: Amanda Peplinski
 * Course: CS 210 Programming Languages
 * Project Three - Corner Grocer
 * June 21, 2026
 *
 * This file contains the implementation of the
 * CornerGrocer class.
 */

#include "CornerGrocer.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cctype>

using namespace std;

// Default constructor
CornerGrocer::CornerGrocer() {
}

// Converts an entire string to lowercase
string CornerGrocer::ToLower(string text) {
    for (size_t i = 0; i < text.length(); ++i) {
        text[i] = static_cast<char>(tolower(text[i]));
    }

    return text;
}

// Reads the input file and stores frequencies
void CornerGrocer::LoadFile(string fileName) {
    ifstream inFS;
    string item;

    inFS.open(fileName);

    if (!inFS.is_open()) {
        cout << "Error opening file." << endl;
        return;
    }

    while (inFS >> item) {
        item = ToLower(item);
        groceryItems[item]++;
    }

    inFS.close();
}

// Creates frequency.dat backup file
void CornerGrocer::CreateBackupFile() {
    ofstream outFS;

    outFS.open("frequency.dat");

    for (auto item : groceryItems) {
        outFS << item.first << " "
              << item.second << endl;
    }

    outFS.close();
}

// Searches for an item frequency
int CornerGrocer::SearchItem(string item) {
    item = ToLower(item);

    if (groceryItems.find(item) != groceryItems.end()) {
        return groceryItems[item];
    }

    return 0;
}

// Prints all grocery items and frequencies
void CornerGrocer::PrintAllItems() {
    for (auto item : groceryItems) {
        cout << left
             << setw(15)
             << item.first
             << item.second
             << endl;
    }
}

// Prints histogram
void CornerGrocer::PrintHistogram() {
    for (auto item : groceryItems) {
        cout << left
             << setw(15)
             << item.first;

        for (int i = 0; i < item.second; i++) {
            cout << "*";
        }

        cout << endl;
    }
}