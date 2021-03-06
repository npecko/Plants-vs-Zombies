#ifndef CONSTANTS
#define CONSTANTS

#include "SDL.h"
#include <string>

static const std::string WINDOW_NAME = "Flora vs. Undead";
static const int WINDOW_WIDTH = 1280;
static const int WINDOW_HEIGHT = 720;

static const int GAME_FONT_SIZE = 300;

static const std::string PLAYER_NAME = "Gosho";
static const std::string GRASS_1_ID = "grass1";
static const std::string GRASS_2_ID = "grass2";
static const std::string INVENTORY_ID = "inventory";
static const std::string PEA_SHOOTER_ID = "peashooter";
static const std::string PEA_SHOOTER_1_ID = "peashooter1";
static const std::string PEA_SHOOTER_2_ID = "peashooter2";
static const std::string SNOW_PEA_ID = "snowpea";
static const std::string SNOW_PEA_1_ID = "snowpea1";
static const std::string SNOW_PEA_2_ID = "snowpea2";
static const std::string CACTUS_ID = "cactus";
static const std::string CACTUS_1_ID = "cactus1";
static const std::string CACTUS_2_ID = "cactus2";
static const std::string PEA_ID = "pea";
static const std::string ICE_ID = "ice";
static const std::string SPIKE_ID = "spike";
static const std::string WORKER_ID = "worker";
static const std::string CONE_ID = "cone";
static const std::string BUCKET_ID = "bucket";

static const std::string MAIN_MENU_BACKGROUND_ID = "mainmenu";
static const SDL_Rect BACKGROUND_POSITION = { 0, 0, 1280, 720 };

static const std::string PLAY_BACKGROUND_ID = "playbackground";
static const SDL_Rect PLAY_BACKGROUND_POSITION = { 0, 0, 1280, 720 };

static const std::string PAUSE_BACKGROUND_ID = "pausebackground";
static const SDL_Rect PAUSE_BACKGROUND_POSITION = { 0, 0, 1280, 720 };

static const std::string GAME_OVER_ID = "gameover";
static const SDL_Rect GAME_OVER_POSITION = { 0, 0, 1280, 720 };

static const std::string LEVEL_1_ID = "level1";
static const SDL_Rect LEVEL_1_POSITION = { 0, 0, 1280, 720 };

static const std::string LEVEL_2_ID = "level2";
static const SDL_Rect LEVEL_2_POSITION = { 0, 0, 1280, 720 };

static const std::string LEVEL_3_ID = "level3";
static const SDL_Rect LEVEL_3_POSITION = { 0, 0, 1280, 720 };

static const std::string PLAY_BUTTON_ID = "playbutton";
static const SDL_Rect PLAY_BUTTON_POSITION = { 100, 570, 400, 100 };

static const std::string EXIT_BUTTON_ID = "exitbutton";
static const SDL_Rect EXIT_BUTTON_POSITION = { 780, 570, 400, 100 };

static const std::string PAUSE_BUTTON_ID = "pausebutton";
static const SDL_Rect PAUSE_BUTTON_POSITION = { 970, 620, 300, 90 };

static const std::string RESUME_BUTTON_ID = "resumebutton";
static const SDL_Rect RESUME_BUTTON_POSITION = { 427, 100, 400, 100 };

static const std::string RESTART_BUTTON_ID = "restartbutton";
static const SDL_Rect RESTART_BUTTON_POSITION = { 427, 300, 400, 100 };

static const std::string EXIT_BUTTON_2_ID = "exitbutton2";
static const SDL_Rect EXIT_BUTTON_2_POSITION = { 427, 500, 400, 100 };

static const std::string NEXT_BUTTON_ID = "nextbutton";
static const SDL_Rect NEXT_BUTTON_POSITION = { 427, 590, 400, 100 };

static const std::string FINISH_BUTTON_ID = "finishbutton";
static const SDL_Rect FINISH_BUTTON_POSITION = { 427, 590, 400, 100 };

static const std::string RETRY_BUTTON_ID = "retrybutton";
static const SDL_Rect RETRY_BUTTON_POSITION = { 100, 570, 400, 100 };

static const std::string SUNLIGHT_ID = "sunlight";
static const SDL_Rect SUNLIGHT_POSITION = { 10, 620, 200, 90 };

static const std::string SUNLIGHT_LABEL_ID = "sunlightlabel";
static const SDL_Rect SUNLIGHT_LABEL_POSITION = { 110, 620, 90, 90 };

static const SDL_Color SOLID_BLACK = { 0, 0, 0, 255 };
static const SDL_Color YELLOW = { 255, 255, 0, 255 };
static const SDL_Color CYAN = { 0, 255, 255, 255 };

static const int UPDATE_INTERVAL_MILLIS = 3000;
static const int ZOMBIE_INTERVAL_MILLIS = 10000;

static const int PROJECTILE_SPEED = 2;
static const int PROJECTILE_SIZE = 30;

static const int ZOMBIE_SPEED = 60;


#endif // CONSTANTS
