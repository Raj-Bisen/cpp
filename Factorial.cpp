//
// Accept  number from user and return its factorial.
// input :       5        
// output :    5*4*3*2*1 =  120
#include<iostream>
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
		int Factorial()
		{
			int iCnt = 0 , iMult = 1;
			for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
			{
				iMult = iMult * iCnt;
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
	iRet = obj.Factorial();
	cout<<"Factorial is : "<<iRet<<"\n";
	cout<<"****************************\n";
	return 0;
}