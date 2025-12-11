#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums;
    int n,temp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        nums.push_back(temp);
    }
    temp=nums[0];
    int shiftby;
    cout<<"enter number to left shift";
    cin>>shiftby;
    while(shiftby!=0){
        temp=nums[0];
        for(int i=1;i<n;i++){
            nums[i-1]=nums[i];
        }
        nums[n-1]=temp;
        shiftby--;
    }
    for(int i=0;i<n;i++){
        cout<<nums[i];
    }
    return 0;
}