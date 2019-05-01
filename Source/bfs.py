graph = {'1': ['2','3'],
         '2': ['1','3','4','5'],
         '3': ['1','2','5','7','8'],
         '4': ['2','5'],
         '5': ['2','3','4','6'],
         '6': ['5'],
         '7': ['3','8'],
         '8': ['3','7']}

def bfs(graph, start):
    visited = []
    queue = [start]
 
    while queue:
        node = queue.pop(0)
        if node not in visited:
            visited.extend(node)
            neighbours = graph[node]
            for neighbour in neighbours:
                queue.extend(neighbour)
    return visited
 
print(bfs(graph,'1'))
 

