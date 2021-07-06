int hourglassSum(vector<vector<int>> a) {
    
    int rows = a.size();
    int cols = a[0].size();
    
    if(rows < 3 || cols <3){
        return -1;
    }
    
    int max_sum = INT_MIN;
    for(int i=0;i<rows-2;i++){
        for(int j=0;j<cols-2;j++){
            
            int sum = (a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2]);
            
            max_sum = max(max_sum,sum);
        }
    }
    return max_sum;
    
}
