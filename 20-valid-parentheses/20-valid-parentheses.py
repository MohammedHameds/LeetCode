class Solution:
    def isValid(self, s):
        if s == "":
            return True
        if len(s) < 2:
            return False

        pair_brkts = {
            "{" : "}",
            "(" : ")",
            "[" : "]"
            }
        stack = []

        for i in s:
            if i in pair_brkts:
                stack.append(i)                               
            else:
                if len(stack) == 0 or pair_brkts[stack.pop()] != i:   
                    return False
        if len(stack) > 0:                                         
            return False
        return True
