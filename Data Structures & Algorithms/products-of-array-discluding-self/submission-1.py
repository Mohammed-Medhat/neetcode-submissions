class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prefix=[]
        
        for  i in range(len(nums)):
            if(i==0):
                prefix.append(1)
                
            elif(i==1):
                prefix.append(nums[i-1])
            else :
               prefix.append(prefix[i-1]*nums[i-1])
        
        suffix = []
        counter=2
        for i in range(len(nums) - 1, -1, -1):
            if(i==len(nums)-1):
                suffix.append(1)
            elif(i==len(nums)-2):
                suffix.append(nums[len(nums)-1])
            else:
                suffix.append(suffix[counter-1]*nums[i+1])
                counter+=1
            
        revsuffix = list(reversed(suffix))
        output=[]
        for i in range(len(nums)):
            output.append(prefix[i] * revsuffix[i])


        return output