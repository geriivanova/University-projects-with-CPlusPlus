#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	vector <string> words;
	fstream file;
	file.open("d:\\hw\\words.txt", ios::in);
	if (!file.is_open()) {
		cout << "Error to open file\n";
		return -1;
	}
	
	string word;
	while (!file.eof())
	{
		getline(file, word);
		words.push_back(word);
	}
	file.close();

	fstream file1;
	file1.open("d:\\hw\\newfile.txt", ios::out);

	sort(words.begin(), words.end());

	for(int i=0; i<words.size();i++)
	{
		file1 << words[i] << endl;
    }
	file1.close();

}


