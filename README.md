# Largest cycle in a tree
You are given a tree of N nodes and N-1 edges. Now you need to select two nodes a and b in the tree such that the cycle that will be formed after adding an edge between the two nodes a and b, its length should be maximum. If there are more than one possible answer, you can output any of them.

# Input Format
The first line contains an integer as N input. Next N-1 lines contain a pair of integers (a, b) that denote there is an edge between the two nodes a and b in the tree.

# Output Format
In the output, you need to print two integers separated by space which denote the nodes between which you can add the edge so as to maximize the length of the cycle in the tree.

# Constraints
1<=N<=10^5

# Sample input 
7
1 2
1 3
2 4
2 5
3 6
3 7

# Sample output
4 6
