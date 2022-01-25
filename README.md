# division-algorithm
The division algorithm states that given two integers a and d, with , there exists unique integers q and r such that  and , where |d| denotes the absolute value of d. The integer q is the quotient, r is the remainder, d is the divisor, and a is the dividend.   You are to write a program named spILdivision.cpp that will prompt the user for a dividend and divisor and then display the division algorithm's results in the sentence format below (four separate examples are shown):      If a = 17 and d = 3, then q = 5 and r = 2, since 17 = (5)(3) + 2.      If a = 17 and d = -3, then q = -5 and r = 2, since 17 = (-5)(-3) + 2.      If a = -17 and d = 3, then q = -6 and r = 1, since -17 = (-6)(3) + 1.      If a = -17 and d = -3, then q = 6 and r = 1, since -17 = (6)(-3) + 1.  In testing your program, consider the four possible combinations of positive and negative dividends and divisors (as shown above).   The C++ operators for integer division do not conform to the division algorithm. Explain in output displayed to the user of the program when to expect results that disagree with the division algorithm. The program should not attempt to resolve this issue.
