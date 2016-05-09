#include <iostream>
#include <math.h>

using namespace std;

bool isPowerOfThree(int n)     
{
	 int maxPowerOfThree = (int)pow(3, (int)(log(INT_MAX)/log(3)));
    return n>0 && maxPowerOfThree%n==0;

}

int main()
{
	int n=33;
	if(isPowerOfThree(n))
		cout<<"T"<<endl;
	else
		cout<<"F"<<endl;
	return 0;
}