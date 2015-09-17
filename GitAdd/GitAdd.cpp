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
	ofstream myfile("C:\\Users\\Justin\\Desktop\\example.txt");


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
			//myfile << "git add " << filearray[j] << "\n";
			myfile << "git commit -m" << "\"" << commitmsg << "\"";
			myfile << "git remote add origin " << repoloca << "\n";
			myfile << "git push origin master";


			myfile.close();
		}
		else {

			cout << "unable to open file;";




			return 0;

		}
	

}
