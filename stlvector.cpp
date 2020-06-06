#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{   int i;
    vector<int> v ={1,0,5,44,77,100,22,-1};
    for(int x: v)
    {
        cout<<x<<" ";
    }cout<<endl;
    v.push_back(72);
    sort(v.begin(),v.end(),greater<int>());
    vector<int>:: iterator it =v.begin();
    for(it=v.begin();it!=v.end();it++)
    {
      cout<<*it<<" ";
    }
    cout<<endl;
   sort(v.begin(),v.end());
    bool present = binary_search(v.begin(),v.end(),77);
    bool present2 =binary_search(v.begin(),v.end(),999);
    cout<<present<<" "<<present2;
    for(int x: v)
    {
        cout<<x<<" ";
    }cout<<endl;
    v.push_back(77);
    v.push_back(77);
    v.push_back(77);
    v.push_back(77);
    v.push_back(77);
    v.push_back(77);
    sort(v.begin(),v.end());
    for(int a:v)
    {
         cout<<a<<" ";
    }cout<<endl;
    vector<int>:: iterator lp = lower_bound(v.begin(),v.end(),77);
    auto up = upper_bound(v.begin(),v.end(),77);
    cout<<up-lp<<" ";

  return 0;  
}