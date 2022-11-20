#pragma once

#include "quantum.h"

#define kXX KC_NO

#define LAYOUT_tkl_ansi( \
    k01,  k02, k03, k04, k05,   k06, k07, k08, k09,   k0A, k0B, k0C, k0D,    k0E, k0F, k0G, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D,    k1E, k1F, k1G, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C, k2D,    k2E, k2F, k2G, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B,      k3D,                   \
    k40,      k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A,      k4C,         k4F,      \
    k50, k51, k52,                k55,                k58, k59, k5A, k5C,    k5E, k5F, k5G  \
) { \
    { kXX, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E, k0F, k0G }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D, k1E, k1F, k1G }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C, k2D, k2E, k2F, k2G }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, kXX, k3D, kXX, kXX, kXX }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, kXX, k4C, kXX, kXX, k4F, kXX }, \
    { k50, k51, k52, kXX, kXX, k55, kXX, kXX, k58, k59, k5A, kXX, k5C, kXX, k5E, k5F, k5G }  \
}
