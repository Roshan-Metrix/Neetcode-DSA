class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++){
            int maxi = -1;
            for(int j = i+1; j < arr.size(); j++){
                maxi = max(maxi, arr[j]);
            }
            arr[i] = maxi;
        }
        return arr;
    }
};