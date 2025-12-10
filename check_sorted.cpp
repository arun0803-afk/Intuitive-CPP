/* Approach 1: create another array equal to current array, use sort function and then compare each element if matches, then sorted else not sorted
TC - O(nlogn)

Approach 2 : compare adjacent elements until end and it found that arr[i-1]>arr[i] then not sorted 
TC : O(n)
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
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            cout<<"array is not sorted";
            break;
        }
    }
    return 0;
}