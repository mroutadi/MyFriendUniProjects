#include <iostream>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int q;
    char str[90],word;
    cout<<"Enter your string : ";
    cin.get(str,89);
    cout<<"Enter your character : ";
    cin>>word;
    for(int i=0;str[i]!=0;i++) q=i;
    for(int i=0;i<89;i++)
    {
        if (word == str[i])
        {
            for(int j=89;j>=i;j--)
            {
                str[j+1]=str[j];
            }
            for(int j=89;j>=i;j--)
            {
                str[j+3]=str[j+2];
            }
            str[i]=':';
            str[i+2]=':';
            q+=2;
            i+=2;
        }
    }
    cout<<endl;
    for(int i=0;i<=q;i++) cout<<str[i];
    cout<<endl;
    getchar();
    return 0;
}
