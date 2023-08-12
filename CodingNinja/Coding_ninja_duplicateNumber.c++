class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        map<int,int>::iterator itr;
        for(int i=0;i<nums.size();++i){
            ++m[nums[i]];
        }
        for(itr=m.begin();itr!=m.end();++itr){
            cout<<itr->first<<" "<<itr->second<<endl;
        }
        for(itr=m.begin();itr!=m.end();++itr){
            if(itr->second>=2){
                return itr->first;
            }   
        }
        
    return 0;
    }
};