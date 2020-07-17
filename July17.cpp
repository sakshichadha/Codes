class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         vector<int>ans;
       if(k==0)
           return ans;
        if(nums.empty())
             return ans;
        // if(k>nums.size())
        //     return
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }

        while(k--)
        {
          int ma=INT_MIN;
            int temp=0;
            for(auto i:m)
            {
               if(i.second>ma)
               {
                   ma=i.second;
                   temp=i.first;
               }
                
            }
            ans.push_back(temp);
            m[temp]=INT_MIN;
 
        }
        return ans;
    }
};