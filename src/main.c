#include <stdio.h>
#include <raylib.h>
#include "main.h"

int main(int argc, char* argv[]) {
  InitWindow(SCREEN_WIDTH, SCREEN_HIGHT, "Geometry Crash");

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RED);
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
