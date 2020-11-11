#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void Sorting(vector<int>& vec, const int size)
{
	int count = 0;
	sort(vec.begin(), vec.end(), [&](int a, int b)
	{
		++count;
		return a < b;
	});

	cout << "The number of replacepents is "<< count << endl;
}

void InString(string& str1, string& str2)
{
	int pos = str1.find(str2);
	cout << "Second string entires in first string from the " << pos+1 <<"th element"<< endl;
}

int main()
{
	int size;

	cout << "Enter the size of the array" << endl;
	cin >> size; 

	vector<int> v1(size);
	
	cout << "Please enter elements " << endl;

	auto filling = [&v1](const int size)
	{
		for (int i = 0; i < size; i++)
		{
			cin >> v1[i];
		}
	};

	filling(size);

	for_each(v1.begin(), v1.end(), [](int elem) {cout << elem << " "; });
	cout << endl;

	Sorting(v1, size);
	for_each(v1.begin(), v1.end(), [](int elem) {cout << elem << " "; });

	string str1, str2;

	cout << "Please enter first string " << endl;
	getline(cin, str1);

	cout << "Please enter second string " << endl;
	getline(cin, str2);

	InString(str1,str2);

	return 0;
}