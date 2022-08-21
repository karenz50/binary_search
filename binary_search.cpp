#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) { 

   int left = 0, right = nums.size() - 1, midpoint_index, midpoint;

   while (left <= right) {
      
      midpoint_index = left + (right - left) / 2;
      midpoint = nums[midpoint_index];
      if (target == midpoint) 
         return midpoint_index;
      else if (target > midpoint) 
         left = midpoint_index + 1;
      else 
         right = midpoint_index - 1;
   }
   
   return -1;
}

int main() {
   vector<int> nums;
   nums.push_back(-1);
   nums.push_back(0);
   nums.push_back(3);
   nums.push_back(5);
   nums.push_back(9);
   nums.push_back(12);
   // { -1,0,3,5,9,12 }
   int target = 13;
   int index = search( nums, target);
   cout << index << endl;

   return 0;
}