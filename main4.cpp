#include <iostream>

using namespace std;

void summer(int N)
{
    int s=1,w=N,u=0,d;
    for(int i=0;;i++)
    {
        if(w/10>0)
        {
            s++;
            w/=10;
        }
        else break;
    }
    for(int i=0;i<s;i++)
    {
        u+=N%10;
        N/=10;
    }
    cout<<"The sum of numbers is : "<<u<<endl;
    if(u>=10)
    {
        return summer(u);
    }
}

int main()
{
    int num;
    cout<<"Enter Your Number : ";
    cin>>num;
    summer(num);
    getchar();
    return 0;
}
