#include <bits/stdc++.h>
vector<pair<int, int>> twoSum(vector<int> &arr, int target, int n) {
        vector<pair<int,int>>ans;
			int i=0,l=n-1;
            sort(arr.begin(),arr.end());
                        while(i<l) {
                          if (arr[i]+arr[l]>target)
                              l--;
                           else if (arr[i]+arr[l]<target)
                               i++;
                           else{
                               ans.push_back({arr[i],arr[l]});
                              i++;
                              l--;
                          }
                        }
                        if (ans.empty()) {
                            ans.push_back({-1,-1});
                        }
                        return ans;
}