#!/usr/bin/python3
""" This module computes the perimeter of an island"""


def island_perimeter(grid):
    """ island_perimeter:
        Args: grid (list) = list of integers
        Return: the perimeter of island described in grid
    """

    p = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] == 0:
                    p += 1  # top
                if row == (len(grid) - 1) or grid[row + 1][col] == 0:
                    p += 1  # bottom
                if col == 0 or grid[row][col - 1] == 0:
                    p += 1  # left
                if col == (len(grid[0]) - 1) or grid[row][col + 1] == 0:
                    p += 1  # right
    return p