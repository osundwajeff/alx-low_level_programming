#!/usr/bin/python3
"""
island perimeter
"""


def island_perimeter(grid):
    """ function to perimeter
    in the grid: 0 represents water
    while 1 represents land.
    Args:
        grid (list): list of integers representing an island
    Returns:
        perimeter of island in the grid.
    """
    width = len(grid[0])
    height = len(grid)
    edge = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1

                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1

                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1

    return size * 4 - edge * 2
