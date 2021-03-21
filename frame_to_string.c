//
// Created by seann on 21/03/2021.
//

#include "frame_to_string.h"

#define rgbvToString(str, integer) \
    ({ \
        int in = (integer); \
        int len = in >= 100 ? 3 : (in >= 10 ? 2 : 1); \
        for(int i = 0; i < len; i++) \
        { \
            str[len - 1 - i] = '0' + (in % 10); \
            in /= 10; \
        } \
        str[len] = '\0'; \
    })

