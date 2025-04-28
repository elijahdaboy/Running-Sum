#include <iostream>
#include <vector>

// find running sum of vector

std::vector<int> nums = {1, 2, 3, 4, 5};

int main(){
    for (int i = 0; i <= nums.size(); i++){
        if (i > 0){
            nums[i] = nums[i] + nums[i - 1]; // <-- ts pmo
        } else {
            nums[0] = nums[0];
        }
    }
    
    for (int i = 0; i < nums.size(); i++){
        std::cout << nums[i] << '\n';
    }
}
