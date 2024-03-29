﻿#ifndef GAME_GAMEPROPERTIES_HPP_INCLUDEGUARD
#define GAME_GAMEPROPERTIES_HPP_INCLUDEGUARD

#include "color.hpp"
#include "vector.hpp"
#include <palette.hpp>
#include <string>

class GP {
public:
    GP() = delete;

    static std::string GameName() { return "Springer"; }
    static std::string AuthorName() { return "Laguna_999"; }
    static std::string JamName() { return "1hgj352"; }
    static std::string JamDate() { return "2022-01-22"; }

    static jt::Vector2f GetWindowSize() { return jt::Vector2f { 600, 800 }; }
    static float GetZoom() { return 2.0f; }
    static jt::Vector2f GetScreenSize() { return GetWindowSize() * (1.0f / GetZoom()); }

    static jt::Color PaletteBackground() { return GP::getPalette().getColor(2); }
    static jt::Color PaletteFontFront() { return GP::getPalette().getColor(7); }
    static jt::Color PaletteFontShadow() { return GP::getPalette().getColor(1); }

    static jt::Palette getPalette();

    static int PhysicVelocityIterations();
    static int PhysicPositionIterations();
};

#endif
