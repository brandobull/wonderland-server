#pragma once

#ifndef __BEHAVIORSTATES__H__
#define __BEHAVIORSTATES__H__

#include <string>
#include <cstdint>

#include "dCommonVars.h"

enum States : BEHAVIORSTATE {
    HOME_STATE = 0,                         //!< The HOME behavior state
    CIRCLE_STATE,                           //!< The CIRCLE behavior state
    SQUARE_STATE,                           //!< The SQUARE behavior state
    DIAMOND_STATE,                          //!< The DIAMOND behavior state
    TRIANGLE_STATE,                         //!< The TRIANGLE behavior state
    STAR_STATE                              //!< The STAR behavior state
};

#endif  //!__BEHAVIORSTATES__H__
