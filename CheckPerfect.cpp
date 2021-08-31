///////////////////////////////////////////////////////////////////////////////////////
// Accept  number from user and check whether it is perfect number or not.
// input :         6,28               4
// output :      true            false
///////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<stdbool.h>
using namespace std;

class Numbers
{
	public :
		int iNo; 
		
		Numbers()
		{
			iNo = 0;
		}
		void Accept()
		{
			cout<<"Enter the number"<<"\n";
			cin>>iNo;
		}
		bool CheckPerfect()
		{
			int iCnt = 0 , iSum = 0;
			for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
			{
				if((iNo % iCnt) == 0)
				{
					iSum = iSum + iCnt;
				}
			}
			if(iSum == iNo)
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
	bool bRet = false;
	Numbers obj;
	
	obj.Accept();
	cout<<"****************************\n";
	bRet = obj.CheckPerfect();
	if(bRet == true)
	{
		cout<<"It is Perfect number"<<"\n";
	}
	else
	{
		cout<<"It is not  Perfect number"<<"\n";
	}
	cout<<"****************************\n";
	return 0;
}