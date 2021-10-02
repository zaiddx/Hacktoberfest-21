// leetcode question
class Solution {
public:

   void reverse(vector<int>& v,int l,int r)
{
    while(l<r)
    {
        swap(v[l++],v[r--]);
    }
}

void nextPer(vector<int>& nums) {
        int i,jg,lss=-1;
        for(i=nums.size()-1;i>0;--i) 
        {
            if(nums[i-1]<nums[i]) 
            {
                lss=i-1;
                break;
            }
        }
        
        if(lss==-1) 
        {
            reverse(nums,0,nums.size()-1);
            return;
        }

       
        
        for(jg=nums.size()-1;jg>0;--jg) /
        {
            if(nums[lss]<nums[jg])
            {
                break;
            }
        }
 
       

        swap(nums[lss],nums[jg]); 
        
        ++lss;
        reverse(nums,lss,nums.size()-1);       
    }

};