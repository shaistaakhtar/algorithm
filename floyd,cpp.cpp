#include<stdio.h>
#define V 4
#define INF 99999

void print(int dist[][V]);
void floydWarshall (int graph[][V]);
int main()
{
	int graph[V][V] = { {0, 5, INF, 10},
						{INF, 0, 3, INF},
						{INF, INF, 0, 1},
						{INF, INF, INF, 0}
					};

	floydWarshall(graph);
	return 0;
}
void floydWarshall (int graph[][V])
{
	int dist[V][V], i, j, k;
	for (i = 0; i < V; i++)
		for (j = 0; j < V; j++)
			dist[i][j] = graph[i][j];
	for (k = 0; k < V; k++)
	{
		for (i = 0; i < V; i++)
		{
			for (j = 0; j < V; j++)
			{
				if (dist[i][k] + dist[k][j] < dist[i][j])
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}
	print(dist);
}

void print(int dist[][V])
{
	int i,j;
	printf ("The following matrix shows the shortest distances"
			" between every pair of vertices \n");
	for ( i = 0; i < V; i++)
	{
		for ( j = 0; j < V; j++)
		{
			if (dist[i][j] == INF)
				printf("%7s", "INF");
			else
				printf ("%7d", dist[i][j]);
		}
		printf("\n");
	}
}
