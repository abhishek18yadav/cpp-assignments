// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         priority_queue<int ,vector<int>,greater<int>>pq;
//         vector<int>res;
//         for(int i=0; i<nums.size(); i++){
//             pq.push(nums[i]*nums[i]);
//         }
//         while(!pq.empty()){
//             res.push_back(pq.top());
//             pq.pop();
//         }
//         return res;
//     }
// };
var sortedSquares = function(nums) {
    let i=0;
    let n = nums.length;
    let j= n-1;
    let k = j;
    const res = new Array(n);
    while(i<=j){
        if(nums[i]**2 > nums[j]**2){
            res[k]=nums[i]**2;
            i++;
            k--;
            }
        else{
            res[k--]=nums[j]**2;
            j--;
            }
    }
    return res;
};
// [-4,-1,0,3,10]
const nums = [-4,-1,0,3,10];
 sortedSquares(nums);
