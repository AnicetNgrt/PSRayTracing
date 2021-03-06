#pragma once

#include "Vec3.h"

class ITexture {
public:
    virtual ~ITexture() NOEXCEPT = default;

    virtual Vec3 value(const rreal u, const rreal v, const Vec3 &p) const NOEXCEPT = 0;
};
