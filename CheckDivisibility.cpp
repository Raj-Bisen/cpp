//
// Accept number from user and check whether it is divisible by 3 & 5
// input :        15		25
// output :    true         false
#include<iostream>
#include<stdbool.h>
using namespace std;

class Numbers
{
	public :
		int iNo ; 
		
		Numbers()
		{
			iNo = 0;
		}
		void Accept()
		{
			cout<<"Enter the number"<<"\n";
			cin>>iNo;
		}
		bool CheckDivisibility()
		{
			if(((iNo % 3) == 0) && ((iNo % 5) == 0))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
};

int main()
{
	int iRet = 0;
	bool bRet = false;
	
	Numbers obj;
	
	obj.Accept();
	
	bRet = obj.CheckDivisibility();
	if(bRet == true)
	{
		cout<<"Number is divisible by 3 & 5"<<"\n";
	}
	else
	{
		cout<<"Number is not  divisible by 3 & 5"<<"\n";
	}
	
	return 0;
}