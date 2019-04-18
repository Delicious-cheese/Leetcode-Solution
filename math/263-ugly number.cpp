题目：
编写一个程序判断给定的数是否为丑数。

丑数就是只包含质因数 2, 3, 5 的正整数。

示例 1:
输入: 6
输出: true
解释: 6 = 2 × 3

示例 2:
输入: 8
输出: true
解释: 8 = 2 × 2 × 2

示例 3:
输入: 14
输出: false 
解释: 14 不是丑数，因为它包含了另外一个质因数 7。


思路：
将该数尽可能除去2，3，5的因子

class Solution {
public:
    bool isUgly(int num) {
        int b[] = {2, 3, 5};
        if(num<=0) return false;
        /*
        for(auto prime : b)
        {
            while(num % prime == 0)
            {
                num /= prime;
            }
        }
        */
        for(int i = 0; i < 3; i++)
        {
            while(num % b[i] == 0)
                num /= b[i];
        }
        return num == 1;
    }
};
