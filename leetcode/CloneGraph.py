"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

class Solution:
    def cloneGraph(self, node: 'Node') -> 'Node':
        def dfs(parent):
            if parent==None:
                return None
            
            visited[parent]=Node(parent.val)
            for child in parent.neighbors:
                if child not in visited:                
                    visited[parent].neighbors.append(dfs(child))
                else:
                    visited[parent].neighbors.append(visited[child])
                
            return visited[parent]
        
        visited={}
        return dfs(node)
    
    
