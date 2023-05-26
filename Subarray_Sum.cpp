#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int best = 0;
    cout<<"Enter the length of the array\n";
    cin>>n;
    vector<int> v(n);
    cout<< "Enter the array values"<<endl;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    //Algorithm - O(n^2)
    // for(int i=0;i<n;i++)
    // {
    //     int sum = 0;
    //     for(int j=i;j<n;j++)
    //     {
    //         sum += v[j];
    //         best = max(best,sum);
    //     }
    // }

    //Algorithm - O(n)
    int sum = 0;// Kadane's Algorithm
    for(int i=0;i<n;i++)
    {
        sum = max(v[i],sum+v[i]);
        best = max(best,sum);
    }


    cout<<best<<"\n";
}
