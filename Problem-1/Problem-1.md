## Problem: Valid Parentheses

Given a string containing only characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:
1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.

Note that an empty string is also considered valid.

### Example

Input: "()"  
Output: true

Input: "()[]{}"  
Output: true

Input: "(]"  
Output: false

### Approach

To determine the validity of parentheses in a given string, we can use a stack data structure. As we iterate through the string, we push opening brackets onto the stack. When we encounter a closing bracket, we check if it matches the top element of the stack. If it does, we pop the top element from the stack. If it doesn't match or the stack is empty, the string is not valid. After traversing the entire string, if the stack is empty, the string is valid; otherwise, it is not.

### Implementation

The problem can be solved using various programming languages such as C++, Python, or Java. You can find the solution implementation in the respective language files in this repository.

Feel free to explore the solution code and the explanations provided to get a better understanding of the problem-solving approach.
