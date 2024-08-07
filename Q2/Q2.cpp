#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int j = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[j] = nums[i];
                j++;
            }
        }
        for(int i=0;i<j;i++){
            cout<<nums[i]<<" ";
        }
        return j;
    }
};

int main()
{
    vector<int> mynums{1,1,2,2,3,3,3,4,4,4,4,4,5,6,7,7};
    Solution s1;
    s1.removeDuplicates(mynums);
}