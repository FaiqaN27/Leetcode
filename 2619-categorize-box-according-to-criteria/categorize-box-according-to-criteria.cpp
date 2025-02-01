class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long vol = 1LL*length*width*height;
        const int power = 10000;
        const long long pw = pow(10,9); 

        bool isBulky =  (length >= power) || (width >= power) || 
                        (height >= power) || (vol >= pw);
        bool isHeavy =  (mass >= 100);

        if(isBulky && isHeavy){
            return "Both";
        }
        else if(!isBulky && !isHeavy){
            return "Neither";
        }
        else if(isBulky){
            return "Bulky";
        }
        else{
            return "Heavy";
        }
    }
       
};