#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main()
{
    cout<<"find the factorial of any number:"<<endl;
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    cout<<factorial(n);
}
