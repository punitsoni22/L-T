// Write a program to merge to sorted arrays.
// a1[5] = [25, 27, 32, 98]
// a2[7] = [12, 23, 28, 51, 72, 85, 97]
// then a3[20] should be equal to = [12, 23, 25, 27, 28, 32, 51, 72, 85, 97, 98]

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a1[5] = {25, 27, 32, 98};
    int a2[7] = {12, 23, 28, 51, 72, 85, 97};

    vector<int> ans;

    for(int i=0;i<4;i++){
        ans.push_back(a1[i]);
    }
    for(int i=0;i<7;i++){
        ans.push_back(a2[i]);
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<11;i++){
        cout<<ans[i]<<" ";
    }


}