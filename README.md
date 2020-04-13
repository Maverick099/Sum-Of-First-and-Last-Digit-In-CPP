# Sum Of First and Last Digit In C++

## *This is a random c++ code to find the sum of first and last digit of a given number. This code works even if the first digit is Zero '0'.*

eg:
if the input number is `1234` then the sum of the first digit ie. `1` and last digit ie. `4` will be equal to `5`.
Which is very easy to find using the `while(){}` and the `%` operator. 

**But if the number is `01234` then the interpreter expluces the preceding `0` if the input is taken as int then the ans will be `5` again but the ans is should be 4 because the first digit is 0 and the last digit is `4` and the addition is `4`.** 

The above problem is tacked with taking the input as `string` and running throug a simple `if-else` statement and converting the `string` input to `int` using the `stoi()` funnction.

