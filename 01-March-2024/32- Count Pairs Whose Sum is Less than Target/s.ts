function countPairsModified(nums: number[], target: number): number {
    let counter:number = 0 ;
    for (let i = 0; i < nums.length; i++) {
        for (let j = i+1; j < nums.length; j++) {
            if (nums[i] + nums[j] < target) {
                counter++;
            }
        }
    }
    return counter;
};
