#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cout<<"enter n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    int esum=0,osum=0;
    for(int i=0,j=1;i<v.size(),j<v.size();i+2,j+2)
    {
        esum+=v[i];
        osum+=v[j];
    }
        cout<<(esum-osum);
return 0;
}