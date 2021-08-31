//
// Accept number from user and display its table on screen.
// input :       5
// output :    5	10	15	20	25	30	35	40	45	50
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
		void DisplayTable()
		{
			int iCnt = 0;
			for(iCnt = 1 ; iCnt <= 10 ; iCnt++)
			{
				cout<<iNo * iCnt<<"\n";
			}
		}
		
};

int main()
{
	Numbers obj;
	
	obj.Accept();
	cout<<"****************************\n";
	obj.DisplayTable();
	cout<<"****************************\n";
	return 0;
}