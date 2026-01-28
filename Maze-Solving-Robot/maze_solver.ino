#define N 4
int graph[N][N] = {
  {0, 1, 4, 0},
  {1, 0, 2, 5},
  {4, 2, 0, 1},
  {0, 5, 1, 0}
};

int dist[N];
bool visited[N];

int minDistance() {
  int min = 999, index;
  for (int i = 0; i < N; i++) {
    if (!visited[i] && dist[i] < min) {
      min = dist[i];
      index = i;
    }
  }
  return index;
}

void dijkstra(int src) {
  for (int i = 0; i < N; i++) {
    dist[i] = 999;
    visited[i] = false;
  }
  dist[src] = 0;

  for (int i = 0; i < N - 1; i++) {
    int u = minDistance();
    visited[u] = true;

    for (int v = 0; v < N; v++) {
      if (!visited[v] && graph[u][v] && dist[u] + graph[u][v] < dist[v]) {
        dist[v] = dist[u] + graph[u][v];
      }
    }
  }
}

void setup() {
  Serial.begin(9600);
  dijkstra(0);
  for (int i = 0; i < N; i++) {
    Serial.println(dist[i]);
  }
}

void loop() {}
