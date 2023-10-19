//my stupid ass raylib game.
#include <stdio.h>
#include "raylib.h"

const int screenWidth = 900;
const int screenHeight = 600;
int time = 0; //time variable
static int textPositionXAxis = 10;
int pposX,pposY = 0;
//char title* = "screen_title";
int main() {
  InitWindow(screenWidth, screenHeight, "freaking game");
  SetTargetFPS(60); //run the game at 60 frames per second
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawRectangle(100,100,100,300,RED);
    DrawText("Obi the best coder", textPositionXAxis,40,50,GREEN);
    DrawCircle(50,100,50,ORANGE);
    //some debugging
    printf("Hel");
    //draw my boi
    Texture2D player = LoadTexture("./assets/player.png"); 
    DrawTexture(player,pposX,0,RAYWHITE);
    //DrawRectanglePro(Rectangle{200,200,100,100}, Vector2{0,0},45.0f, RED);
    //character Movement 
  
    if (IsKeyDown(KEY_D)) {
      pposX+=5.0f;
    } else if (IsKeyDown(KEY_A)) {
        pposX -= 5.0f;
    }
    /*
    if () {
       
    } else if () {
        
        
    }
    */

    textPositionXAxis += 5;
    //change the color of the text every 10pixel
    /*
    if (textPositionXAxis>10) {
        
    }
    */
    if(textPositionXAxis-10 >= screenWidth) {
        textPositionXAxis = -450;
    }
    time += 1;
    EndDrawing();
  }
}
