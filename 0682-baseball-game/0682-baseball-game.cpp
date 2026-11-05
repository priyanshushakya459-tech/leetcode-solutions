class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        vector<int> track;

        for(int p = 0; p < n; p++) {

            if(operations[p] == "D") {
                track.push_back(track.back() * 2);
            }
            else if(operations[p] == "C") {
                track.pop_back();
            }
            else if(operations[p] == "+") {
                int sz = track.size();
                track.push_back(track[sz-1] + track[sz-2]);
            }
            else {
                track.push_back(stoi(operations[p]));
            }
        }

        int ans = 0;
        for(int j = 0; j < track.size(); j++) {
            ans += track[j];
        }

        return ans;
    }
};