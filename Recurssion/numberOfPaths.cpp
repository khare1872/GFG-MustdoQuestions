long long combination (int i,int j,int m,int n){
    if(i==m-1&&j==n-1) return 1;
    if(i>m||j>n) return 0;
    else return combination(i+1,j,m,n)+combination(i,j+1,m,n);
}
long long  numberOfPaths(int m, int n)
{
    // Code Here
    //m*n-2Cm+n-1
    return combination(0,0,m,n);
}
