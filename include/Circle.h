#pragma once

#include "Shape.h"




/**
 * @brief Circle class derived from Shape.
 *
 * Represents a circle with a given radius.
 */
class Circle : public Shape {
public:
    /**
     * @brief Constructs a new Circle object.
     *
     * @param radius Radius of the circle.
     */
    Circle(double radius);

    /**
     * @brief Calculates the area of the circle.
     *
     * @return double The area of the circle.
     */
    double area() const override;

    /**
     * @brief Calculates the perimeter of the circle.
     *
     * @return double The perimeter of the circle.
     */
    double perimeter() const override;

    /**
     * @brief bar stuff
     */
    template <typename T>
    void bar(Shape& s, T value = T(), const char* name = "default") {}


    void foo(Test t) {}

private:
    double radius_; ///< Radius of the circle.
};

/**
 * @brief Helper function to calculate the circumference of a circle.
 */
double circumference(double radius);

/**
 * @brief Helper function to calculate the diameter of a circle.
 */
double diameter(double radius);


