#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	int projectsCount;
	int hours;

	cin >> name;
	cin >> projectsCount;

	hours = projectsCount * 3;
	cout << "The architect " << name << " will need " << hours << " hours to complete " << projectsCount << " project/s." << endl;
	return 0;
}

