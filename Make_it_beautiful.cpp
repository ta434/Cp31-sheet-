#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        bool same=true;
        for(int i=0;i<n;i++)
        {
            if(v[i]!=v[0])
            {
                same=false;
                break;
            }
        }
        if(same){
            cout<<"No";
            continue;
        }
        int sum=0;
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if(sum==v[i])
            {
                  for (int j = i + 1; j < n; j++) {
                    if (a[j] != a[i]) {
                        swap(a[i], a[j]);
                        break;
                    }
                }
            }
            sum += a[i];
        }
         cout << "YES\n";
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << "\n";
            }
              return 0;

        }
    

