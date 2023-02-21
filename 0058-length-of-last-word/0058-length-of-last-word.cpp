
class Solution {
public:
    int lengthOfLastWord(string s) {

        string lastWord;
        bool stop = false;
        int wordLength = 0;

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                lastWord = s[i] + lastWord;
                stop = true;
                wordLength += 1;
            }

            else if (s[i] == ' ' && stop == true)
            {
                break;
            }
        }
        return wordLength;
    }
    
};

