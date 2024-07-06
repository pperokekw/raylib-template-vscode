#include <stdio.h>
#include "raylib.h"

#define NO_EXPAND(a) #a
#define STR(a) NO_EXPAND(a)
#define FIND_ASSET(AssetPath) STR(CONTENT_PATH) AssetPath
#define FIND_CONFIG(ConfigPath) STR(CONFIG_PATH) ConfigPath

int main(void)
{
	const int screenWidth = 400;
	const int screenHeight = 400;
	InitWindow(screenWidth, screenHeight, "TEMPLATE RAYLIB");

	SetTargetFPS(60);

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(DARKGRAY);
		DrawFPS(100, 100);
		DrawText("C template for RAYLIB in VScode", (screenWidth / 10), 200, 20, YELLOW);

		EndDrawing();
	}
	return 0;
}
