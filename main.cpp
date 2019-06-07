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
    for(int i=0;str[i]!=0;i++) q=i+1;
    for(int i=0;i<89;i++)
    {
        if (word == str[i])
        {
            for(int j=i;j<89;j++)
            {
                str[j]=str[j+1];
            }
            i--;
            q--;
        }
    }
    for(int i=0;i<q;i++) cout<<str[i];
    getchar();
    return 0;
}
