//https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int> a, pair<string, int> b)
{
    if(a.second!=b.second)
    return a.second>b.second;
    else return a.first<b.first; 
}

int main()
{
    
    long long n;
    
    cin>>n;
    vector<pair<string,int> > a(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
     
     sort(a.begin(),a.end(),cmp);
     
     for(long long i=0;i<n;i++)
    {
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    return 0;
}
