class Solution(object):
    def isPalindrome(self, x):
        temp = str(x)
        new_temp = ''
        
        for i in range(len(temp)) :
            new_temp = temp[i] + new_temp
        
        if new_temp == temp :
            return True
        else : 
            return False