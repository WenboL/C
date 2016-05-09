#include <iostream>
#include <string>

using namespace std;

bool canWinNim(int n)
{
	bool result=true;
	//cout<<n<<"test"<<endl;
	if (n%4==1||n%4==2||n%4==3){
		//cout<<"win"<<endl;
		result=true;
	}
	if(n%4==0)
	{
		//cout<<"lose "<<endl;
		result=false;
	}
	return result;

}




int main()
{
	int n=44;
	bool result=canWinNim(n);
	if(result)
		cout<<"you can win"<<endl;
	else
		cout<<"cannot win"<<endl;
	/* code */
	return 0;
}