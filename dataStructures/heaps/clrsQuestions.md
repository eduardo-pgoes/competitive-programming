# Problem 1
## Question
What are the minimum and maximum numbers of elements in a heap of height h?

## Answer
Your usual heap is like a complete binary tree, so in the maximum case, you'll fill out all the possible nodes in the tree. Something like:

h = 1 => n = 1
h = 2 => n = 1 + 2
h = 3 => n = 1 + 2 + 2²
h = 4 => n = 1 + 2 + 2² + 2³

Note each full level (depth h) has 2^{h-1} nodes, since there's two children for each node in the layer above (where h' = h - 1), and noting the total number of nodes there is the sum of h terms in a geometric series with n_0 = 1, q = 2. This winds up as `2^{h+1} - 1`. 

For the minimum case, you'll fill out all `h - 1` nodes before the `h`th layer and add one node to it - `2^{h} - 1 + 1`, which is `2^h`.

# Problem 2
## Question
Show that an n-element heap has height `floor(lg n)`.

## Answer
Let's start off by noting this logarithm is binary (since we're looking at a binary tree).

As we've seen above, we note that the minimum number of elements for a heap with height `h` is `2^h`. The maximum number of elements is `2^{h+1} - 1` and a new height would be achieved at `2^{h+1}`.

We can safely assume `2^{h+1} - 1 <= 2^{h+1}`, so `lg(2^{h+1} - 1) <= lg(2^h) + 1`, where `n = 2^h` in the case the tree has the maximum allowed number of elements.
In the smallest possible case, `lg(2^h) = h`.

We can safely assume `n` lies between `2^h` and `2^{h+1} - 1`. Therefore, `lg(n) <= h <= lg(n) + 1` - `floor(lg n)` is the expression that maps `h` to an integer in this case.