class Solution(object):
    def romanToInt(self, s):
       dic = {'I' : 1, 
              'V' : 5,
              'X' : 10,
              'L' : 50,
              'C' : 100,
              'D' : 500,
              'M' : 1000}
    
       output = 0
       input = s
       for letter in range (len(input)) :
        output += dic.get(input[letter],)
        if letter != (len(input))-1 :
         if input[letter] == 'I' and (input[letter+1] == 'V' or input[letter+1] == 'X') :
            output -= dic.get(input[letter])*2
         if input[letter] == 'X' and (input[letter+1] == 'L' or input[letter+1] == 'C') :
            output -= dic.get(input[letter]) *2
         if input[letter] == 'C' and (input[letter+1] == 'D' or input[letter+1] == 'M') :
            output -= dic.get(input[letter]) *2
            
       return output     
