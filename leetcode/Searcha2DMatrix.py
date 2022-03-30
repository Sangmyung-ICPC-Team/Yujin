class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        def find_row(i):
            if(i<len(matrix) and matrix[i][0]<=target):
                return find_row(i+1)
            else:
                return i-1
            
            
        def find_col(i):
            left,right=0,len(matrix[i])-1
            while left<=right:
                mid=(left+right)//2
                if matrix[i][mid]==target:
                    return True
                elif matrix[i][mid]<target:
                    left=mid+1
                else:
                    right=mid-1
                    
            return False
            
        return find_col(find_row(0))
