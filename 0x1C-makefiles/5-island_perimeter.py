#!/usr/bin/python3
"""Island Perimeter module"""
def island_perimeter(grid):
    """function returns perimeter of the island described in grid"""
    i = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for j, k in enumerate(grid):
        for l, m in enumerate(n):
            if m == 1:
                if j == 0 or grid[j - 1] != 1:
                    i+=1
                    if l == 0 or grid[j][l - 1] != 1:
                        i+=1
                        if l == 0 or grid[j][l + 1] != 1:
                            i+=1
                            if j == length or grid[j + 1][l] != 1:
                                i+=1
    return i
