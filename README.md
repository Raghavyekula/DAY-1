1.First file Discription "goto Label":

Generally, using goto can make code harder to understand and maintain, so it's often avoided in favor of more structured control flow constructs like loops and conditionals (if, while, for, etc.)
However, there are some situations where goto might be appropriate or even necessary:
1.Error handling in functions: If you have a function with multiple points of failure and need to clean up resources before exiting, goto can be used to jump to a common cleanup section.
2.Breaking out of nested loops: If you have nested loops and need to break out of both loops at once, goto can be used to jump to a label outside of both loops.
3.Jumping to a common cleanup section: In complex functions where resources need to be released before exiting, goto can be used to jump to a common cleanup section to avoid duplicating cleanup code.


2.second file i have written code quetion i mentiond below but this code is about Function Structuring properly

Write the function string index(s,t) which returns the position of the rightmost 
occurrence of t in s , or - 1 if there is none.  
