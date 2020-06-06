
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main ()
{   int i;
vector<int>j  ;
	j.push_back(11);
	j.push_back(-1);
	j.push_back(22);
	j.push_back(0);
	j.push_back(42);
	j.push_back(1);
		sort(j.begin(),j.end());
	vector<int> :: iterator  it=j.begin();
	for(it=j.begin();it!=j.end();it++)
	{
		cout<< *it<<" ";
	}
		
	bool present =binary_search(j.begin(),j.end(),11);
		cout<<"hello   "<<present<<"   " ;
   
     it=upper_bound(j.begin(),j.end(),41);
     
     cout<< *it<< " ";
      it=upper_bound(j.begin(),j.end(),42);
	  cout<< *it<<"  ";
      
	  	return 0; 
}
