#copyright Aman-Verma-28


introductionToBFS = """
Breadth First Traversal (or Search) for a graph is similar to Breadth First Traversal of a tree. The only catch here is, unlike trees, graphs may contain cycles, so we may come to the same node again. To avoid processing a node more than once, we use a boolean visited array. For simplicity, it is assumed that all vertices are reachable from the starting vertex. 

For example, in the following graph, we start traversal from vertex 2. When we come to vertex 0, we look for all adjacent vertices of it. 2 is also an adjacent vertex of 0. If we don’t mark visited vertices, then 2 will be processed again and it will become a non-terminating process. A Breadth First Traversal of the following graph is 2, 0, 3, 1.
"""

# CODE

from collections import deque
# to store the graph in optimal data structure

# Adjacency List for graph representation

def adjacencyList():
    n, m = map(int,input().split())
    graph_list = {i:[] for i in range(1,n+1)}
    for i in range(m):
        a, b = map(int, input().split())
        graph_list[a].append(b)
        graph_list[b].append(a)

    return graph_list

def BFS(graph):
    v=len(graph)
    queue=deque()
    visited=[0]*(v+1)
    bfs=[]
    # BFS of graph is stored in this array
    count=0 # for the number of components
    for i in range(1,v+1):
        if visited[i] == 0:
            queue.append(i)
            visited[i] = 1
            count+=1
            # bfs.append(i)
            while len(queue)!=0:
                j=queue.popleft()
                bfs.append(j)
                for x in graph[j]:
                    if visited[x]==0:
                        queue.append(x)
                        visited[x]=1
    print("Number of components:",count)
    # Printing the number of connected components in the graph
    return bfs


graph=(adjacencyList())
# Input the graph
print(*BFS(graph))
# Prints the BFS traversal of graph by unziping it
