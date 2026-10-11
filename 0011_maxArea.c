int maxArea(int* height, int heightSize) {
    int l=0, r=heightSize-1;
    int maxvol=0;
    while(l<r){
        int hi = 0;
        if(height[l]>height[r]) hi = height[r];
        else hi = height[l];

        int vol = (r-l)*hi;
        if(vol>=maxvol){
            maxvol=vol;
        }

        if(height[l]==hi) l++;
        else r--; 
    }
    return maxvol;
}
