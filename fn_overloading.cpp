                        Program-4

   //Program Statement
   /*Wap to show the effect of default arguments can be alternatively achieved by overloading.
   */

#include<iostream>
using namespace std;

float power()
{
    float result=1;
    cout<<"Calculate the power of a function:"<<endl;
    cout<<"Enter the value of base"<<endl;
    float base;
    cin>>base;
    cout<<"Enter the value of power"<<endl;
    float power;
    cin>>power;
    while(power--){
        result*=base;
    }
    return result;
}

float power(double m,int n)
{
    float result=1;
    while(m--){
        result*=n;
    }
    return result;
}
void display()
{
    float data=power();

    cout<<data;

}

int main()
{
    power();
    power(4,2);
    display();

}
