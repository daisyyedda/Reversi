# Reversi
A multiplayer Reversi game written using C++ and XWindow (for graphic display). The rules of the game are implemented using the observer software design pattern. Only the header files along with the executable are displayed here due to regulation policies, and implementaion code can be provided upon request.
<br />
<br />
Instructions: 
<br />
new n - Creates a new n * n grid, where n needs to be at least four and even. If there was already an active grid, that grid is destroyed and replaced with the new one.
<br />
play r c - Plays a piece at row r, column c of the colour corresponding to the player who’s move it is. Black plays first.
<br />
<br />
Note: In this version of Reversi, there is no restraint on where you can place your piece, as long as the cell is unoccupied. After each move, the board is displayed on both the graphical window and the command line.
<br />
<br />
A demo:
<br />
<img width="570" alt="Screen Shot 2022-07-10 at 12 16 06 PM" src="https://user-images.githubusercontent.com/65566095/178178917-d462fbdb-127b-4765-8334-e6748149b63c.png">
