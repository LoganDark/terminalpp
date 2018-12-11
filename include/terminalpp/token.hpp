#pragma once

#include "ansi/control_sequence.hpp"
#include "ansi/mouse.hpp"
#include "virtual_key.hpp"
#include <boost/variant.hpp>

namespace terminalpp {

using token = boost::variant<
    terminalpp::virtual_key,
    terminalpp::ansi::mouse::report,
    terminalpp::ansi::control_sequence
>;

}
