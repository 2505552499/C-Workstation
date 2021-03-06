/*
 * @lc app=leetcode.cn id=30 lang=cpp
 *
 * [30] 串联所有单词的子串
 */

// @lc code=start
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        final Map<String, Integer> counts = new HashMap<>();
        for (final String word : words){
            counts.put(word, counts.getOrDefault(word, 0) + 1);
        }
        final List<Integer> indexes = new ArrayList();
        final int n = s.length(), num = words.length, len = words[0].length();
        for(int i = 0; i < n - num * len + 1; i++){
            final Map<String, Integer> seen = new HashMap();
            int j = 0;
            while(j < num){
                final String word = s.substring(i + j * len, i + (j + 1) * len);
                if(counts.containsKey(word)){
                    seen.put(word, seen.getOrDefault(word, 0) + 1);
                    if(seen.get(word) > counts.getOrDefault(word, 0)){
                        break;
                    }
                }else{
                    break;
                }
                i++;
            }
            if(j == num){
                indexes.add(i);
            }
        }
        return indexes;
    }
};
// @lc code=end

