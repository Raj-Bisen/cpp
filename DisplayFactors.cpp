//
// Accept  number from user and Display its factors.
// input :       12       
// output :    1      2       3        4        6
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
		void Factors()
		{
			int iCnt = 0 ;
			for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
			{
				if((iNo % iCnt) == 0)
				{
					cout<<iCnt<<"\n";
				}
			}
		}
		
};

int main()
{
	Numbers obj;
	
	obj.Accept();
	cout<<"****************************\n";
	obj.Factors();
	cout<<"****************************\n";
	return 0;
}