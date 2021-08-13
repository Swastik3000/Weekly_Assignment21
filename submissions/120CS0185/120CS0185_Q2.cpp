//move negative numbers to beginning with constant extra space
#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>n;
    }

    int s=0,e=n-1;
    
    while (s<e){
        if (a[s]<0 && a[e]>0)
        {
            s++;
            e--;
        }
        else if(a[s]<0 && a[e]<0){
            s++;
        }
        else if(a[s]>0 && a[e]>0){
            e--;
        }
        else if (a[s]>0 && a[e]<0){
            int t=a[s];
            a[s]=a[e];
            a[e]=t;
            s++;
            e--;
        }

    }
    for (int i=0;i<n;i++){
            cout <<a[i]<<" ";
        }
}
