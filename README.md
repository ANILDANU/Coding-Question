# Coding-Question
Learning coding
Prepearing for coding questions
N exams numbered from 1 to N are going be held at Geekland state university. Geek is a renowned professor at the university and therefore is given the task to design the datesheet for exams. Datesheet must be made in such a way that total number of holidays in the datesheet is exactly K i.e. sum of holidays given for each exam is exactly K. Moreover, no exam should have more than M holidays.
Two datesheets are considered different if number of holidays for a particular exam in both the datesheets is different. Find number of valid datesheets Geek can choose from. 
As answer can be very large, find it modulo 109 + 7.

Example 1:

Input:
N = 2
K = 3
M = 2
Output:
2
Explanation:
There are two options:
1. 1 holiday in 1st exam and 2 holidays 
   in 2nd exam.
2. 2 holidays in 1st exam and 1 holiday
   in 1st exam.
Your Task:
You don't need to read input or print anything. Your task is to complete the function datesheets() which takes the number of exams N, total number of holidays K and integer M as input parameters and returns the number of valid datesheets modulo 109 + 7.

Expected Time Complexity: O(N * K)
Expected Auxiliary Space: O(N * K)

Constraints:
1 ≤ N ≤ 103
1 ≤ K, M ≤ 104

[Solution]{}