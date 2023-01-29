/*
https://leetcode.com/problems/single-number/

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int ans = 0;

    for (auto x : nums)
    {
        ans = ans ^ x;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(20);
    vec.push_back(30);

    cout << singleNumber(vec) << endl;

    return 0;
}
