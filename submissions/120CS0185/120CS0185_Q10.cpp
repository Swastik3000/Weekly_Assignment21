//search in rotated sorted array
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0,en=nums.size()-1,p;
        if (nums.size()==1 && nums[0]==target)
            return 0;
        else if(nums.size()==1 && nums[0]!=target)
            return -1;
        
        while (st<=en){
            int mid =(st+en)/2;
            if (mid ==0){
                if (nums.size()>=2){
                    if (nums[0]>nums[1]){
                        p= 1;
                        break;
                    }
                    else
                        p=0;
                    break;
                }
            }
            else if (mid==nums.size()-1){
                p=nums.size()-1;
                break;
            }
            else if (nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]){
                p=mid;
                break;
            }
            else if(nums[mid]>nums.back())
                st=mid+1;
            else if (nums[mid]<nums.back())
                en=mid-1;
        }
        
        if (target > nums.back()){
            st=0, en=p-1;
            while (st <= en)
            {
                int mid = (st + en) / 2;
                if (nums[mid] == target)
                    return mid;
                else if (nums[mid] > target)
                {
                    en = mid - 1;
                }
                else
                    st = mid + 1;
            }
        }
        else{
            st=p,en=nums.size()-1;
            while (st <= en)
            {
                int mid = (st + en) / 2;
                if (nums[mid] == target)
                    return mid;
                else if (nums[mid] > target)
                {
                    en = mid - 1;
                }
                else
                    st = mid + 1;
            }
        }
       
        return -1;
    }
};