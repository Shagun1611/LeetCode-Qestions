/**Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.

Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.

 

Example 1:

Input: num1 = "2", num2 = "3"
Output: "6"
Example 2:

Input: num1 = "123", num2 = "456"
Output: "56088"
 

Constraints:

1 <= num1.length, num2.length <= 200
num1 and num2 consist of digits only.
Both num1 and num2 do not contain any leading zero, except the number 0 itself. */


class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();
        if (num1 == "0" || num2 == "0") return "0";
        
        std::vector<int> result(n + m, 0);

        // Reverse the strings to simplify the multiplication and addition
        std::reverse(num1.begin(), num1.end());
        std::reverse(num2.begin(), num2.end());

        // Multiply each digit of num1 with each digit of num2
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + result[i + j];
                result[i + j] = sum % 10;
                result[i + j + 1] += sum / 10;
            }
        }

        // Remove leading zeros and convert the result to a string
        while (result.size() > 1 && result.back() == 0) {
            result.pop_back();
        }

        // Convert the result vector back to a string
        std::string product;
        for (auto it = result.rbegin(); it != result.rend(); ++it) {
            product.push_back(*it + '0');
        }

        return product;
    }
};