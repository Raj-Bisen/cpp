#include<iostream>
using namespace std;

class Sorting
{
	public:
		int iSize;
		int *Arr;
		
		Sorting()
		{
			this -> iSize = 0;
			Arr = new int[iSize];
		}
		~Sorting()
		{
			delete []Arr;
		}
		void Accept()
		{
			cout<<"Enter the number\n";
			cin>>iSize;
			cout<<"Enter the elements\n";
			for(int i = 0 ; i < iSize ; i++)
			{
				cin>>Arr[i];
			}
		}
		void Display()
		{
			cout<<"Entered elements are : \n";
			for(int i = 0 ; i < iSize ; i++)
			{
				cout<<Arr[i]<<"\n";
			}
		}
		void BubbleSort()
		{
			cout<<"Inside Bubble\n";
			int temp = 0;
			for(int i = 0 ; i < iSize ; i++)
			{
				for(int j = 0 ;( j < iSize-i-1) ;j++)
				{
					
					if(Arr[j] > Arr[j+1])
					{
						temp = Arr[j];
						Arr[j] = Arr[j+1];
						Arr[j+1] = temp;
					}
				}
			}
			cout<<"After sorting elements are :\n";
			for(int k = 0 ; k < iSize ; k++)
			{
				cout<<Arr[k]<<"\n";
			}
			
		}


};

int main()
{
	Sorting *sobj = new Sorting();
	
	sobj->Accept();
	sobj->Display();
	sobj->BubbleSort();
	
	
	delete sobj;
	
	return 0;
}