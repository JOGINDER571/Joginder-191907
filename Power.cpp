   //PROBLEM STATEMENT

   //Wrire a function power () which raise a number m to a power n.The function take double value
   //of m and int value of n and return the result .use a default value n is 2 to make the function
   //to calculate squares when the argument is omited.


   CODE

   #include<iostream>
   using namespace std;

   class power{
   private:
    double m;
    int n=2;
    int result=1;
   public:
    void Set(int N,double M){
        n=N;
        m=M;

    }
    void get(){

        while(m--){
            result*=n;
        }
    }
    void display()
    {
        cout<<result<<endl;
    }


   };

   int main()
   {
       cout<<"Result:-"<<endl;
       power obj;
       obj.Set(2,5);
       obj.get();
       obj.display();
   }
