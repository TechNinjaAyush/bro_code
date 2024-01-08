 public:
        int countWords(string list[], int n)
        { 
            map < string , int > mpp ;
            for  ( int  i = 0 ; i < list.size()  ;i++) {
                mpp[list[i]] ++ ;
                
            }
            int cnt = 0 ;
             for ( auto it  : mpp) {
                 if (it.second== 2)  {
                     cnt ++ ;
                     
                 }
             }
             return cnt  ;
             
        }