# include <iostream>
# include "List.h"
using namespace std;

//Code to move a single node to its own array, for moving rows in the graph to the stack/queue.
int[] moveNode(int[][] graph, int x)
{
  int[10] tempVertex;
  for (y = 1; y < 10; y++)
  {
    tempVertex[y] = graph[x][y];
  }
  return tempVertex;
}

//"start" will be the graph overall, with n being the initial vertex, represented by the row.
breadthFirst(int[][] start, int n)
{
  Queue<int[]> frontierQueue;
  List<int[]> discoveredSet;
  frontierQueue.enqueue(moveNode(start, n));
  discoveredSet.insertAtFront(moveNode(start, n));

  while (!fronttierQueue.isQueueEmpty())
    {
      int[] currentV = frontierQueue.dequeue();
      //Loop that counts every instance where mapGraph[n][i] is 1, this indicates that the vertices are connected by an edge.
      for (int i = 0; i < 10; i++)
      {
        if (start[n][i] == 1 && !find(discoveredSet().begin, discoveredSet().end, adjV))
          {
          adjV = moveNode(start, n);
          frontierQueue.enqueue(adjV);//The vertex that is adjacent to the one being searched is added to the queue.
          discoveredSet().add(adjV);
          }
      }
    }
}

depthFirst(int[][] start, int n)
{
  Stack<int[]> searchStack;
  searchStack.push(moveNode(start, n));
  List<int[]> visitedSet;

  while (!searchStack.empty())
    {
      int[] currentV = searchStack.pop();
  
      for (int i = 0; i < 10; i++)
      {
        if (start[n][i] == 1 && !find(visitedSet().begin, visitedSet().end, adjV))
          {
          adjV = moveNode(start, n);
          frontierQueue.enqueue(adjV);
          visitedSet().add(adjV);
          searchStack.push(adjV);
          }
      }
    }
}

int main()
{
  //0: Residential Area.
  //1: Farms.
  //2: Power Plant.
  //3: Wealthy Side.
  //4: City Hall.
  //5: Construction Area.
  //6: Downtown.
  //7: Entertainment District.
  //8: Beach.
  //9: Forest.
  int mapGraph[10][10] = 
  {
    {0, 1, 2, 1, 1, 2, 2, 1, 2, 2},//Residential Area.
    {1, 0, 1, 2, 2, 3, 3, 2, 3, 3},//Farms.
    {2, 1, 0, 1, 3, 4, 4, 3, 4, 4},//Power Plant.
    {1, 2, 1, 0, 2, 3, 3, 2, 3, 3},//Wealthy Side.
    {1, 2, 3, 2, 0, 1, 1, 2, 3, 3},//City Hall.
    {2, 3, 4, 3, 1, 0, 1, 2, 3, 3},//Construction Area.
    {2, 3, 4, 3, 1, 1, 0, 1, 2, 2},//Downtown.
    {1, 2, 3, 2, 2, 2, 1, 0, 1, 1},//Entertainment District.
    {2, 3, 4, 3, 3, 3, 2, 1, 0, 1},//Beach.
    {2, 3, 4, 3, 3, 3, 2, 1, 1, 0}//Forest.
  };

  breadthFirst(mapGraph, 0);
  depthFirst(mapGraph, 0);
}
