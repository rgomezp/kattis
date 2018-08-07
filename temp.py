def maxAreaOfIsland(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        m_grid = grid
        for row in grid:
                for j in row:
                    if j == 1:
                        explore(grid, row, j)

    def explore(self, m_grid, row, j):
        if m_grid[row][j] == 0:
            return 0
        else:
            #check up
            if m_grid[row-1][j] == 1 and m_visited[row-1][j] == 0:
                up = 1 + explore(m_grid, row-1, j)
            #check down
            if m_grid[row+1][j] == 1 and m_visited[row+1][j] == 0:
                down = 1 + explore(m_grid, row+1, j)
            #check right
             if m_grid[row][j+1] == 1 and m_visited[row][j+1] == 0:
                right = 1 + explore(m_grid, row, j+1)
            #check left
            if m_grid[row][j-1] == 1 and m_visited[row][j-1] == 0:
                left = 1 + explore(m_grid, row, j-1)
            return up+down+right+left
