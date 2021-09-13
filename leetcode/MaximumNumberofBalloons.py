class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        balloon=[text.count('b'), text.count('a'), text.count('l')//2, text.count('o')//2, text.count('n')]
        
        return min(balloon)
