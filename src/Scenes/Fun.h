#pragma once

#include "Common.h"
#include "SceneDescriptor.h"

// Just some personal fun scenes, I also use them for testing

namespace Scenes {
    namespace Fun {
        // A multi-layered glass sphere with a blue core, a normal surface sphere, and some fuzzy gold glass
        SceneDescriptor three_spheres(const rreal aspect_ratio);

        // One of the famous images from Turner Whitted's "An improved illumination model for shaded display" (1980)
        // With a mirror sphere, a glass one, and the red/yell checkboard floor
        SceneDescriptor whitted_1980(const rreal aspect_ratio);
    }
}
