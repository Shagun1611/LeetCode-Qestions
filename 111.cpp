#include<iostream>

using namespace std;
void func(int x)
{
    if(x>0)
    {
        func(x-1);
        cout<<x<<" ";
        func(x-1);
    }
}
int main()
{
   int n=4;
   func(n);
   return 0;
}