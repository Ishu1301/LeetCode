int removeElement(int* nums, int numsSize, int val) {
    int count=0;
    for(int i=0;i<numsSize;i++){
        int flag=0;
        if(val==nums[i]){
            flag=1;
        }
        if(flag==0){
            nums[count]=nums[i];
            count++;
        }
    }
    return count;
}
