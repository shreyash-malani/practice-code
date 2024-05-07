#include<iostream>
using namespace std;

class Number
{
    private:
        int no;
    public:
        Number()
        {
            no=0;
            cout<<"\n Default:";
        }
        Number(int a)
        {
            no=a;
            cout<<"\n Para:";
        }
        Number(Number &t)
        {
            no=t.no;
            cout<<"\n Copy:";
        }
        ~ Number()
        {
            cout<<"\n Destructor:";
        }
        void set()
        {
            cout<<"\n Enter no:";
            cin>>no;
        }
        void set(int a)
        {
            no=a;
        }
        int getNo()
        {
            return no;
        }
        void display()
        {
            cout<<"\n No:"<<no;
        }
};
int main()
{
    Number a;
    a.display();
    {
        Number b(10);
        b.display();
    }
    a.set();
    a.display();
    Number c(a);
    c.display();
}