#include <iostream>
#include <string>

using namespace std;
string getHint(string secret, string guess) 
{
	int len=secret.length();
	int a=0,b=0;
	for(int n=0;n<len;n++)
	{
		if(secret[n]==guess[n])
			{
				a++;
				secret[n]='x';
				guess[n]='y';

			}
	}
	for(int i=0;i<len;i++)
	{
		for(int r=0;r<len;r++)
		{
			if(secret[i]!='x'&&guess[r]!='y'&&secret[i]==guess[r]&&i!=r)
			{
				b++;
				secret[i]='x';
				guess[r]='y';
				}
			}
		


		}
	return to_string(a)+'A'+to_string(b)+'B';

}

int main()
{
	string secret="11";
	string guess="01";
	string hint=getHint(secret,guess);
	cout<<hint<<endl;
	return 0;
}