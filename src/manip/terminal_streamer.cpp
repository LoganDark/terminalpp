#include "../../include/terminalpp/manip/terminal_streamer.hpp"
#include "../../include/terminalpp/manip/write_string.hpp"

namespace terminalpp {

// ==========================================================================
// TERMINAL_STREAMER::OPERATOR<<(STRING)
// ==========================================================================
terminal_streamer &terminal_streamer::operator<<(string const &text)
{
    return *this << write_string(text);
}

// ==========================================================================
// TERMINAL_STREAMER::OPERATOR<<(STRING)
// ==========================================================================
terminal_streamer &terminal_streamer::operator<<(string &&text)
{
    return *this << write_string(std::move(text));
}

}