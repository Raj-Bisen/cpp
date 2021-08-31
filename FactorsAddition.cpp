//
// Accept  number from user and return additin of  its factors.
// input :       12       
// output :    1 +2 +3 + 4 + 6    = 16
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
		int FactorsAdd()
		{
			int iCnt = 0 , iSum = 0;
			for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
			{
				if((iNo % iCnt) == 0)
				{
					iSum = iSum + iCnt;
				}
			}
			return iSum;
		}
		
};

int main()
{
	int iRet = 0;
	Numbers obj;
	
	obj.Accept();
	cout<<"****************************\n";
	iRet = obj.FactorsAdd();
	cout<<"Addition of factors is : "<<iRet<<"\n";
	cout<<"****************************\n";
	return 0;
}