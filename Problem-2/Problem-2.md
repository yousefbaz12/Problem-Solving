## Problem: Baseball Game

You are keeping score for a baseball game. The game consists of several rounds, where players earn points. Each round's score is represented by a string. The scores are based on the following rules:

1. The round score could be one of the following:
   - An integer (one round's score): Directly represents the number of points the player scored in this round.
   - "+" (one round's score): Represents that the points you get in this round are the sum of the last two valid round's points.
   - "D" (one round's score): Represents that the points you get in this round are double the last valid round's points.
   - "C" (an operation, which isn't a round's score): Represents the last valid round's points you get were invalid and should be removed.

2. Each round's operation is permanent and could have an impact on the round before and the round after.

You need to return the sum of the points you could get in all the rounds.

### Example

Input: ["5","2","C","D","+"]  
Output: 30

Explanation:
Round 1: You could get 5 points. The sum is: 5.
Round 2: You could get 2 points. The sum is: 7.
Operation 1: The round 2's data was invalid. The sum is: 5.
Round 3: You could get 10 points (the round 2's data has been removed). The sum is: 15.
Round 4: You could get 5 + 10 = 15 points. The sum is: 30.

### Approach

To solve this problem, we can use a stack data structure. As we iterate through the given list of scores, we maintain a stack to keep track of the valid round scores. For each score encountered, we apply the corresponding operation and update the stack accordingly. At the end, we sum up the values in the stack to obtain the total score.

### Implementation

The problem can be solved using various programming languages such as C++, Python, or Java. You can find the solution implementation in the respective language files in this repository.

Feel free to explore the solution code and the explanations provided to get a better understanding of the problem-solving approach.
