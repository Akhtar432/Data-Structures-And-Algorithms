 #include<iostream>
 #include<climits>
 using namespace std;

 //Function to find the maximum number of cuts.
    
    //Dp ka que hai recursion se solve krne pr TLE dega.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //basecase
        if(n == 0){
            return 0;
        }
        if(n < 0){
            return INT_MIN;
        }
        //Method:- Exploring all possible ways
        //maine x lenth ka ek segment cut kr liye baki recursion sambhal lega
        int option1 = 1 + maximizeTheCuts(n-x, x,y,z);
        
        //maine y lenth ka ek segment cut kr liye baki recursion sambhal lega
        int option2 = 1 + maximizeTheCuts(n-y, x,y,z);
        
        //maine z lenth ka ek segment cut kr liye baki recursion sambhal lega
        int option3 = 1 + maximizeTheCuts(n-z, x,y,z);
        
        
        int finalAns = max(option1 , max(option2, option3));
        return finalAns;
        
    }