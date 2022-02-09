class Solution:
    def findPairs(self, nums: List[int], k: int) -> int:
        table=defaultdict(int)
        
        for n in nums:
            table[n]+=1
        
        cnt=0
        for key in table:
            if table[key+k]:
                if k==0:
                    if table[key]>=2:
                        cnt+=1
                else:
                    cnt+=1
            else:
                del table[key+k] # 10번째 줄에서 테이블에 존재하지 않는 키를 찾았다면 0으로 초기화가 되는 것을 방지
        return cnt
