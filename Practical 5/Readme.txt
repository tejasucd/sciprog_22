Create a program that displays the Fibonacci series upto n.

The formulae for the Fibonacci series are:
		Fn = Fn−1 + Fn−2 
		F0 = 0 		F1 = 1 
1. Get the user to enter the value of n.
2. Have a function that that has two arguments. On input the arguments have Fn−1 and Fn−2.
On exit they have Fn and Fn−1.
3. Use a loop to find the whole series upto n.
4. Print out the series.



The Inverse Hyperbolic Tangent function can be calculated on a computer in several ways. Dif-
ferent methods behave differently and therefore differ in terms of speed, accuracy, precision and
range of input accepted. Assume that both methods accept only real values whose absolute value
is less than 1.

The hyperbolic arc tangent can be expressed as a Maclaurin series, which is depicted below:
		arctanh(x) =∞∑n=0		x2n+1/2n + 1 , x ∈ ℜ : |x| < 1

Another way to calculate the hyperbolic arc tangent is by using natural logarithms:
		arctanh(x) = 1/2 [ln(1 + x) − ln(1 − x)], x ∈ ℜ : |x| < 1

1. Get the user in enter a real positive number delta.
2. Implement a function artanh1(x) as an approximation to this Maclaurin series. As the series
is infinite, we will set the function to stop when the element in the series is smaller than a
given precision, delta.
3. Implement function artanh2(x) using approximations to natural logarithms. Remember that
natural logarithms are already implemented in the language’s standard math libraries.
4. Write a main that will calculate arctanh(x) where x ∈ [−0.9, 0.9] and sampled every 0.01,
using both methods. Store the results for both methods in separate arrays.
5. Compare the accuracy of each method with each other (to 10 significant figures).

