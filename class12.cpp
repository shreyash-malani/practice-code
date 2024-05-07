#include<iostream>
using namespace std;
class Result{
	int rno;
	int mrk[5];
	public:
		Result();
		Result(Result & );
		~Result(){}
		void setData();
		void setData(int );
		void setMarks();
		void display();
		int total();
		int avg()
		{
			return(total()/5);
		}
		int isMore(int no)
		{
			return(rno>no);
		}
		int isLess(int no)
		{
			return(rno<no);
		}
		int isMoremarks(Result & t)
		{
			return(total()>t.total());
		}
		int isLessMarks(Result & t)
		{
			return(total()<t.total());
		}
		int isMoreRollNo(Result & t)
		{
			return(rno>t.rno);
		}
		int isLessRollNo(Result & t)
		{
			return (rno<t.rno);
		}
};
int Result::total()
{
	int i=1,tot=mrk[0];
	while(i<5)
	{
		tot+=mrk[i];
		i++;
	}
	return tot;
}
void Result::display()
{
	cout<<"\nRoll NO:"<<rno;
	cout<<"\nMarks:";
	for(int i=0;i<5;i++)
	{
		cout<<" "<<mrk[i];
	}
	cout<<"\nTotal:"<<total();
	cout<<"\navrage:"<<avg();
}
void Result::setMarks()
{
	cout<<"\nMarks:";
	for(int i=0;i<5;i++)
	{
		cin>>mrk[i];
	}
}
void Result::setData(int no)
{
	rno=no;
	setMarks();
}
void Result::setData()
{
	cout<<"\nRoll No:";
	cin>>rno;
	setMarks();
}
Result::Result()
{
	rno=0;
	for(int i=0;i<5;i++)
	{
		mrk[i]=0;
	}
}
Result::Result(Result & t)
{
	rno=t.rno;
	for(int i=0;i<5;i++)
	{
		mrk[i]=t.mrk[i];
	}
}
/*
int main()
{
	Result a;
	a.setData();
	a.display();
	return 0;
}*/
/*
int main()
{
	Result a,b;
	a.setData();
	b.setData();
	if(a.isMore(10))//compare roll no based
	    a.display();
	else
	   b.display();
	a.display();
	b.display();   
}*/
/*
int main()
{
	Result a;
	a.setData();
	if(a.isMore(10))
	   cout<<"\nRoll No>10";
	else
	   cout<<"\nRoll No<10";
	a.display();
}*/
/*
int main()
{
	Result a,b,c;
	a.setData();
	a.display();
	b.setData();
	b.display();
	if(a.isMoreMarks(b))
	  c=a;
	else
	  c=b;
	c.display();
	return 0;  
}*/
/*
int main()
{
	Result a,b,c;
	a.setData();
	a.display();
	b.setData();
	b.display();
	if(a.isMoreRollNo(b))
	  c=a;
	else
	  c=b;
	c.display();
	return 0;  
}*/
/*
int main()
{
	Result a[5];//arrya of objects of class result
	
	int i=0;
	while(i<5)
	{
		a[i].setData();
		i++;
	}
	for(i=0;i<5;i++)
	 {
	 	a[i].display();
	 }
	 return 0;
}
*/
/*
int main()
{
    Result a[5];
    Result b;
    int i=0,j,pos;
    while(i<5)
    {
        a[i].setData();
        i++;
    }
    cout<<"\n Before Sorting:";
    for(i=0;i<5;i++)
        a[i].display();
    for(i=0;i<4;i++)
    {
        pos=i;
        for(j=i+1;j<5;j++)
        {
            if(a[i].isLessRollNo(a[pos]))
            pos=j;
        }
        if(i!=pos)
        {
            b=a[i];
            a[i]=a[pos];
            a[pos]=b;
        }
    }
    cout<<"\n After sorting:";
    for(i=0;i<5;i++)
        a[i].display();
}
*/
int main()
{
    Result a[5];
    Result b;
    int i=0,j,pos;
    while(i<5)
    {
        a[i].setData();
        i++;
    }
    cout<<"\n Before Sorting:";
    for(i=0;i<5;i++)
        a[i].display();
    for(i=0;i<4;i++)
    {
        pos=i;
        for(j=i+1;j<5;j++)
        {
            if(a[i].isLessMarks(a[pos]))
            pos=j;
        }
        if(i!=pos)
        {
            b=a[i];
            a[i]=a[pos];
            a[pos]=b;
        }
    }
    cout<<"\n After sorting:";
    for(i=0;i<5;i++)
        a[i].display();
}