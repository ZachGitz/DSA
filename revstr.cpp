#include <iostream>
using namespace std;

string revStr(string str)
{
	int size = str.size();
	string a;
	for (int i = size - 1;i >= 0;i--)
	{
		a += str.at(i);
	}
	return a;
}
int main() {
	string b = "hellow World";
	string c = revStr(b);
	cout << c << endl;

	return 0;
}
