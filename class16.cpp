#include<iostream>
using namespace std;
class Result
{
        int no;
        int mrk[5];
    public:
        Result();
        ~Result(){}
        void setData();
        void display();
        int total();
};
Result::Result()
{
    no=0;
    for(int i=0;i<5;i++)
        mrk[i]=0;
}
void Result::setData()
{
    cout<<"\n Roll no:";
    cin>>no;
    cout<<"\n marks:";
    for(int i=0;i<5;i++)
        cin>>mrk[i];
}
void Result::display()
{
    cout<<"\n Roll no:"<<no;
    cout<<"\n Marks\n";
    for(int i=0;i<5;i++)
        cout<<" "<<mrk[i];
}
int Result::total()
{
    int tot=mrk[0],i=1;
    while(i<5)
        tot+=mrk[i++];
    return tot;
}
int main()
{
    Result a;
    a.setData();
    a.display();
    cout<<"\n Total"<<a.total();
}
