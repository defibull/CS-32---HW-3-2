//
//  maze.cpp
//  Homework 3
//
//  Created by Shashank Khanna  on 2/10/15.
//  Copyright (c) 2015 CS 32. All rights reserved.
//



bool pathExists(string maze[], int nRows, int nCols, int sr, int sc, int er, int ec)
{
    if (sr == er && sc == ec)
        return true;
    maze[sr][sc] = '+';
        //north
    if (maze[sr-1][sc] == '.')
        { if (pathExists(maze, nRows, nCols, sr-1, sc, er, ec))
            return true;}
     if (maze[sr+1][sc] == '.')
        { if (pathExists(maze, nRows, nCols, sr+1, sc, er, ec))
            return true;}
     if (maze[sr][sc-1] == '.')
         { if (pathExists(maze, nRows, nCols, sr, sc-1, er, ec))
             return true;}
     if (maze[sr][sc+1] == '.')
         { if (pathExists(maze, nRows, nCols, sr, sc+1, er, ec))
             return true;}
    
    return false;
    
}

