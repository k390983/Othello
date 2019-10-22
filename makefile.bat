@ECHO OFF
cd src
ECHO Compiling...
gcc main.c -o Othello -lwinmm
ECHO Moving File...
move "Othello.exe" "../"
PAUSE