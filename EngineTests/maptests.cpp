#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace Engine;

namespace EngineTests
{		
	TEST_CLASS(MapTests)
	{
	public:
		
		TEST_METHOD(MapInit)
		{
			// TODO: Your test code here
            auto sizeX = 2;
            auto sizeY = 3;
            auto sizeZ = 4;
            Map *map = new Map(sizeX, sizeY, sizeZ);
            for (int x = 0; x < sizeX; x++)
                for (int y = 0; y < sizeY; y++)
                    for (int z = 0; z < sizeZ; z++)
                    {
                        map->tiles[x][y][z] = new Tile();
                        Assert::IsNotNull(map->tiles[x][y][z]);
                    }
            Assert::IsNotNull(map);
		}
	};
}