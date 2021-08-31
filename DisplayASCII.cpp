///////////////////////////////////////////////////////////////////////////////////////////////
//   Accept number from user and display ASCII table
///////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class StringX
{
	private :
		int iNo;
	
	public :
		StringX()
		{
			this -> iNo = 0;
		}
		
		void DisplayASCII()
		{
			int i = 0;
			cout<<"------------------------------------------------\n";
			cout<<"ASCII Table\n";
			for(i = 0 ; i <= 128 ; i++)
			{
				printf("%c\t%d\t%o\t%x\n",i,i,i,i);
			}
			cout<<"------------------------------------------------\n";
		}
};

int main()
{
	StringX sobj;
	
	sobj.DisplayASCII();
	
	return 0;
}