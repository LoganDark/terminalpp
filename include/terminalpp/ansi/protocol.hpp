#pragma once

#include "../core.hpp"
#include "control_characters.hpp"
#include "charset.hpp"
#include "csi.hpp"
#include "dec_private_mode.hpp"
#include "graphics.hpp"
#include "mouse.hpp"
#include "osc.hpp"
#include "ss3.hpp"
#include "../detail/ascii.hpp"

//* =========================================================================
/// \namespace terminalpp::ansi
/// \brief Low-level ANSI terminal constants and operations.
//* =========================================================================
namespace terminalpp { namespace ansi {

// Parameter Separator
static constexpr char const PS = terminalpp::detail::ascii::SEMI_COLON;

}}
