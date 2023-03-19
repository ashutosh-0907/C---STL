#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    int n;
    cout<<"enter n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    cout<<"enter x";
    int x;
    cin>>x;
    for(int i=v.size();i>0;i--)
    {
        if(v[i]==x)
        {
            cout<<i;
        }
    }
    //or
    /*int occurence
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==x)
        {
             occurence=i;
        }
    }
    cout<<occurence;*/

return 0;
}