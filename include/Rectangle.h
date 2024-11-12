#pragma once

#include "Shape.h"
#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <map>
#include <memory>

/**
 * @brief Rectangle class derived from Shape.
 *
 * Represents a rectangle with a given width and height.
 */
class Rectangle : public Shape {
public:
    /**
     * @brief Constructs a new Rectangle object.
     *
     * @param width Width of the rectangle.
     * @param height Height of the rectangle.
     */
    Rectangle(double width, double height);

    /**
     * @brief Calculates the area of the rectangle.
     *
     * @return double The area of the rectangle.
     */
    double area() const override;

    /**
     * @brief Calculates the perimeter of the rectangle.
     *
     * @return double The perimeter of the rectangle.
     */
    double perimeter() const final override;

    double width_; ///< Width of the rectangle.
    double height_; ///< Height of the rectangle.

     typedef std::vector<int> IntVector;
};



template <typename T, typename U = int>
class DocumentationTestClass {
public:
    // Public type aliases and typedefs
    typedef T FirstType;                  // Template type typedef
    using SecondType = U;                 // Template type using alias
    using ConstFirstType = const T;       // Constant template type
    using BinaryOperation = int;          // Binary Operation int
    // Public member variables
    T publicTVar;                         // Public member variable of type T
    U publicUVar = U();                   // Public member variable of type U
    std::shared_ptr<T> publicSharedPtr;   // Public shared pointer to T
    std::vector<T> publicTVector;         // Public vector of T
    
    // Public methods
    DocumentationTestClass() = default;
    DocumentationTestClass(T tVal, U uVal) : publicTVar(tVal), publicUVar(uVal) {} // Constructor with parameters

    void addElementToPublicVector(const T& element) {
        publicTVector.push_back(element);
    }

    void printPublicVector() const {
        for (const auto& value : publicTVector) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    // Binary operation example
    U performBinaryOperation(BinaryOperation op, U a, U b) const {
        return op ? op(a, b) : U();
    }

protected:
    // Protected type aliases
    typedef std::vector<T> VectorOfT;             // typedef for vector of T
    using MapOfTToU = std::map<T, U>;             // using alias for map<T, U>
    using TPointer = T*;                          // Raw pointer to T
    typedef std::unique_ptr<U> UniquePtrToU;      // typedef for unique_ptr<U>

    // Protected member variables
    VectorOfT protectedTVector;                   // Protected vector of T
    MapOfTToU protectedTToUMap;                   // Protected map of T to U
    UniquePtrToU protectedUniquePtr;              // Protected unique pointer to U

    // Protected methods
    void addElementToProtectedVector(const T& element) {
        protectedTVector.push_back(element);
    }

    void addKeyValueToProtectedMap(const T& key, const U& value) {
        protectedTToUMap[key] = value;
    }

    void printProtectedVector() const {
        for (const auto& value : protectedTVector) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    void printProtectedMap() const {
        for (const auto& pair : protectedTToUMap) {
            std::cout << "{" << pair.first << ": " << pair.second << "} ";
        }
        std::cout << std::endl;
    }

private:
    // Private type aliases
    using ConstVolatileU = const volatile U;      // Const volatile type alias for U
    typedef std::vector<std::vector<T>> NestedVectorOfT; // Nested vector typedef
    
    // Private member variables
    NestedVectorOfT privateNestedVector;          // Private nested vector of T
    ConstVolatileU privateConstVolatileU;         // Private const volatile U
};


/**
 * @brief Helper function to calculate the diagonal of a rectangle.
 */
double diagonal(double width, double height);


/**
 * @brief Helper function to calculate the aspect ratio of a rectangle.
 */
double aspect_ratio(double width, double height);


namespace ShapeName 
{
    int shapeRectangleFunction() { return 0; };   
}