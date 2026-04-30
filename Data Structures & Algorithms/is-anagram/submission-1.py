import numpy as np

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        counter = np.zeros(26, dtype=int) 
        n = len(s)

        for i in range(n):
            counter[ord(s[i]) - ord('a')] += 1
            counter[ord(t[i]) - ord('a')] -= 1

        for i in range(26):
            if counter[i] != 0:
                return False
        return True
