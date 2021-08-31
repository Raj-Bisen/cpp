//
// Accept two number from user and display its Power
// input :       2          3
// output :    8
#include<iostream>
#include<stdbool.h>
using namespace std;

class Numbers
{
	public :
		int iNo1; 
		int iNo2;
		
		Numbers()
		{
			iNo1 = 0;
			iNo2 = 0;
		}
		void Accept()
		{
			cout<<"Enter first number"<<"\n";
			cin>>iNo1;
			cout<<"Enter second number"<<"\n";
			cin>>iNo2;
		}
		int DisplayPower()
		{
			int iCnt = 0 , iMult = 1;
			for(iCnt = 1 ; iCnt <=  iNo2 ; iCnt++)
			{
				iMult = iMult * iNo1;
			}
			return iMult;
		}
		
};

int main()
{
	int iRet = 0;
	Numbers obj;
	
	obj.Accept();
	cout<<"****************************\n";
	iRet = obj.DisplayPower();
	cout<<"Power is : "<<iRet<<"\n";
	cout<<"****************************\n";
	return 0;
}