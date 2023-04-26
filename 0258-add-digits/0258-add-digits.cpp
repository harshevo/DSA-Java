class Solution {
public:
    
    int addDigits(int num) {
        
//         if(num < 10){
//             return num;
//         }
        
//         int sum = 0;
        
//         while(num != 0){
            
//            sum = sum + num%10;
            
//             num = num/10;
            
//         }
        
//        return addDigits(sum);
        
        // second solution
//         if (num == 0) return 0;
//         if (num % 9 == 0) return 9;
//         return num % 9;
        
        
        //Third solution
        
        return num == 0 ? 0:1 + (num-1) %9;
    }
};