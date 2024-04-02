    #include<bits/stdc++.h>
    using namespace std;

    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>res(2);
        int j=numbers.size()-1;
        int i=0;
        while(i<j){
            if(numbers[i]+numbers[j]==target){
                res[0]=i+1;
                res[1]=j+1;
                break;
            }
            if(numbers[i]+numbers[j]>target){
                j--;
                }
            else{
                i++;
            }
        }
        return res;
    }
    int  main(){
        vector<int>numbers{2,7,11,15};
        int target = 9;
        vector<int>ans = twoSum(numbers,target);
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        return 0;
    }
    // javascript sol
    // var twoSum = function(numbers, target) {
    // const res = [];
    // let n = numbers.length;
    // let j = n-1;
    // let i=0;
    // while(i<j){
    //     if(numbers[i]+ numbers[j]==target){
    //         res[0]=i+1;
    //         res[1]=j+1;
    //         break;
    //     }
    //     if(numbers[i]+numbers[j]>target){
    //             j--;
    //             }
    //      else{
    //             i++;
    //         }
    // }
    // return res;

    // java sol
//     class Solution {
//     public int[] twoSum(int[] numbers, int target) {
//       int [] res;
//         res = new int[2];
//         int j=numbers.length-1;
//         int i=0;
//         while(i<j){
//             if(numbers[i]+numbers[j]==target){
//                 res[0]=i+1;
//                 res[1]=j+1;
//                 break;
//             }
//             if(numbers[i]+numbers[j]>target){
//                 j--;
//                 }
//             else{
//                 i++;
//             }
//         }
//         return res;  
//     }
// }