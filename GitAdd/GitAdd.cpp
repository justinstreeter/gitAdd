// GitAdd.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream> 

using namespace std;

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

	cout << "do u need a README enter Y for yes and N for no: \n" << endl;
	cin >> newReadMe;

	// display results for copy and paste
	if (newReadMe = 'Y') {
		cout << "Enter message for README: \n" << endl;
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

		cin.get();
		
		return 0;

	}
	else if (newReadMe = 'N') {


		cout << "---------------------------" << endl;

		cout << "cd " << folderAdd << endl;

		cout << "git init " << repoName << endl;

		for (int j = 0; j< numOfFiles; j++) {
			cout << "git add " << filearray[j] << "/n";
		}

		printf ("git commit -m"  "\"""%s\n"  "\"",commitmsg );

		cout << "git remote add origin " << repoloca << endl;

		cout << "git push origin master" << endl;
		
		cin.get();
		
		return 0;
	}


}
