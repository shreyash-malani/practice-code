#include<iostream>
using namespace std;
class Result {
	int no,nos;
	int *ptr;
	public:
		Result();
		~Result(){delete[] ptr;}
		void setData();
		void display();
		int total();
};

Result::Result()
{
	no=nos=0;
	ptr=NULL;
}

void Result::setData()
{
	cout<<"\nRoll No:";
	cin>>no;
	cout<<"\nSubject Count:";
	cin>>nos;
	ptr=new int[nos];
	cout<<"\nMarks:";
	for(int i=0;i<nos;i++)
	{
		cin>>ptr[i];
	}
}

int Result::total()
{
	int tot=ptr[0],i=1;
	while(i<nos)
	{
		tot+=ptr[i++];
	}
	return tot;
}
void Result::display() 
{
	cout<<"\nRoll no:"<<no;
	cout<<"\nMarks:";
	for(int i=0;i<nos;i++)
	{
		cout<<" "<<ptr[i];
	}
	cout<<"\nTotal:"<<total();
}

int main()
{
	Result a;
	a.setData();
	a.display();
}

