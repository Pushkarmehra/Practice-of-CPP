/*In this implementation of Kadane's Algorithm, we optimize the time complexity compared to the brute-force approach. 
The algorithm efficiently calculates the maximum sum of a subarray. To achieve this, we introduce 
two variables: currSum (initialized to 0) and maxSum (initialized to 
negative infinity). In each iteration, we add the current element of the array
to currSum and then compare it with maxSum. If currSum becomes negative, we reset it to zero,
effectively starting a new potential subarray. By the end of the loop, maxSum contains the maximum subarray sum.
This approach significantly reduces computation time while ensuring accuracy*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=0,maxSum=INT_MIN;
        for(int val:nums){
            currSum+=val;
            maxSum=max(currSum,maxSum);
            if(currSum<0){
                currSum=0;
            }
        }
        return maxSum;
    }
};
