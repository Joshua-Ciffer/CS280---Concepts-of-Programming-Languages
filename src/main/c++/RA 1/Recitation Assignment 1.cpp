/*
 * Recitation Assignment 1.cpp
 *
 *  Created on: Sep 14, 2020
 *      Author: Joshua Ciffer
 */
#include <iostream>
#include <fstream>

using namespace std;

int numLines;
int longestLine;
int numWords;
int numInts;

int main(int argc, char *argv[]) {
	if ((sizeof(*argv) / sizeof(*argv[0])) > 1) {	// Program is run with arguments
		cout << argv[1] << endl << endl;
		ifstream fileInput(argv[1], ios::in);
		if (fileInput.is_open()) {
			cout << "File open";
			while (!fileInput.eof()) {

			}
		} else {
			cout << "File could not be opened: " << argv[1];
			exit(1);
		}
	} else {	// No arguments given
		cout << "No file";
		istream *consoleInput = &cin;

	}

}
