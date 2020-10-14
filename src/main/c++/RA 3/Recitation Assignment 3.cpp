/*
 * Recitation Assignment 3.cpp
 *
 *  Created on: Sep 29, 2020
 *      Author: Joshua Ciffer
 */
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

using namespace std;

//int main(int argc, char *argv[]) {
//	if (argc > 1) {
//		ifstream fileInput(argv[1], ios::in);
//		if (fileInput.is_open()) {
//			cout << "File has been successfully opened: " << argv[1] << endl << endl;
//			map<string, int> wordCount;
//			while (!fileInput.eof()) {
//				string currentLine, word;
//				getline(fileInput, currentLine);
//				istringstream wordParser(currentLine);
//				while (wordParser >> word) {
//					if (wordCount.find(word) == wordCount.end()) {
//						wordCount[word] = 1;
//					} else {
//						wordCount[word]++;
//					}
//				}
//			}
//			string mostFrequentWord = wordCount.begin()->first;
//			int numMostFrequentWord = wordCount.begin()->second;
//			map<string, int>::iterator it;
//			for (it = wordCount.begin(); it != wordCount.end(); it++) {
//				if (it->second > numMostFrequentWord) {
//					mostFrequentWord = it->first;
//					numMostFrequentWord = it->second;
//				}
//			}
//			cout << "Word with highest number of occurrences:" << endl;
//			cout << mostFrequentWord << " - " << numMostFrequentWord << endl << endl;
//			cout << "List of words in file and number of occurrences:" << endl;
//			for (it = wordCount.begin(); it != wordCount.end(); it++) {
//				cout << it->first << " - " << it->second << endl;
//			}
//			fileInput.close();
//			return 0;
//		} else {
//			cout << "File could not be opened: " << argv[1];
//			fileInput.close();
//			return 1;
//		}
//	} else {
//		cout << "No file provided via program argument.";
//		return 1;
//	}
//}
