#!/usr/bin/python3
"""Function to calculate island perimeter
"""

def island_perimeter(grid):
    """Returns perimeter of island described in grid
    Args:
        grid (list): Nested list of ints described island
    Returns:
        int: perimeter of island
    """
    perimeter = 0
    
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            
            # Check top edge
            if i == 0 or grid[i-1][j] == 0:
                perimeter += 1
                
            # Check bottom edge 
            if i == len(grid)-1 or grid[i+1][j] == 0:
                perimeter += 1
                
            # Check left edge
            if j == 0 or grid[i][j-1] == 0:
                perimeter += 1
                
            # Check right edge
            if j == len(grid[i])-1 or grid[i][j+1] == 0:
                perimeter += 1
                
    return perimeter
