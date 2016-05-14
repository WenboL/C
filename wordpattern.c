#include <iostream>
#include <string>
#include <sstream>

using namespace std;
bool wordPattern(string pattern, string str) 
{
	int len_p=pattern.length();
	int len_s=str.length();
	int *chgform_p=new int[len_p];
	int *chgform_s=new int[len_p];
	for (int i = 0; i < len_p; ++i)
	{
		chgform_p[i]=0;
		chgform_s[i]=0;
	}
	for (int i = 0; i < len_p; ++i)
	{
		for (int r = 0; r < len_p ; ++r)
		{
			/* code */
		}
	}









	return true;

}

int main()
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