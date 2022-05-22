class Solution {
public:
    static bool comp(const vector<int>& vec1, const vector<int>& vec2){
    return vec1[1] > vec2[1];
}
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), comp);
        int maxUnits = 0;
        int boxes = 0;
        int inx = 0;
        
        while(inx < boxTypes.size() && boxes < truckSize) {
           
            if(boxTypes[inx][0] <=truckSize-boxes) {
                maxUnits += (boxTypes[inx][0] * boxTypes[inx][1]);
                boxes += boxTypes[inx][0];
            }
            else {
                maxUnits += ((truckSize-boxes) * boxTypes[inx][1]);
                boxes += truckSize - boxes;
            }
            inx++; 
            
        }
        return maxUnits;
    }
};