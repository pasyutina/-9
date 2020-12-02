#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(0, "");
	string s;
	cout << "Введите строку на английском:\n";
	getline(cin, s);
	string findstr;
	cout << "Введите слово, которое хотите заменить:\n";
	cin >> findstr;
	string replacestr;
	cout << "Введите слово, которым хотите заменить:\n";
	cin >> replacestr;
	string::size_type index;
	while ((index = s.find(findstr)) != string::npos) 
		s.replace(index, findstr.size(), replacestr);
	cout << s << endl;
	return 0;
}