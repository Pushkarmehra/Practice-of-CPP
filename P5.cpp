// with nested loop
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         vector<int>& nums
//         int size=nums.size();
//         for(int i=0;i<size;i++){
//             for(int j=0;j<size;j++){
//                 if(nums[i]==nums[j] && i!=j){
//                     return nums[i];
//                 }
//                 else{
//                     continue;
//                 }
//             }
//         }
//     }
// };

// linear solve 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
       for(int val :nums){
        ans=ans ^ val;
       } 
       return ans; }
};
/*using the linear we have to use one loop only so i use binary(bitwise operater) XOR ans using the vectorloop it become so help full */
