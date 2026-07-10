class Solution {
   public:
    int largestRectangleArea(vector<int>& heights) {
        int size=heights.size();
        
        stack<int> st1;
        stack<int> st2;

        // next smaller arr(right)
        int smallerRight[size];
        for (int i = size - 1; i >= 0; i--) {
            while (!st1.empty() and heights[i] <= heights[st1.top()]) {
                st1.pop();
            }

            if (st1.empty()) {
                smallerRight[i] = size;
            } else {
                smallerRight[i] = st1.top();
            }

            st1.push(i);
        }

        // next smaller arr(left)
        int smallerleft[size];
        for (int i = 0; i < size; i++) {
            while (!st2.empty() and heights[i] <= heights[st2.top()]) {
                st2.pop();
            }

            if (st2.empty()) {
                smallerleft[i] = -1;
            } else {
                smallerleft[i] = st2.top();
            }

            st2.push(i);
        }

        long long maxArea = 0;
        for (int i = 0; i < size; i++) {
            long long height = heights[i];
            long long width = smallerRight[i] - smallerleft[i] - 1;
            maxArea = max(maxArea, height * width);
        }

        return maxArea;
    }
};
