//
// Accept two numbers from user and perform arithmatic operations.
// Addition , Subtraction , Multiplication , Division

#include<iostream>
using namespace std;

class Arithmetic
{
	public :
		int iNo1 ; 
		int iNo2 ;
		
		Arithmetic()
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
		int Addition()
		{
			int iSum = 0;
			iSum = iNo1 + iNo2;
			return iSum;
		}
		int Subtraction()
		{
			int iDiff = 0;
			iDiff = iNo1 - iNo2;
			
			if(iDiff < 0)
			{
				iDiff = -iDiff;
			}
			return iDiff;
			
		}
		int Multiplication()
		{
			int iMult = 0;
			iMult = iNo1 * iNo2;
			return iMult;
		}
		int Division()
		{
			if(iNo1 < iNo2)
			{
				return -1;
			}
			int iDiv = 0;
			iDiv = iNo1 / iNo2;
			return iDiv;
		}
			
};

int main()
{
	int iRet = 0;
	
	Arithmetic obj;
	
	obj.Accept();
	
	iRet = obj.Addition();
	cout<<"Addition is : "<<iRet<<"\n";
	
	iRet = obj.Subtraction();
	cout<<"Subtraction is : "<<iRet<<"\n";
	
	iRet = obj.Multiplication();
	cout<<"Multiplication is : "<<iRet<<"\n";
	
	iRet = obj.Division();
	cout<<"Division is : "<<iRet<<"\n";
	
	return 0;
}