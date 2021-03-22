                       // Program-2

   //Program Statement
   Wap to make the use of Inline function


#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

inline float power(double n)
{
    return pow(n,3);
}

inline float power(double m,int n)
{
    return power(m,n);
}
inline void display(float data)
{
    cout<<"Output is "<<data<<endl;
}

int main()
{
    int temp;
    cout<<"1. Enter base and power"<<endl;
    cout<<"2. Enter the base value"<<endl;
    cout<<"Enter choice"<<endl;
    cin>>temp;

    if(temp==2){
        float base,y;
        cout<<"Enter base"<<endl;
        //first inline fn is called
        cin>>base;
        y=power(base);
        display(y);
    }
    else{
        cout<<"Wrong choice"<<endl;
    }

}
