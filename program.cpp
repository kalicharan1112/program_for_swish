#include <iostream>

using namespace std;
int func(int x,int p)
{
    if(x==0)
    return 0;
    else
    return x+func(x*(100-p)/100,p);
}

int main()
{
   int x,p,rate;
   cin>>x>>p;
   rate=func(x,p);
   cout<<rate;
   
   return 0;
}