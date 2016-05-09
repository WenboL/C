#include <iostream>

#include <math.h>
using namespace std;
bool isPowerOfFour(int num)
{
	if(num<0)
		return false;
	else
	{
		if(num & (num-1))
			return false;
		return num & 0x55555555;
	}


}

int main()
{
	int num=16;
	bool result=true;
	result=isPowerOfFour(num);
	if(result==true)
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	return 0;
}