#include <iostream>
#include <unordered_map>
#include<vector>



void findTarget(std::vector<int>& nums, int target){
    std::unordered_map<int, int> m1;


    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];



        if(m1.find(complement) != m1.end()){


            std::cout<<m1[complement]<<" "<< i ;
            return;




        }
        m1[nums[i]] = i;
    }
    
    
std::cout<<"No valid pair found";




}



int main()
{
    std::vector<int> nums = {5,5,4,6,7};
    

    int target = 9;

    findTarget(nums,target);
    




    return 0;
}
