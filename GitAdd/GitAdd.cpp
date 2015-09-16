// GitAdd.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	//init vars
	string folderAdd;
	string repoName;
	string commitmsg;
	string repoloca;
	string readMe;
	char newReadMe;
	int numOfFiles;
	vector<string> filearray;


	// ask for folder location

	cout << "were would u like the repository located:  " << endl;
	cin >> folderAdd;
	// collect folder location

	//getline(cin, folderAdd);


	//cout << endl;

	// ask for name of repository

	cout << "what is the name of the repository" << endl;
	cin >> repoName;
	// get name of repository

	// getline(cin, repoName);

	// cout << endl;



	cout << "enter number of files to commit" << endl;

	cin >> numOfFiles;


	for (int i = 0; i < numOfFiles; i++) {
		string filesAdd;
		cout << "Enter name of file to commit" << endl;
		cin >> filesAdd;
		filearray.push_back(filesAdd);
	}


	
	cout << "Enter commit message" << endl;
	cin >> commitmsg;
	//getline(cin, commitmsg);
	//cout << endl;

	cout << "Create repository on GitHub" << endl;

	cout << "Copy and paste git link here: " << endl;
	cin >> repoloca;
	//getline(cin, repoloca);
	//cout << endl;

	cout << "do u need a README enter Y for yes and N for no" << endl;
	cin >> newReadMe;

	// display results for copy and paste
	if (newReadMe = 'Y') {
		cout << "Enter message for README" << endl;
		cin >> readMe;
		//getline(cin, readMe);
		//cout << endl;

		cout << "---------------------------" << endl;

		cout << "cd " << folderAdd << endl;

		cout << "git init " << repoName << endl;

		cout << "echo \"" << readMe << "\" >> README.md" << endl;

		for (int j = 0; j< numOfFiles; j++) {
			cout << "git add " << filearray[j] << endl;
		}

		cout << "git commit -m" << "\"" << commitmsg << "\"" << endl;

		cout << "git remote add origin " << repoloca << endl;

		cout << "git push origin master" << endl;


	}
	else if (newReadMe = 'N') {


		cout << "---------------------------" << endl;

		cout << "cd " << folderAdd << endl;

		cout << "git init " << repoName << endl;

		for (int j = 0; j< numOfFiles; j++) {
			cout << "git add " << filearray[j] << "/n";
		}

		cout << "git commit -m" << "\"" << commitmsg << "\"" << endl;

		cout << "git remote add origin " << repoloca << endl;

		cout << "git push origin master" << endl;
	}


	return 0;
}
