/*Approch 1: - sort the array and return the second last element from the sorted array
Time Complexity: - O(nlogn)

Approach 2: - take 2 elements largest and largest2
iterate through the array and then compare if arr[i]<largest and arr[i]<large2 given that large2<largest
*/   

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int largest=arr[0],largest2=arr[1];
    for(int i=0;i<n;i++){
        if(largest2>largest){
            swap(largest2,largest);
        }
        else if(arr[i]>largest){
            largest2=largest;
            largest=arr[i];
        }
        else if(arr[i]>largest2 && arr[i]<largest){
            largest2=arr[i];
        }
    }
    cout<<"second largest is"<<largest2<<endl;
    return 0;
}