#include <iostream> 
#include  <vector> 
#include  <climits>  


using  namespace std  ;  


int findMaxConsecutiveOnes(vector<int>& nums) {


        
        int  r  = 0 ;
        int  sum =  0 ;  
        int maxsum = INT_MIN  ; 

        while ( r    < nums.size() ){
            if ( nums[r] ==  0 ){
                maxsum = max( maxsum  , sum )  ; 
                sum =  0  ; 
                r++ ; 
                continue   ; 



            }
            sum += 1  ;
            r++ ; 



        } 

        maxsum =  max(maxsum , sum  )  ; 
        

        return maxsum   ; 
       
    }


int main()  {
    int n  ; 
    cin >> n ;   
    vector<int>  v(n)  ; 
    for (int  i = 0 ;   i <  n  ; i++ ){
        cin >> v[i]   ;  

    }
    cout <<  "the  maximum consecutive  one  are  " <<  findMaxConsecutiveOnes(v  )  ;  



}
 

