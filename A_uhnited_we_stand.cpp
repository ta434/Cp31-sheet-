#include <bits/stdc++.h>
using namespace std;    
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int mx=*max_element(a.begin(),a.end());
        vector<int>b;
        vector<int>c;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=mx)
            {
                b.push_back(a[i]);
            }
            else{
                  v.push_back(a[i]);
            }
        }
        if(b.size()==0)
        {
            cout<<-1<<endl;
        }
        else{
            cout<<b.size()<<c.size()<<endl;
            for(auto x:b)
            {
                cout<<x<<" ";
            }
            for(auto x:c)
            {
                cout<<x<<" ";
            }

        }
    }
}