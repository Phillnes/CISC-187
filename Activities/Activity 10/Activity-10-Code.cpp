# include <iostream>
using namespace std;

breadthFirst(int[] start)
{
  Queue<int[]> frontierQueue;
  int[][] discoveredSet;
  frontierQueue.enqueue(start);

  while (!fronttierQueue.isQueueEmpty())
    {

      int[] currentV = frontierQueue.dequeue(graph[][]);
      //Loop that counts every instance where mapGraph[start][i] is 1, this indicates that the vertices are connected by an edge.
      for (int i = 0; i < 10; i++)
      {
        if (start : graph[][i] == 1 && !find(discoveredSet().begin, discoveredSet().end, adjV))
          {
          adjV = ;
          frontierQueue.enqueue(graph[i][]);//The vertex that is adjacent to the one being searched is added to the queue.
          discoveredSet().add(adjV);
          }
      }
    }
}

depthFirst(start)
{
  Stack<int[]> searchStack;


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

  breadthFirst(mapGraph);
  depthFirst(mapGraph);
}
