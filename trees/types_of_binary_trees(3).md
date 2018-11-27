## Full Binary Tree
A Binary Tree is full if every node has 0 or 2 children. Following are examples of a full binary tree.
We can also say a full binary tree is a binary tree in which all nodes except leaves have two children.

              18
           /       \  
         15         30  
        /  \        /  \
      40    50    100   40
             

               18
            /     \  
          40       30  
                   /  \
                 100   40

In a Full Binary, number of leaf nodes is number of internal nodes plus 1
       L = I + 1
Where L = Number of leaf nodes, I = Number of internal nodes

## Complete Binary Tree
A Binary Tree is complete Binary Tree if all levels are completely filled except possibly
the last level and the last level has all keys as left as possible

               18
           /       \  
         15         30  
        /  \        /  \
      40    50    100   40


               18
           /       \  
         15         30  
        /  \        /  \
      40    50    100   40
     /  \   /
    8   7  9 

## Perfect Binary Tree
Perfect Binary Tree A Binary tree is Perfect Binary Tree in which all internal nodes have two children and all leaves are at the same level.

               18
           /       \  
         15         30  
        /  \        /  \
      40    50    100   40


               18
           /       \  
         15         30 
         
 A Perfect Binary Tree of height h (where height is the number of nodes on the path from the root to leaf) has 2h – 1 node.
 
 ## Balanced Binary Trees
 A binary tree is balanced if the height of the tree is O(Log n) where n is the number of nodes. For Example, AVL tree maintains O(Log n) height by making sure that the difference between heights of left and right subtrees is 1. Red-Black trees maintain O(Log n) height by making sure that the number of Black nodes on every root to leaf paths are same and there are no adjacent red nodes. Balanced Binary Search trees are performance wise good as they provide O(log n) time for search, insert and delete.



