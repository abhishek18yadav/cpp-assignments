#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>res(m+n);
        int i=0;
        int j=0;
        int k=0;
        while(i<m and j<n){
            if(nums1[i]<nums2[j]){
                res[k]=nums1[i];
                i++;
                k++;
            } else{
                res[k]=nums2[j];
                j++,k++;
            }
        }
            while(i<m){
              res[k++]=nums1[i++];  
            }
            while(j<n){
              res[k++]=nums2[j++]; 
            }
        for(int i=0; i<res.size(); i++){
            nums1[i]=res[i];
            cout<<nums1[i]<<" ";
        }
    }

int main(){
    // nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
    vector<int>nums1{1,0};
    vector<int>nums2{2};
    int m=1,n=1;
    merge(nums1,m,nums2,n);
    return 0;
}