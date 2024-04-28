class Solution {
public:
    int hammingWeight(int n) {
        int out=0;
        for(int i=0;i<32;i++){if((n&1)==1)out++;n>>=1;}return out;}};
