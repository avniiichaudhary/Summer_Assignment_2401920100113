/*
Problem: String Compression

Given an array of characters, compress it in-place by replacing consecutive repeating characters with the character followed by its count.

Approach: Traverse the array, count consecutive occurrences of each character, and overwrite the array with the compressed form.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution
{
public:
    int compress(vector<char> &chars)
    {

        int n = chars.size();
        int i = 0;
        int k = 0;

        while (i < n)
        {

            int j = i;

            while (j < n && chars[j] == chars[i])
            {
                j++;
            }

            int count = j - i;

            chars[k++] = chars[i];

            if (count > 1)
            {
                string s = to_string(count);

                for (char c : s)
                {
                    chars[k++] = c;
                }
            }

            i = j;
        }

        return k;
    }
};