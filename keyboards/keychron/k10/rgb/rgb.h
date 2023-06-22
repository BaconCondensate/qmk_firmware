#pragma once

#include "quantum.h"

#if defined(KEYBOARD_keychron_k10_rgb_ansi)
    #include "ansi.h"
#elif defined(KEYBOARD_keychron_k10_rgb_iso)
    #include "iso.h"
#endif

