/*
 * Name: Amanda Peplinski
 * Course: CS 210 Programming Languages
 * Project Three - Corner Grocer
 *
 * This class stores grocery item frequencies and provides
 * functions to search and display the data.
 */

#ifndef CORNERGROCER_H
#define CORNERGROCER_H

#include <string>
#include <map>

using namespace std;

class CornerGrocer {
private:
    // Stores grocery item names and their frequencies
    map<string, int> groceryItems;

public:
    // Default constructor
    CornerGrocer();

    // Reads data from the input file
    void LoadFile(string fileName);

    // Creates frequency.dat backup file
    void CreateBackupFile();

    // Searches for an item and returns its frequency
    int SearchItem(string item);

    // Prints all items and frequencies
    void PrintAllItems();

    // Prints histogram of all items
    void PrintHistogram();

    // Converts a string to lowercase
    string ToLower(string text);
};

#endif