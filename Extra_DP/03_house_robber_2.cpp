// same as house_robber_1 but now this time we have a circular neighbour hood so we will firt exclude the first house and find the answer and then exclude the second house and then find the next answer and then we will find the max of both the answers 


class Solution
{
public:
    int rob1(vector<int> &nums)
    {
        int n = nums.size();
        int prev1, prev2;
        prev2 = nums[0];

        for (int i = 1; i < n; i++)
        {
            int take = nums[i];
            if (i > 1)
                take += prev1;
            int notake = prev2;
            prev1 = prev2;
            prev2 = max(take, notake);
        }
        return prev2;
    }
    int rob(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];
        vector<int> temp1;
        vector<int> temp2;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i != 0)
                temp1.push_back(nums[i]);
            if (i != nums.size() - 1)
                temp2.push_back(nums[i]);
        }
        int result = max(rob1(temp1), rob1(temp2));
        return result;
    }
};