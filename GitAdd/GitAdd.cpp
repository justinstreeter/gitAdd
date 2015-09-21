// GitAdd.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream> 
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <Windows.h> // use < > for all system and library headers
#include <winuser.h>
#include <cmath>
#include <complex>
#include <iomanip>
using namespace std;

void toClipboard(HWND hwnd, const std::string &s);

int main()
{
	//init vars
	string folderAdd;
	string repoName;
	char commitmsg[256];
	string repoloca;
	string readMe;
	char newReadMe;
	int numOfFiles;
	vector<string> filearray;
	ofstream myfile("C:\\Users\\Justin\\Desktop\\example.txt");
	string AAA();

	cout << "Enter commit message: \n";
	//cin >> commitmsg;	
	cin.get(commitmsg, 256);
	cout << endl;


	// ask for folder location

	cout << "were would u like the repository located:  \n" << endl;
	cin >> folderAdd;
	// collect folder location

	//getline(cin, folderAdd);


	//cout << endl;

	// ask for name of repository

	cout << "what is the name of the repository: \n" << endl;
	cin >> repoName;
	// get name of repository

	// getline(cin, repoName);

	// cout << endl;



	cout << "enter number of files to commit: \n" << endl;

	cin >> numOfFiles;


	for (int i = 0; i < numOfFiles; i++) {
		string filesAdd;
		cout << "Enter name of file to commit: \n" << endl;
		cin >> filesAdd;
		filearray.push_back(filesAdd);
	}


	
	//cout << "Enter commit message: \n";
	//cin >> commitmsg;	
	//cin.get(commitmsg, 256);
	//cout << endl;

	cout << "Create repository on GitHub! \n" << endl;

	cout << "Copy and paste git link here: \n" << endl;
	cin >> repoloca;
	//getline(cin, repoloca);
	//cout << endl;

	
		cout << "Enter message for README: \n" << endl;
		cin >> readMe;
		//getline(cin, readMe);
		//cout << endl;

		cout << "---------------------------" << endl;

		cout << "cd " << folderAdd << endl;

		cout << "git init " << repoName << endl;

		cout << "echo \"" << readMe << "\" >> README.md" << endl;
		int j;
		for (j = 0; j< numOfFiles; j++) {
			cout << "git add " << filearray[j] << endl;
		}

		cout << "git commit -m" << "\"" << commitmsg << "\"" << endl;

		cout << "git remote add origin " << repoloca << endl;

		cout << "git push origin master" << endl;


		if (myfile.is_open()) {
			
			myfile << "cd " << folderAdd << "\n";
			myfile << "git init " << repoName << "\n";
			myfile << "echo \"" << readMe << "\" >> README.md \n";
			int j;
			for (j = 0; j< numOfFiles; j++) {
				myfile << "git add " << filearray[j]<<"\n";
			}

			myfile << "git commit -m" << "\"" << commitmsg << "\""<<"\n";
			myfile << "git remote add origin " << repoloca << "\n";
			myfile << "git push origin master";


			myfile.close();
		}
		else {

			cout << "unable to open file;";




			return 0;

		}
		
 
		
		 cin >> AAA;
		cout << endl;
		cout << endl;
		cout << "This has been copied to the clipboard: ";
		cout << AAA << endl;
		// 1. strlen takes a const char*, so have to call the strings c_str() method
		// (but it would be better to use len = AAA.length() instead)
		size_t len = strlen(AAA.c_str());
		cout << len << " char(s)" << endl;
		// get desktop windows and the call toClipboard
		HWND hwnd = GetDesktopWindow();
		toClipboard(hwnd, AAA);
		cin.clear();
		cin.ignore(255, '\n');
		cin.get();

		return 0;
}

// 2. declare functions at file scope 
void toClipboard(HWND hwnd, const std::string &s) {
	OpenClipboard(hwnd);
	EmptyClipboard();
	HGLOBAL hg = GlobalAlloc(GMEM_MOVEABLE, s.size() + 1);
	if (!hg) {
		CloseClipboard();
		return;
	}
	memcpy(GlobalLock(hg), s.c_str(), s.size() + 1);
	GlobalUnlock(hg);
	SetClipboardData(CF_TEXT, hg);
	CloseClipboard();
	GlobalFree(hg);
}
