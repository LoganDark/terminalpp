#pragma once

#include "../token.hpp"
#include <boost/optional.hpp>
#include <vector>

namespace terminalpp { namespace detail {

class parser
{
public :
    parser();

    boost::optional<terminalpp::token> operator()(char input);

private :
    enum class state
    {
        idle,
        cr,
        lf,
        escape,
        arguments,
        mouse0,
        mouse1,
        mouse2,
    };

    boost::optional<terminalpp::token> parse_idle(char input);
    boost::optional<terminalpp::token> parse_cr(char input);
    boost::optional<terminalpp::token> parse_lf(char input);
    boost::optional<terminalpp::token> parse_escape(char input);
    boost::optional<terminalpp::token> parse_arguments(char input);
    boost::optional<terminalpp::token> parse_mouse0(char input);
    boost::optional<terminalpp::token> parse_mouse1(char input);
    boost::optional<terminalpp::token> parse_mouse2(char input);

    state                    state_;
    char                     initialiser_;
    char                     extender_;
    bool                     meta_;
    byte                     mouse_button_;
    coordinate_type          mouse_x_;
    coordinate_type          mouse_y_;
    std::string              argument_;
    std::vector<std::string> arguments_;
};

}}
