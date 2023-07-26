#!/usr/bin/python3
"""
Function that calculates the perimeter of the island
"""


def island_perimeter(grid):
    """ Initialises the island perimeter function
    Returns: the perimeter of the island
    """
    width = len(grid[0])
    height = len(grid)
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 0:
                if (j > 0 and grid[i][j - 1] == 1):
                    perimeter += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    perimeter += 1
                if (j < width - 1 and grid[i][j + 1] == 1):
                    perimeter += 1
                if (i < height - 1 and grid[i + 1][j] == 1):
                    perimeter += 1
    return perimeter
