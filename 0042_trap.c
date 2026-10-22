int trap(int* height, int heightSize) {
    int l=0, r=heightSize-1;
    int water = 0;
    while(l<r){
        int initialHeight = 0;
        if(height[r]>=height[l]){
            initialHeight = height[l];
            while(l<heightSize&&initialHeight>=height[l]&&l<r){
                water+=initialHeight - height[l];
                l++;
            }
        }
        else{
            initialHeight = height[r];
            while(r>=0&&initialHeight>=height[r]&&l<r){
                water+=initialHeight - height[r];
                r--;
            }
        }
    }
    return water;
}
