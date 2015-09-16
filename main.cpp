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
    char submit;
     int numOfFiles;


    // ask if new repository

    cout << "if this is a new repository enter Y" << endl;

    cin >> submit;

    // ask for folder location

    cout << "were would u like the repository located:  ";

    // collect folder location

    getline(cin, folderAdd);


    cout << endl;

    // ask for name of repository

    cout << "what is the name of the repository";

    // get name of repository

    getline(cin, repoName);

    cout << endl;



   cout << "enter number of files to commit" <<endl;

   cin >> numOfFiles;
   string filearray[numOfFiles];

   for (int i = 0; i < numOfFiles; i++){
    string filesAdd;
    cout << "Enter name of file to commit" << endl;
    cin >> filesAdd;

   }

   cout << "enter something for README";
   getline(cin, readMe);
   cout << endl;

  cout << "Enter commit message";
  getline(cin, commitmsg);
  cout << endl;

  cout << "Create repository on GitHub" << endl;

  cout << "Copy and paste git link here: ";
  getline(cin, repoloca);
  cout << endl;

  cout << "do u need a README enter Y for yes and N for no" << endl;
  cin >> newReadMe;

  // display results for copy and paste
  if (newReadMe = 'Y'){
        cout << "Enter message for README";
        getline(cin, readMe);
        cout << endl;

        cout << "---------------------------" <<endl;

         cout << "cd " << folderAdd << endl;

         cout << "git init " << repoName << endl;

         cout << "echo \"" << readMe << "\" >> README.md" <<endl;

         for( int j=0; j< numOfFiles; j++) {
        cout << "git add " << filearray[j] << endl;
         }

         cout << "git commit -m" << "\"" << commitmsg << "\"" << endl;

         cout << "git remote add origin " << repoloca << endl;

         cout << "git push origin master" << endl;


        }else if (newReadMe = 'N'){


        cout << "---------------------------" <<endl;

         cout << "cd " << folderAdd << endl;

         cout << "git init " << repoName << endl;

         for( int j=0; j< numOfFiles; j++) {
        cout << "git add " << filearray[j] << "/n";
         }

         cout << "git commit -m" << "\"" << commitmsg << "\"" << endl;

         cout << "git remote add origin " << repoloca << endl;

         cout << "git push origin master" << endl;
        }


    return 0;
}
