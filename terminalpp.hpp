//
// Created by Logan Darklock on 12/11/18.
//

#ifndef TERMINALPP_HPP
#define TERMINALPP_HPP

#include "src/string.cpp"
#include "src/encoder.cpp"
#include "src/colour.cpp"
#include "src/element.cpp"
#include "src/glyph.cpp"
#include "src/attribute.cpp"
#include "src/character_set.cpp"
#include "src/effect.cpp"

#include "src/extent.cpp"
#include "src/point.cpp"
#include "src/virtual_key.cpp"

#include "src/ansi/charset.cpp"
#include "src/ansi/control_sequence.cpp"
#include "src/ansi/mouse.cpp"

#include "src/detail/terminal_charset_control.cpp"
#include "src/detail/terminal_control.cpp"
#include "src/detail/terminal_cursor_control.cpp"
#include "src/detail/element_difference.cpp"
#include "src/detail/parser.cpp"
#include "src/detail/well_known_virtual_key.cpp"

#include "src/manip/terminal_streamer.cpp"

#include "src/ansi_terminal.cpp"
#include "src/screen.cpp"
#include "src/canvas.cpp"

#endif //TERMINALPP_HPP
