#pragma once
#include "Tile.h"

namespace Engine
{
    class Map
    {
    public:
        Map(int sizeX, int sizeY, int sizeZ);
        ~Map();

        Tile ****tiles;
    };
} 

