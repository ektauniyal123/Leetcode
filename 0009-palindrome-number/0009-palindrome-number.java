class Solution {
    public boolean isPalindrome(int x) {
        int num=x,
         rev=0;
        if(x<0){
            return false;
        }
        
        while(num!=0){
            int digit=num%10;
            rev = rev* 10 + digit;
            num=num/10;
        }
        if (x==rev){


        return true;
        }
        else{
            return false;
        }
        
    
    }
}