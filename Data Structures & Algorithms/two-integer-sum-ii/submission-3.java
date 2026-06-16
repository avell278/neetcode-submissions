class Solution {
    public int[] twoSum(int[] numbers, int target) {
         
         
        
        for (int index1 = 0; index1< numbers.length; index1++) {
            for (int index2 = index1 + 1; index2< numbers.length; index2++) {
                if (numbers[index1] + numbers[index2] == target) {
                    int[] ans = new int [2]; 
                    ans[0] = index1 + 1; 
                    ans[1] = index2 + 1; 
                    return ans;
                }




            }
        }

return new int[0];

    }
}
