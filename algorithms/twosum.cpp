#include<iostream>
#include<array>
using namespace std;

std::array<int,2> findTwoSum(int nums[], int numsSize, int target) {
    for (int p1 = 0; p1 < numsSize; p1++) {
        int numberToFind = target - nums[p1];
        for (int p2 = p1+1; p2 < numsSize; p2++) {
            if (numberToFind == nums[p2]) {
                return {p1,p2};
            }
        }
    }
    return {-1,-1};
    
}

int main(int argc, char *argv[]) {
    int nums[] = {1,2,3,4,9};
    int numsSize = sizeof(nums) / sizeof(int);

    std::array<int,2> result = findTwoSum(nums, numsSize, 11);
    if (result[0] != -1 && result[1] != -1) {
        cout << "Indices " << result[0] << "," << result[1] << flush << endl;
    } else {
        cout << "No two sum solution\n" << flush << endl;
    }
}