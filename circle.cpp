#include <iostream>
#include <cmath>
#define PI 3.1415926
using namespace std;

int main()
{
    double radius, area, circum;
    cout<<"radius: "<<endl;
    cin>>radius;

    area = PI * radius * radius;
    //area = PI * pow(radius,2);
    circum = 2 * PI * radius;

    cout<<endl;
    cout<<"Area: "<<area<<endl;
    cout<<"Circum: "<<circum<<endl;

    return 0;
}
