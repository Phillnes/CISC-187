## Question

Dijkstra's algorithm is based on finding a minimum value for a potential path in a graph. Graphs with a negative weight edge involved can keep decreasing infinitely, meaning that there is no minimum. The algorithm goes by numerical value, it could reach an end if the amount lost is less than the positive weight immediately after (meaning a minimum value is still possible), but a negative weight edge that could be used repeatedly to lower the net value will make the graph impossible to calculate.

## Example

If the weight of a graph represents a change in temperature from travelling in one location to another, such as a graph representing roads between a snow-covered mountain peak, a desert, and three temperate parks in the middle. Positive weight is going from the mountain peak to one of the parks, or towards the desert. Going from the desert to one of the parks, or anywhere to the mountain peak, is a negative weight. From here, finding a path with the minimum weight is impossible, as an endless loop of travelling can be performed. (If this was accurate, the net weight would always be zero, since the temperature lost in one direction would logically be the same as gained from going the opposite direction. This still faces a problem where a graph's path can keep adding more edges yet retain the same value. If, somehow, traveling to the peak has a greater negative value than the positive value of going to one of the parks, then repeatedly looping to the peak will lower the net weight.)

## Video Explanation

https://sdccd.us-west-2.instructuremedia.com/embed/10610d86-7733-416d-b0bc-0b7f61389e44
