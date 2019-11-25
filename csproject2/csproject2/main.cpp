
#include "Binary_Search_Tree.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <map>
using namespace std;



int main() {

	
vector<string> expression;
	vector<string> BinarySearchData;
	ifstream file;
	file.open("morse.txt");
	if (!file) {
		cout << "unable to open file";
	}
	string line;
	string first;
	while (!file.eof()) {
		getline(file, line);	//Read file line by line
		first = line[0];
		line.replace(0, 1, "");
		expression.push_back(first);	//Add letter to vector
		BinarySearchData.push_back(line);	//Add morse code to vector
	}

	file.close();

	

map<string, string> MyMap;
 for (int i = 0; i < expression.size(); i++) {
  string a = expression.at(i);
  string b = BinarySearchData.at(i);
  MyMap.insert(pair<string, string>(a, b));
 }
 
 cout << "Encode 'happy' " << MyMap["h"] << MyMap["a"] << MyMap["p"] << MyMap["p"] << MyMap["y"];
cout << "Decode '.... ..' ";
 for (auto it = MyMap.begin(); it != MyMap.end(); ++it)
  if (it->second == "....")
   cout << it->first;
 for (auto it = MyMap.begin(); it != MyMap.end(); ++it)
  if (it->second == "..")
   cout << it->first;





}
