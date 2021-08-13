//verifing an alien dictionary
class Solution {
    
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> m;
        for (int i=0;i<order.length();i++){
            m[order[i]]=i;
        }
        for (int i=0;i<words.size()-1;i++){
            
            int j;
            for (j=0; j<min( words[i].length(), words[i+1].length()) ;j++){
                if (m[words[i][j]] < m[words[i+1][j]])
                    break;
                else if (m[words[i][j]] > m[words[i+1][j]])
                    return false;
                else if (m[words[i][j]] == m[words[i+1][j]]){
                    
                    continue;
                }
            }
            if (j==min( words[i].length(), words[i+1].length()) && words[i].length() > words[i+1].length())
                return false;
            
        }
        return true;
    }
};