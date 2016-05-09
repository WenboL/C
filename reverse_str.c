#include <iostream>
#include <string>
using namespace std;
string reverseString(string s)
{
	int len=0;
	len=s.length();
	string temp;
	len--;
	for (int i=len;i>=0;i--)
	{
		temp += s[i];
	}
	return temp;
}

int main()
{
	string s;
	string t;
	cout << "input a string:\n ";
	cin>>s;
	cout<<s<<endl;
	t=reverseString(s);
	cout<<t<<endl;
	return 0;
}