#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++)
        cin>>arr[i];

    int k;
    cin>>k;
    bool f = false;
    for(int i = 0; i<n && !f; i++)
    {
        if(arr[i] ==k){
            f = true;
            cout<<i;
        }
    }
    if(!f)
        cout<<-1;
    return 0;
}