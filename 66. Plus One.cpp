class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        digits[size-1]++;
        for(int i = size-1; i>0; i--){
         if(digits[i]>9){
            digits[i] = 0;
            digits[i-1]++;
          }
          else break;
        }
        if(digits[0]>9){
        digits[0] = 0;
        digits.insert(digits.begin()+0, 1);
        }
        return digits;
    }
};
