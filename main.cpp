#include <iostream>
#include <vector>

using namespace std;


sgn(int val) {
    return (0 < val) - (val < 0);
}

int main()
{
    long n;
    cin >> n;
    vector<long> nums(n);
    long max = 0;


    for(long i =0; i<n ; i++){
        cin >> nums.at(i);
    }

    vector<long> merge(1);
    //cout << merge.size();

    bool is_changed_sign = 0;
    merge[0] = nums[0];

    for(long i =1; i<n ; i++){
        if(sgn(nums[i])* sgn(merge.back()) >= 0){
            merge.back() += nums[i];
        }
        else {
            merge.push_back(0);
            merge.back() += nums[i];
        }
    }

    for(int a : merge){
        cout << a << " ";
    }


   // cout << nums.size();
    return 0;
}
