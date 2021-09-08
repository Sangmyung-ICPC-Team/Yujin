class Solution:
    def shiftingLetters(self, s: str, shifts: List[int]) -> str:
        result=""
        length=ord('z')-ord('a')+1
        n=sum(shifts)
        
        for i in range(len(s)):
            result+=chr((ord(s[i])-ord('a')+n)%length+ord('a'))
            n-=shifts[i]
        return result
