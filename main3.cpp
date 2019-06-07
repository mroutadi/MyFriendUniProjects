#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    cout<<"Here is you Number : ";
    for(int i=10000;i>0;i/=10)
    {
            cout<<num/i<<"   ";
            num%=i;
    }
    getchar();
    return 0;
}
