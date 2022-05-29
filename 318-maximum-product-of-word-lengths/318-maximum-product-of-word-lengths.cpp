/* 
The Second approach (Using Bitmasking)
So, here we basically just find hash for each word and if we do AND (&) of hash of two words and it becomes equal to 0, then defintely they contain no common letter, so we update ans to max(size(word[i])size(word[j]))
Using Bitmasking there is not much a difference in time complexity but the time to iterate over the bitset in approach I is reduced to constant O(26)

Time Complexity : O(n*n)
Space Complexity :O(n)
*/







class Solution {
public:
    int maxProduct(vector<string>& words) {     // function to get the max product of two words
	int n = words.size(), ans = 0;       // n is the number of words and ans is the max product
	
    vector<int> mask(n);               // mask is the vector of bit masks
	for(int i = 0; i < n; i++) {      // loop to get the bit mask of each word
		for(auto& ch : words[i])     // for each character in the word          
			mask[i] |= 1 << (ch - 'a');   // hash the word
		
        for(int j = 0; j < i; j++) // loop to check if the word is a subset of another word
			if((mask[i] & mask[j]) == 0)    // if no common set bit is found in the hash of words[i] and words[j]
				ans = max(ans, int(size(words[i]) * size(words[j]))); // update the max product
	}    
	return ans; // return the max product
}
};