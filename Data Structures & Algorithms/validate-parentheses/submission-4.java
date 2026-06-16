class Solution {
    public boolean isValid(String s) {
        Stack<Character> pancake = new Stack<>(); 
        char[] chars = s.toCharArray(); 
        if (chars.length < 2) {
            return false;
        }
        
        for (Character c: chars){
            if (c == '{' || c == '(' || c == '[') {
                pancake.push(c); 
            } else if (pancake.isEmpty()) {
                return false;
            }


            if (c == '}' && pancake.pop() != '{' ) {
                return false; 
            }
            if ( c == ']' && pancake.pop() != '[') {
                return false; 
            }
            if (c == ')' && pancake.pop() != '(') {
                return false; 
            }
        }
        return pancake.isEmpty();
        
        
    }
}
