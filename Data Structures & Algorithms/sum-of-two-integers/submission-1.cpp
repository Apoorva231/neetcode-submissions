class Solution {
public:
    int getSum(int a, int b) {
        int sumWithoutCarry= a^b;
        int carry= a&b;
        int carryShifted=carry<<1;
        

        while(carryShifted!=0){
            carry=sumWithoutCarry & carryShifted;
            sumWithoutCarry=sumWithoutCarry^carryShifted;
            
            carryShifted=carry<<1;
        }
        return sumWithoutCarry;
    }
};
