#include <iostream>
#include <string>

using namespace std;
bool wordPattern(string pattern, string str) 
{
	int len_p=pattern.length();
	int len_s=str.length();
	int p=0;
	for (int i = 0; i < len; ++i)
		for (int r = 0; r < len; ++r)
		{
			/* code */
		}

}

int int main()
{
	/* code */
	string pattern="aabb";
	string str="dog dog cat cat";
	bool result=wordPattern(pattern,str);
	if(result)
		cout<<"match"<<endl;
	else
		cout<<"not match"<<endl;

	return 0;
}