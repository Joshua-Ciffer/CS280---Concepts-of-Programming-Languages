/*
 * Recitation Assignment 1.cpp
 *
 *  Created on: Sep 14, 2020
 *      Author: Joshua Ciffer
 */
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

//int main(int argc, char *argv[]) {
//	int numLines = 0, longestLine = 0, numWords = 0, numInts = 0;
//	if (argc > 1) {		// Program is run with arguments
//		ifstream fileInput(argv[1], ios::in);
//		if (fileInput.is_open()) {
//			cout << "File has been successfully opened: " << argv[1] << endl << endl;
//			while (!fileInput.eof()) {
//				string currentLine;
//				getline(fileInput, currentLine);
//				cout << currentLine << endl;
//				numLines++;
//				if (currentLine.length() > longestLine) {
//					longestLine = currentLine.length();
//				}
//				istringstream line(currentLine);
//				string word;
//				while (line >> word) {
//					numWords++;
//					bool numeric = true;
//					for (int i = 0; i < word.length(); i++) {
//						if (isdigit(word[i]) == false) {
//							numeric = false;
//							break;
//						}
//					}
//					if (numeric) {
//						numInts++;
//					}
//				}
//			}
//			fileInput.close();
//		} else {
//			cout << "File could not be opened: " << argv[1];
//			exit(1);
//		}
//	} else {	// No arguments given
//		cout << "No input file has been provided via program argument." << endl << endl;
//		do {
//			string currentLine;
//			cout << "Type: ";
//			getline(cin, currentLine);
//			numLines++;
//			if (currentLine.length() > longestLine) {
//				longestLine = currentLine.length();
//			}
//			istringstream line(currentLine);
//			string word;
//			while (line >> word) {
//				numWords++;
//				bool numeric = true;
//				for (int i = 0; i < word.length(); i++) {
//					if (isdigit(word[i]) == false) {
//						numeric = false;
//						break;
//					}
//				}
//				if (numeric) {
//					numInts++;
//				}
//			}
//		} while (!cin.eof());
//		numLines--;
//		cout << endl;
//	}
//	cout << endl << "Number of lines: " << numLines;
//	cout << endl << "Longest line: " << longestLine;
//	cout << endl << "Number of words: " << numWords;
//	cout << endl << "Number of integers: " << numInts;
//	return 0;
//}
