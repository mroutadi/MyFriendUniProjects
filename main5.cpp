#include <iostream>
#include <math.h>

using namespace std;
void online(float a1,float a2,float a3,float b1,float b2,float b3)
{
    if (((b3-b2)/(a3-a2))==((b2-b1)/(a2-a1))) cout<<"\nThey are in a line\n"<<endl;
    else cout<<"\nThey aren't in a line\n"<<endl;
}

void Dist(float a1,float a2,float b1,float b2)
{
    cout<<sqrt(pow((a2-a1),2)+pow((b2-b1),2));
}

int main()
{
    float x1 ,y1 , x2 ,y2 ,x3 ,y3;
    cout<<"Enter you First Point Lenght and Width (Example : 1 2) : ";
    cin>>x1>>y1;
    cout<<"Enter you Second Point Lenght and Width : ";
    cin>>x2>>y2;
    cout<<"Enter you Third Point Lenght and Width : ";
    cin>>x3>>y3;
    online(x1,x2,x3,y1,y2,y3);
    cout<<"Distance Beetwen First and Second point is : ";
    Dist(x1,x2,y1,y2);
    cout<<"\n\nDistance Beetwen First and Third point is : ";
    Dist(x1,x3,y1,y3);
    cout<<"\n\nDistance Beetwen Second and Third point is : ";
    Dist(x2,x3,y2,y3);
    cout<<"\n\n";
    getchar();
    return 0;
}
