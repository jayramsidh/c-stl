#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main ()
{
    int i;
    set<int> s={0,77,-1,-2};
    for(int x:s)
    {
        cout<<x<<" ";
    }
    set<int>::iterator it=s.find(77);
    if(it==s.end())
    {
        cout<<"sorry it doesnot present";
    }
    else
    {
        cout<<"yes ";        
    }
    auto lp=s.lower_bound(-1);
    auto up=s.upper_bound(1);
    cout<<"  "<<*lp<<" "<<*up;
   return 0; 
}