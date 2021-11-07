class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        long i = 0;
        long n = s.size() - 1;
        while (i < n)
        {
            swap(s[i], s[n]);
            i++;
            n--;
        }
    }
};