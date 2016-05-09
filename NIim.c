#include <iostream>
#include <string>

using namespace std;

bool canWinNim(int n)
{
	// //cout<<n<<"test"<<endl;
	// if (n==1||n==2||n==3||n==5){
	// 	//cout<<"win"<<endl;
	// 	return true;
	// }
	// if(n==4||n==0)
	// {
	// 	//cout<<"lose "<<endl;
	// 	return false;
	// }
	// return (canWinNim(n-2)||canWinNim(n-3)||canWinNim(n-4));
	

}




int main()
{
	int n=134;
	bool result=canWinNim(n);
	if(result)
		cout<<"you can win"<<endl;
	else
		cout<<"cannot win"<<endl;
	/* code */
	return 0;
}