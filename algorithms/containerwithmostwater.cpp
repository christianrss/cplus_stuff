#include<iostream>
#include<array>
using namespace std;

// Time complexity O(n)
// Space complexity O(1)
// Optimized solution
int maxArea(array<int,4> height)
{
    int l = 0;
    int r = sizeof(height) / sizeof(int) - 1;
    int maxArea = 0;
    while (l < r)
    {
        int length = min(height[l], height[r]);
        int width = r - l;
        int area = length * width;
        maxArea = max(maxArea, area);
        if (height[l] < height[r])
            l += 1;
        else
            r -=1;
    }
    return maxArea;
}

int main(int args, char *argv[])
{
    cout << "Max area: " << maxArea({5, 9, 2, 4}) << flush << endl;
    return 0;
}