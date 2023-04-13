class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> stack;
        int j = 0;
        for (int x : pushed) {
            stack.push(x);
            while (stack.size() && stack.top() == popped[j]) {
                stack.pop();
                j++;
            }
        }
        return stack.size() == 0;
    }
};