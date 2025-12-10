// Approach 1 : - Sort the array return the last element

// Approach 2 : - Go through array compare each element until you get the max



#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=INT32_MIN;
    for(int i=0;i<n;i++){
        largest=max(largest,arr[i]);
    }
    cout<<"Largest is"<<largest<<endl;
    return 0;
}