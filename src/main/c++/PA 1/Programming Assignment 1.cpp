/*
 * Programming Assignment 1.cpp
 *
 *  Created on: Oct 11, 2020
 *      Author: Joshua Ciffer
 */
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

using namespace std;

void fileIOerror(int e);
void unrecognizedFlagError(string *flag);
void missingEqualSignError(string *flag);
void maxWordsExceededError();

string &fileName;
int argLineLength, argIndentLength, argLineSpacing, argParagraphSpacing, argWordCount;

int main(int argc, char *argv[]) {

	if (argc < 2) {
		fileIOerror(0);
	} else {
		fileName = *argv[1];
	}

}

void fileIOerror(int e) {
	if (e == 0) {
		cout << endl << "UNABLE TO OPEN FILE: NONE PROVIDED";
	} else if (e == 1) {
		cout << endl << "UNABLE TO OPEN FILE: " << fileName;
	}
	exit(e);
}

void unrecognizedFlagError(string *flag) {
	cout << endl << "UNRECOGNIZED FLAG: " << *flag;
	exit(1);
}

void missingEqualSignError(string *flag) {
	cout << endl << "MISSING = SIGN: " << *flag;
	exit(1);
}

void maxWordsExceededError() {
	cout << endl << "THE INPUTED FILE HAS REACHED THE MAXIMUM ALLOWED NUMBER OF WORDS.";
	exit(0);
}
