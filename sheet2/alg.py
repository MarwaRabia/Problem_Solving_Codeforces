# graph={0:[1,8,3],
#    1:[0,7],
#    2:[7,3,5],
#    3:[0,2,4],
#    4:[3,8],
#    5:[6,2],
#    6:[5],
#    7:[1,2],
#    8:[0,4]}
# # def dfs(graph,source):
# #     if (source is None or source not in graph):
# #         return "Not invalid"
# #     path=[]
# #     stack=[source]
# #     while (len(stack)!=0):
# #         s=stack.pop()
# #         if s not in path:
# #             path.append(s)
# #         if s not in graph:
# #             continue
# #         for neighbour in graph[s]:
# #              stack.append(neighbour)
# #     return path
# # def recursive_dfs(graph, source,path = []):

# #        if source not in path:

# #            path.append(source)

# #            if source not in graph:
# #                # leaf node, backtrack
# #                return path

# #            for neighbour in graph[source]:

# #                path = recursive_dfs(graph, neighbour, path)


#     #   return path
# def dfs_non_recursive(graph, source):

#        if source is None or source not in graph:

#            return "Invalid input"

#        path = []

#        stack = [source]

#        while(len(stack) != 0):

#            s = stack.pop()

#            if s not in path:

#                path.append(s)

#            if s not in graph:

#                #leaf node
#                continue

#            for neighbor in graph[s]:

#                stack.append(neighbor)

#        return " ".join(path)
# DFS_path = dfs_non_recursive(graph,1)
# print(DFS_path)
# print("dld")


from numpy import inf


graph={0:{1:8,2:9},
        1:{3:1,5:7,6:9,0:8},
        2:{0:9,5:6,6:4},
        3:{1:1,7:4},
        4:{6:7,7:7},
        5:{1:7,2:6,7:2},
        6:{1:9,2:4,7:6,4:7},
        7:{3:4,5:2,4:7,6:6}}


costs = {0: 0, 1: inf, 2: inf, 3: inf, 4: inf, 5: inf, 6: inf, 7: inf}
parents = {}

def search(source, target, graph, costs, parents):
    
    nextNode = source
    
    while nextNode != target:
        
        for neighbor in graph[nextNode]:
            

            if graph[nextNode][neighbor] + costs[nextNode] < costs[neighbor]:
                
                costs[neighbor] = graph[nextNode][neighbor] + costs[nextNode]
                
                parents[neighbor] = nextNode
                
            del graph[neighbor][nextNode]
            
        del costs[nextNode]
        
        nextNode = min(costs, key=costs.get)
        
    return parents

result = search(0, 5, graph, costs, parents)

def backpedal(source, target, searchResult):
    
    node = target
    
    backpath = [target]
    
    path = []
    
    while node != source:
        
        backpath.append(searchResult[node])
        
        node = searchResult[node]
        
    for i in range(len(backpath)):
        
        path.append(backpath[-i - 1])
        
    return path
for i in graph:
    print('[{}]: {}'.format(i,backpedal(0, i, result)))