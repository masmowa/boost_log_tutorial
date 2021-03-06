// boost_log_tutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <boost/log/core.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/exceptions.hpp>
#include <boost/log/expressions.hpp>

namespace logging = boost::log;

void init_logging()
{
    logging::core::get()->set_filter
    (
        logging::trivial::severity >= logging::trivial::info
    );
}
int main()
{
    init_logging();

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

