# ue4-pong
A Unreal Engine 4 implementation of the classic Pong game.

Contains a single game mode where two human players can play against each other.

Development blog entry: https://www.gamedev.net/blogs/entry/2264559-unreal-engine-pong/

## Scenes
Game is split into following scenes:
1. A welcome scene, which contains the main menu.
2. A court scene, which contains the actual gameplay.
3. An end game scene, which contains the results from the court scene.

The list of scene transitions:
* 1 to 2, when a player starts the game by selecting the Start Game.
* 2 to 3, when either player receives the 10th point (i.e. game is over).
* 3 to 1, after the enter key is pressed.

## Features
This Pong implementation contains the following features.
* Each game lasts until either player receives the 10th point.
* Both paddles are controlled by human players.
* Ball velocity is increased on each hit with a paddle.
* Ball movement is being stopped for a second after each reset.
* Ball direction is randomized from four different directions after each reset.
* Paddles are returned to the default position after each reset.

## Screenshots
![alt text](https://github.com/toivjon/ue4-pong/blob/master/Screenshots/welcome-scene.png "WelcomeScene")
![alt text](https://github.com/toivjon/ue4-pong/blob/master/Screenshots/court-scene.png "CourtScene")
![alt text](https://github.com/toivjon/ue4-pong/blob/master/Screenshots/endgame-scene.png "EndGameScene")