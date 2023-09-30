#include <iostream>

using namespace std;

int main(){
    int n;
    cin>> n;

    int max_f = 0;
    int most_f_element = -1;

    const int MAX_N = 1000;
    int arr[MAX_N];

    for(int i =0 ; i<n ;i++){
        cin>>arr[i];
    }
    for(int i =0 ; i< n; i++)
    {
        int frequency = 1;
        for(int j = 0 ; j < n ; j++)
        {
            if (arr[i] == arr[j]){
                frequency++;
            }
        }
        if (frequency > max_f)
        {
            max_f = frequency;
            most_f_element = arr[i];

        }
    }
    cout<<most_f_element<<endl;
    return 0;
}