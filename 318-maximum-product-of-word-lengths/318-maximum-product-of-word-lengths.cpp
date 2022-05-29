/* 
So, basically we need to find all the pairs of words which has no common letters in them and then find the max(size(word[i])size(word[j]))

✅ The first approach is pretty straight forward (Using Bitset/Hashmap)
So, we create a function named checkCommon to check if the letter is present in both the words or not and return true/false depending on the given words.
And then we just iterate over the map and if there's any letter that occurs in both the words and if it does, we know that the word have atleast 1 letter in common.

We will be using bitset<26> we could have used hashmap as well but bitset will help in the space optimizing so we are using that.

Time Complexity : O(n*n) , where n is the length of words
Space Complexity :O(n)
*/

class Solution {
public:
    bool checkCommon(bitset<26> &a, bitset<26> &b){ // function to check if two bitset are common
        for(int i=0;i<26;i++) if(a[i] && b[i]) return true; // if any of the bits are true, return true
        return false; // otherwise return false
    }
   
    int maxProduct(vector<string>& words) { // function to find the maximum product
        int n = words.size(); // number of words
        int ans=0; // initialize the answer
        vector<bitset<26>> chars(n); // vector of bitset
        for(int i=0;i<n;i++){ // iterate over all the words 
            for(auto &ch:words[i]) // iterate over all the characters in the words[]
                chars[i][ch-'a'] =1; // set the bitset to 1
            for(int j=0;j<i;j++) // iterate over all the words before the current word
                if(!checkCommon(chars[i],chars[j])) // if the two words are not common
                    ans = max(ans, (int)words[i].size()*(int)words[j].size()); // update the answer
        }
        return ans; // return the answer
    }
};