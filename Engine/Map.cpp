#include "Map.h"


namespace Engine
{
    Map::Map(int sizeX, int sizeY, int sizeZ)
    {
        this->tiles = new Tile***[sizeX];
        for (int x = 0; x < sizeX; x++)
        {
            this->tiles[x] = new Tile**[sizeY];
            for (int y = 0; y < sizeY; y++)
            {
                this->tiles[x][y] = new Tile*[sizeZ];
            }
        }
    }


    Map::~Map()
    {
    }
}