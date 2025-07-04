#ifndef CONSTANTS_H
#define CONSTANTS_H

#include "ICS_Color.h"
#include <string>
#include <utility>

#define Vertex std::pair<double, double>

const double PIXELS_PER_BLOCK = 60;

const int SCREEN_BLOCKS_WIDTH = 22;
const int SCREEN_BLOCKS_HEIGHT = 12;

const int WINDOW_WIDTH = PIXELS_PER_BLOCK * SCREEN_BLOCKS_WIDTH;
const int WINDOW_HEIGHT = PIXELS_PER_BLOCK * SCREEN_BLOCKS_HEIGHT;

const int JUMP_FRAMES = 6; // Give user a 100ms buffer for jumping (6/60fps = 100ms)

const double GRAVITY = 94.0408163265;
const double JUMP_VELOCITY = -20.37551020410;
const double SCROLL_SPEED = 10.3761348898;
const double TERMINAL_VELOCITY = 2.6;
const double BACKGROUND_SCROLL_SPEED = 0.8;

const double SECONDS_PER_BLOCK = 1 / SCROLL_SPEED;

const double GRAVITY_PIXELS = GRAVITY * PIXELS_PER_BLOCK;
const double JUMP_VELOCITY_PIXELS = JUMP_VELOCITY * PIXELS_PER_BLOCK;
const double SCROLL_SPEED_PIXELS = SCROLL_SPEED * PIXELS_PER_BLOCK;
const double TERMINAL_VELOCITY_PIXELS = TERMINAL_VELOCITY * PIXELS_PER_BLOCK;
const double BACKGROUND_SCROLL_SPEED_PIXELS = BACKGROUND_SCROLL_SPEED * PIXELS_PER_BLOCK;

const double DEATH_PAUSE_LENGTH = 0.2;

const double SPIKE_HITBOX_OFFSET_X = 0;
const double SPIKE_HITBOX_OFFSET_Y = PIXELS_PER_BLOCK / 4;
const double SPIKE_HITBOX_WIDTH = 16;
const double SPIKE_HITBOX_HEIGHT = 24;

const double END_MENU_WIDTH = 1102;
const double END_MENU_HEIGHT = 838;
const double END_MENU_RATIO = END_MENU_WIDTH / END_MENU_HEIGHT;
const double END_MENU_WIDTH_PIXELS = WINDOW_WIDTH / 3.0 * 2.0;
const double END_MENU_HEIGHT_PIXELS = END_MENU_WIDTH_PIXELS / END_MENU_RATIO;

const Vertex PLAYER_STARTING_POS(PIXELS_PER_BLOCK * 8, PIXELS_PER_BLOCK * 6);

const std::string BLOCK_FILE_NAME = "data/block.bmp";
const std::string PLATFORM_FILE_NAME = "data/platform.bmp";
const std::string PLAYER_IMAGE_FILE = "data/player.bmp";
const std::string SPIKE_FILE_NAME = "data/spike.png";
const std::string LEVEL_COMPLETE_FILE_NAME = "data/level_complete.png";

const ICS_Color END_MENU_TEXT_COLOUR = ICS_Color(253, 208, 48);

#endif //! CONSTANTS_H
