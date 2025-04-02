# Perfect-Bookshelf-Optimizer

I love reading! My personal library holds more than 300 physical copies of books (we don't talk about the countless epubs-ebooks I have haha!)

So, I know how important it is to organize books in a way that feels just right. Books aren’t just pages and covers; they’re stories, memories, and adventures waiting to be discovered. That’s why I decided to create a solution for the perfect bookshelf setup.

## Problem

I needed to figure out the minimum width required to store all my books across `k` levels, ensuring that no level gets too wide. Each book has its own unique thickness, and I wanted the arrangement to be as space-efficient as possible — because let’s face it, more space means room for more books!

## How It Works

1. **Binary Search**: I use binary search to find the smallest "max width" that can fit all the books.
2. **Greedy Partitioning**: For each width, I check if it's possible to arrange the books into `k` levels by greedily placing books on each level without exceeding the width.

## Example
<img width="890" alt="Screenshot 2025-04-02 at 12 46 52 PM" src="https://github.com/user-attachments/assets/8e4c3537-74b8-457e-95fa-4eaeb57f7607" />

### Input:
Number of books (n): 10

Number of level (k): 2

2 5 8 10 4 6 9 18 3 7

### Output:

Minimum bookshelf width: 37

The result is the smallest width where all my books fit perfectly into 2 levels. No shelf is too cramped!

## Why It Matters

Books are a huge part of who I am, and organizing them properly ensures they stay accessible, neat, and ready to be enjoyed. This solution helps me (and you) create a bookshelf that fits not just the books, but also the joy of reading. Happy shelving! 📚
