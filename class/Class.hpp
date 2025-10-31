/**
 * @file class.hpp
 * @author Guigonon Jean-Marc KOTTIN
 * @brief Class in C++
 * @version 1.0
 * @date 2025-10-31
 * 
 * @details
 * This file demonstrates the basic syntax and structure for defining a class in C++.
 * It covers key components such as:
 * - Class declaration and definition
 * - Access specifiers (public, private, protected)
 * - Member variables and member functions
 * - Constructors and destructors
 * 
 * The goal is to provide a clear and concise example for beginners learning object-oriented programming in C++.
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>

/**
 * @brief This is default structure of a class
 * 
 * It's declared using the keyword @c class and has:
 *  - public components which are public methods or/and attributs
 *  - private components which are private methods or/and attributs
 * 
 * The are also special methods used to construct (build) and destruct an instance
 * (an object) of this class.
 * A class can have multiple constructors but only one destructor
 * 
 * See the file @ref /class/Class.hpp for an example.
 * 
 */
class Sample {
public:
    /**
     * @brief Construct a new Sample object
     * 
     * This is the default constructor. It's not necessary to mention it
     * if it doesn't do anything special. In case it's not mentionned, the
     * compiler generate a default one.
     * 
     */
    Sample(): m_var_1(0), m_var_2(0) {}

    /**
     * @brief Construct a new Sample object
     * 
     * This is a custom constructor which help to initialise the two member
     * attributs.
     * 
     * @param var_1 
     * @param var_2 
     */
    Sample(const int &var_1, const int var_2): m_var_1(var_1), m_var_2(var_2) {}

    /**
     * @brief This is a public member function 
     */
    void do_something() const {
        std::cout << "Do something" << std::endl;
    }

private:
    int m_var_1;
    int m_var_2;
};
