/* Approach 1: start from end , if founf duplicate, pop the element from i+1th index and you get the array
TC- O(n)

Approach 2 : take an element j, if find unique keep setting arr[j]=unique and at the end resize the array to size j
TC- O(n)

Approach 3 : define a set and insert all elements in set, it will automatically removes duplicates
TC - O(nlogn)   set insertion takes nlogn
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int n,j=1;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    for(int i=1;i<arr.size();i++){
        if(arr[i-1]!=arr[i]){

            arr[j]=arr[i];
            // cout<<arr[j];
            j++;
        }
    }
    arr.resize(j);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}