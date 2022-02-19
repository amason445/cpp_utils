#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

//adopted from
//https://java2blog.com/read-csv-file-in-cpp/#:~:text=To%20read%20a%20CSV%20file%2C,variable%20as%20its%20second%20argument.

int main() {

vector<vector<string>> content;
vector<string> row;
string line, word;

string fname;
cout << "Enter the file name: ";
cin >> fname;

fstream file (fname, ios::in);
if(file.is_open())
 {
  while(getline(file,line)) 
  {  

   row.clear();

   stringstream str(line);

   while(getline(str, word, ',')) row.push_back(word);

   content.push_back(row);
  } 
 }
 
 else cout << "Could not open the file";

 for(int i = 0; i<content.size(); i++) {
  for(int j = 0; j<content[i].size(); j++) {
   cout << content[i][j] << " ";
  }
  cout << "\n";

 }
 
 return 0;

}




