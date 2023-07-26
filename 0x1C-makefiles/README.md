# 0x1C-makefiles :pencil2:

This project contains tasks performed to understand:

* What are make, Makefiles
* When, why and how to use Makefiles
* What are rules and how to set and use them
* What are explicit and implicit rules
* What are the most common / useful rules
* What are variables and how to set and use them

## Tasks
0. make -f 0-Makefile
Create your first Makefile. Name of executable `school`, rules: `all` (the `all` rule builds your executable), and no variables.
1. make -f 1-Makefile
Create your first Makefile. Name of executable `school`, rules: `all` (the `all` rule builds your executable), and variables: `CC` `SRC` (`CC`: compiler to be used; `SRC`: the `.c` files).
2. make -f 2-Makefile
Create your first useful Makefile.
3. make -f 3-Makefile
4. A complete Makefile
5. Create a function `def island_perimeter(grid):` that returns the perimeter of the island described in `grid`:
`grid`is a list of integers
	* 0 represents water zone
	* 1 represents the land zone
	* One cell is a square with side length 1
	* Grid cells are connected horizontally/vertically (not diagonally)
	* Grid is rectangular, width and height don't exceed 100
* Grid is completely surrounded by water and there is one island (or nothing) 
* The island doesn't have "lakes" (water inside that isn't connected to the water around the island)
6. make -f 100-Makefile
