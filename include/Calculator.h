#pragma once

/**
 * @brief A simple calculator class.
 *
 * Provides basic arithmetic operations.
 */
class Calculator {
public:
    /**
     * @brief Adds two integers.
     *
     * @param a First integer.
     * @param b Second integer.
     * @return int The sum of a and b.
     */
    int add(int a, int b);

    /**
     * @brief Subtracts the second integer from the first.
     *
     * @param a First integer.
     * @param b Second integer.
     * @return int The result of a - b.
     */
    int subtract(int a, int b);

    /**
     * @brief Multiplies two integers.
     *
     * @param a First integer.
     * @param b Second integer.
     * @return int The product of a and b.
     */
    int multiply(int a, int b);

    /**
     * @brief Divides the first integer by the second.
     *
     * @param a First integer.
     * @param b Second integer.
     * @return double The result of a / b.
     * @throw std::invalid_argument if b is zero.
     */
    double divide(int a, int b);
};


/**
 * @brief Helper function to calculate the factorial of a number.
 */
int factorial(int n);

/**
 * @brief Helper function to calculate the nth Fibonacci number.
 */
int fibonacci(int n);

/**
 * @brief Helper function to calculate the nth Fibonacci number using a recursive algorithm.
 */
int fibonacci_recursive(int n);


/**
 * @brief Shapes enum class for basic shapes.
 */
enum class Shapes {
  /// Comment 1
  Circle,
  /// Comment 2
  Rectangle,
  /// Comment 3
  Triangle
};

/**
 * @brief Vegatables enum for basic vegetables.
 */
enum Vegetables {
  /// Comment 1
  Tomato,
  /// Comment 2
  Potato,
  /// Comment 3
  Carrot
};