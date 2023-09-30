#include<bits-stdc++.h>

using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int a1[m], a2[n];

    for(int i =0 ;i <m ; i++){
        cin>>a1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>a2[i];
    }

    bool check = true;
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j =0 ; j< m ;j++){
            if (a2[i] == a1[j]) flag = true;
        }
        if (check = false) check = false;
    }
    if (check) cout<<"yes";
    else cout<<"no";
    return 0;


    
    
}