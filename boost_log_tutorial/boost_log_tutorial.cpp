// boost_log_tutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <boost/log/trivial.hpp>

int main()
{
    std::cout << "Hello World!\n";
    BOOST_LOG_TRIVIAL(info) << "info level log about boost_log_totorial " << __FUNCTION__ << "()";
    BOOST_LOG_TRIVIAL(trace) << "trace level log about boost_log_totorial " << __FUNCTION__ << "()";
    BOOST_LOG_TRIVIAL(debug) << "debug level log about boost_log_totorial " << __FUNCTION__ << "()";
    BOOST_LOG_TRIVIAL(warning) << "warning level log about boost_log_totorial " << __FUNCTION__ << "()";
    BOOST_LOG_TRIVIAL(error) << "error level log about boost_log_totorial " << __FUNCTION__ << "()";
    BOOST_LOG_TRIVIAL(fatal) << "fatal level log about boost_log_totorial " << __FUNCTION__ << "()";
    std::cout << "I'm waiting...";
    std::cin.get();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
