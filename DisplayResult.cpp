//
// Accept number from user and display the result of student on screen.
// input :      0 to 35        35 to 50            50 to 60           60 to 70            70 to 100
// output :    Fail             Pass class        Second class      First class        Destinction
#include<iostream>
#include<stdbool.h>
using namespace std;

class Numbers
{
	public :
		int iMarks ; 
		
		Numbers()
		{
			iMarks = 0;
		}
		void Accept()
		{
			cout<<"Enter the marks of student"<<"\n";
			cin>>iMarks;
		}
		void DisplayResult()
		{
			if((iMarks < 0) || (iMarks > 100))
			{
				cout<<"Invalid marks"<<"\n";
				return;
			}
			if((iMarks >= 0) && (iMarks <= 35))
			{
				cout<<"Student is Fail"<<"\n";
			}
			else if((iMarks >= 35)&&(iMarks <= 50))
			{
				cout<<"Student is just Pass"<<"\n";
			}
			else if((iMarks >= 50)&&(iMarks <= 60))
			{
				cout<<"Student is second class"<<"\n";
			}
			else if((iMarks >= 60)&&(iMarks <= 70))
			{
				cout<<"Student is First class"<<"\n";
			}
			else
			{
				cout<<"Student is in destinction"<<"\n";
			}
		}
		
};

int main()
{
	Numbers obj;
	
	obj.Accept();
	
	obj.DisplayResult();
	
	return 0;
}