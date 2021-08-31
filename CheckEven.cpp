//
// Accept number from user and check whether number is even or odd.
// input : 8                        7
// ouptu : true                false
 
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
		bool CheckEven()
		{
			if((iNo % 2) == 0)
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
	
	bRet = obj.CheckEven();
	if(bRet == true)
	{
		cout<<"Number is even"<<"\n";
	}
	else
	{
		cout<<"Number is odd"<<"\n";
	}
	
	return 0;
}