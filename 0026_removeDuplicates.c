int removeDuplicates(int* nums, int numsSize) {
    int size=0;
    for(int i=0;i<numsSize;i++){
        int flag=0;
        for(int j=0;j<size;j++){
            if(nums[j]==nums[i]){
                flag = 1;
                break;
            }
        }
        if(flag==0){
            nums[size]=nums[i];
            size++;
        }
    }
    return size;
}
