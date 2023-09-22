#include <iostream>
 using namespace std;
void NhapMang(int a[], int n){
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
}
 
void XuatMang(int a[], int n){
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}
 
void TangDan(int a[], int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}
 
 
int main(){
    int a[100];
    int n;
    
    do{
        cin>>n;
        if(n <= 0){
            printf("error");
        }
    }
	while(n <= 0);
    NhapMang(a, n);
    TangDan(a, n);
    XuatMang(a, n);
}
