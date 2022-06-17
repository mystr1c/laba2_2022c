#include "graph_adj_mat.h"
#include <stdio.h>  

int main() {
	graph *g1 = create_graph(5);

	FILE* f;
	fopen_s(&f, "edges.txt", "r");
	while (!feof(f)) {
		char arr[100];
		fgets(arr, 255, f);
		int x = arr[0] - '0';
		int y = arr[1] - '0';
		add_edge(g1, x, y);
	}
	add_edge(g1, 2, 4);
	add_edge(g1, 1, 4);
	add_edge(g1, 1, 3);

	print_graph(g1);

	destroy_graph(g1);

}