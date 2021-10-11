#include<stdio.h>
#define V 5 
#define infinty 99999
int l=1;
void printSolution(int dist[][V]);
void floydWarshall (int graph[][V]) {
	int dist[V][V], i, j, k;		
	for (i = 0; i < V; i++)
		for (j = 0; j < V; j++)
			dist[i][j] = graph[i][j];

	
	for (k = 0; k < V; k++) {
		for (i = 0; i < V; i++) {
			for (j = 0; j < V; j++) {
				if (dist[i][k] + dist[k][j] < dist[i][j])
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
         printSolution(dist);
	}
}
void printSolution(int dist[][V]) {
	printf ("\n\t\tD[%d] \n",l++);
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (dist[i][j] == infinty)
				printf("%7s", "infinty");
			else
				printf ("%7d", dist[i][j]);
		}
		printf("\n");
	}
}
int main() {
	int graph[V][V] = { {0, 3, 8, infinty, -4},
						{infinty, 0, infinty, 1, 7},
						{infinty, 4, 0, infinty, infinty},
                        {2, infinty, -5, 0, infinty},
						{infinty, infinty, infinty, 6, 0}
					};
    printf ("\n\t\tD[0] \n");
    for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (graph[i][j] == infinty)
				printf("%7s", "infinty");
			else
				printf ("%7d", graph[i][j]);
		}
		printf("\n");
	}
	floydWarshall(graph);
	return 0;
}
