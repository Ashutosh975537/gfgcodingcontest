class Solution {
  public:
    int maxGoodSubarrays(int n, vector<int> &arr) {
        // code  here
        int cnt = 0 ;
        int endIndex =  -1 ;
        for(int i =  n - 1 ; i >=0 ;  i--){
            if(arr[i] > arr[n-1]){
                endIndex = i ;
                break ;
            }
        }
        if(endIndex == -1)
           return 0  ;
        cnt ++ ;
        long long mini = -100000000000 ;
        for(int i =  0 ; i <  endIndex ; i++){
            if(arr[i] >= mini){
                mini = arr[i] ;
            }else{
                cnt ++ ;
                mini = -100000000000 ;
            }
        }
        return cnt ;
    }
};
