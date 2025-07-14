/*
LeetCode Problem: Valid Parentheses
Link:https://leetcode.com/problems/valid-parentheses/description/
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

 

Constraints:

1 <= s.length <= 10^4
s consists of parentheses only '()[]{}'.
*/
class Solution {
    int top=-1;
    char y[10000];
public:
    bool isValid(string s) 
    {
        char x;
        for(int i=0;i<s.length();i++)
        {
            x=s[i];
            if(x=='(' || x=='[' || x=='{')
            {
                push(x);
            }
            if(x==')' || x==']' || x=='}')
            {
                if(isempty())
                    return false;//closing bracket before opening any
                if(x=='}' && y[top]!='{')
                    return false;
                if(x==']' && y[top]!='[')
                    return false;
                if(x==')' && y[top]!='(')
                    return false;
                pop();
            }
        }
        if(!isempty())
            return false;
        return true;
    }
    void push(char x)
    {
        top++;
        y[top]=x;
    }
    void pop()
    {
        top--;
    }
    bool isempty()
    {
        return top==-1;
    }
};