///*
// * Programming Assignment 1.cpp
// *
// *  Created on: Oct 11, 2020
// *      Author: Joshua Ciffer
// */
//#include <iostream>
//#include <fstream>
//#include <sstream>
//#include <string.h>
//#include <map>
//
//using namespace std;
//
//int main(int argc, char *argv[]);
//void fileIOerror(int e);
//void unrecognizedFlagError(string flag);
//void missingEqualSignError(string flag);
//void valueNotIntegerError(string flag);
//void maxWordsExceededError();
//
//string fileName;
//int argLineLength = 20,			// -LL=t
//		argIndentLength = 5,		// -IN=n
//		argLineSpacing = 1,			// -SP=s
//		argParagraphSpacing = ++argLineSpacing,			// s+1
//		argWordCount = 50;			// -WC=m
//
//int main(int argc, char *argv[]) {
//	if (argc < 2) {
//		fileIOerror(0);
//	} else {
//		fileName = argv[1];
//		ifstream fileInput(argv[1], ios::in);
//		if (fileInput.is_open()) {
//			cout << "FILE SUCCESFULLY OPENED: " << fileName << endl;
//			for (int i = 2; i < argc; i++) {
//				if (argv[i][1] + argv[i][2] == 'L' + 'L') {
//					if (argv[i][3] != '=') {
//						missingEqualSignError(argv[i]);
//					}
//					cout << argv[i] << endl;
//					stringstream charToInt;
//					int LL;
//					for (int j = 4; j < strlen(argv[i]); j++) {
//						if (isdigit(argv[i][j])) {
//							charToInt << argv[i][j];
//						} else {
//							valueNotIntegerError(argv[i]);
//						}
//					}
//					charToInt >> LL;
//					if (LL > 0) {
//						argLineLength = LL;
//					} else {
//						valueNotIntegerError(argv[i]);
//					}
//				} else if (argv[i][1] + argv[i][2] == 'I' + 'N') {
//					if (argv[i][3] != '=') {
//						missingEqualSignError(argv[i]);
//					}
//					cout << argv[i] << endl;
//					stringstream charToInt;
//					int IN;
//					for (int j = 4; j < strlen(argv[i]); j++) {
//						if (isdigit(argv[i][j])) {
//							charToInt << argv[i][j];
//						} else {
//							valueNotIntegerError(argv[i]);
//						}
//					}
//					charToInt >> IN;
//					if (IN > 0) {
//						argIndentLength = IN;
//					} else {
//						valueNotIntegerError(argv[i]);
//					}
//				} else if (argv[i][1] + argv[i][2] == 'S' + 'P') {
//					if (argv[i][3] != '=') {
//						missingEqualSignError(argv[i]);
//					}
//					cout << argv[i] << endl;
//					stringstream charToInt;
//					int SP;
//					for (int j = 4; j < strlen(argv[i]); j++) {
//						if (isdigit(argv[i][j])) {
//							charToInt << argv[i][j];
//						} else {
//							valueNotIntegerError(argv[i]);
//						}
//					}
//					charToInt >> SP;
//					if (SP > 0) {
//						argLineSpacing = SP;
//					} else {
//						valueNotIntegerError(argv[i]);
//					}
//				} else if (argv[i][1] + argv[i][2] == 'W' + 'C') {
//					if (argv[i][3] != '=') {
//						missingEqualSignError(argv[i]);
//					}
//					cout << argv[i] << endl;
//					stringstream charToInt;
//					int WC;
//					for (int j = 4; j < strlen(argv[i]); j++) {
//						if (isdigit(argv[i][j])) {
//							charToInt << argv[i][j];
//						} else {
//							valueNotIntegerError(argv[i]);
//						}
//					}
//					charToInt >> WC;
//					if (WC > 0) {
//						argWordCount = WC;
//					} else {
//						valueNotIntegerError(argv[i]);
//					}
//				} else {
//					unrecognizedFlagError(argv[i]);
//				}
//			}
//			cout << endl;
//			int numWords = 0;
//			string processedParagraph, processedLine, currentLine, currentWord;
//			ostringstream paragraphOutput;
//			while (!fileInput.eof()) {
//				while (sizeof(processedLine) <= argLineLength) {
//
//				}
//				getline(fileInput, currentLine);
//				for (int i = 0; i < sizeof(currentLine); i++) {
//					if (isspace(currentLine[i]) == 0) {
//
//					}
//				}
//				istringstream lineParser(currentLine);
//
//				while (lineParser >> currentWord) {
//
//				}
//			}
//
//			cout << "Maximum allowed word count is " << argWordCount << ". The inputed file contains " << numWords << " words.";
//			fileInput.close();
//		} else {
//			fileIOerror(1);
//		}
//	}
//	return 0;
//}
//
//void fileIOerror(int e) {
//	if (e == 0) {
//		cout << "UNABLE TO OPEN FILE: NONE PROVIDED";
//	} else if (e == 1) {
//		cout << "UNABLE TO OPEN FILE: " << fileName;
//	}
//	exit(e);
//}
//
//void unrecognizedFlagError(string flag) {
//	cout << "UNRECOGNIZED FLAG: " << flag;
//	exit(1);
//}
//
//void missingEqualSignError(string flag) {
//	cout << "MISSING = SIGN: " << flag;
//	exit(1);
//}
//
//void valueNotIntegerError(string flag) {
//	cout << "VALUE IS NOT AN INTEGER GREATER THAN 0: " << flag;
//	exit(1);
//}
//
//void maxWordsExceededError() {
//	cout << endl << "THE INPUTED FILE HAS REACHED THE MAXIMUM ALLOWED NUMBER OF WORDS.";
//	exit(0);
//}
