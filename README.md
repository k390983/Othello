## About The Project

![Othello gif](../assets/othello.gif)

This is an Othello game with an AI that is able to see 5 turns in the future and place a piece in the best position using  alpha-beta pruning, an optimized version of the min-max algorithm. 

The min-max algorithm is a decision making algorithm that tries to find the optimal move, assuming that the opponent also plays optimally. It is often used in turn based, 2 player games. 

Because the min-max algorithm checks every possible move, it is not optimized at all. Alpha-beta pruning solves this problem by cutting of branches when a better move already exists, reducing  computation time greatly. 

## Installation

1. Download the repository
2. Run the program by clicking on *Othello.exe*
> **If the screen is to big please change the console font size and restart the game.**     

## How To Play

First, choose if you want to play against the AI or against another person.

Choose where you want to play a piece (you can place pieces on the red marks) with the arrow keys and place it with the enter key. Each piece played must be played in a position that flanks at lest one of the opponent's pieces. The pieces that were flanked are turned over to show the player's colour.

### Controls

| Key	| Action	|
|---|---|
| Arrow Keys | Choose where to place your piece |
| Enter Key | Place the piece	|
| Back Space Key	| Finish the game	|

## Roadmap

See [open issues](https://github.com/k390983/Othello/issues) for planned features and issues.

