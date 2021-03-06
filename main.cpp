#include "./classes/graph.h"
 /* 
    TRABALHO DE GRAFOS
    Grupo: João Gabriel Lopes e Gustavo Machado

    1. Implementar na matriz    
 
*/

int main() {

    Euclidian graph_5("./trabalho3/points-5.txt");
    graph_5.nearestVertex_TSP(1);

    Euclidian graph_10("./trabalho3/points-10.txt");
    graph_10.nearestVertex_TSP(1);

    Euclidian graph_20("./trabalho3/points-20.txt");
    graph_20.nearestVertex_TSP(1);

    Euclidian graph_50("./trabalho3/points-50.txt");
    graph_50.nearestVertex_TSP(1);

    Euclidian graph_100("./trabalho3/points-100.txt");
    graph_100.nearestVertex_TSP(1);

    Euclidian graph_200("./trabalho3/points-200.txt");
    graph_200.nearestVertex_TSP(1);

    Euclidian graph_500("./trabalho3/points-500.txt");
    graph_500.nearestVertex_TSP(1);

    Euclidian graph_1000("./trabalho3/points-1000.txt");
    graph_1000.nearestVertex_TSP(1);

    Euclidian graph_2000("./trabalho3/points-2000.txt");
    graph_2000.nearestVertex_TSP(1);

    Euclidian graph_5000("./trabalho3/points-5000.txt");
    graph_5000.nearestVertex_TSP(1);

    Euclidian graph_7500("./trabalho3/points-7500.txt");
    graph_7500.nearestVertex_TSP(1);

    Euclidian graph_10000("./trabalho3/points-10000.txt");
    graph_10000.nearestVertex_TSP(1);



    //w_Matrix graph("./rede_colaboracao.txt");
    //w_Matrix graph("./grafo_1.txt");
    //w_Matrix graph("./grafo_2.txt");
    
    //w_Matrix graph("./grafo_1.txt");
    //w_AdjList graph("./grafo_2.txt");
    //w_AdjList graph("./grafo_3.txt");
    //w_AdjList graph("./grafo_4.txt");
    //w_AdjList graph("./grafo_5.txt");

    //w_AdjList graph("./rede_colaboracao.txt");



    // Template para medição de tempo de uma função (cuidado caso ela faça alguma chamada ao SO)
    // auto ti = chrono::high_resolution_clock::now();
    // auto tf = chrono::high_resolution_clock::now();
    // cout << "Duração da função: " << chrono::duration_cast<std::chrono::microseconds>(tf-ti).count() << " millisegundos";



    // // Estudo de Caso 1
    // auto ti = chrono::high_resolution_clock::now();
    // for (int i = 1; i < 6; i++){
    //     cout << "Dijkstra entre vértices 1 e " << i*10 << endl;
    //     cout << "Caminho entre os pares:" << endl;
    //     double dist = graph.Dijkstra_target(1, i*10).first;
    //     cout << "Distância entre o par: " << dist << endl;
    //     cout << "---------------------------" << endl;
    // }
    // auto tf = chrono::high_resolution_clock::now();
    // cout << "Duração da função: " << chrono::duration_cast<std::chrono::milliseconds>(tf-ti).count();


    // cout << endl << endl << endl;


    // // Estudo de caso 2
    // for (int i = 1; i < 6; i++){
    //     cout << "Excentricidade do vértice " << i*10 << endl;
    //     cout << "Valor da excentricidade: " << graph.excentricity(i*10) << endl;
    //     cout << "---------------------------" << endl;
    // }


    // cout << endl << endl << endl;


    // // Estudo de caso 3
    // mt19937 rng;
    // rng.seed(random_device()());
    // uniform_int_distribution<mt19937::result_type> rand_vertex(1, graph.getNumVertices());

    // auto ti = chrono::high_resolution_clock::now();
    // for (int i = 0; i < 20; i++){
    //     graph.excentricity(rand_vertex(rng));
    //     cout << i << endl;
    // }
    // auto tf = chrono::high_resolution_clock::now();
    // cout << "Duração média da função: " << chrono::duration_cast<std::chrono::microseconds>(tf-ti).count()/20    << " microsegundos" << endl;


    // cout << endl << endl << endl;


    // // Estudo de caso 4
    // cout << "Peso da árvore geradora mínima: " << graph.Prim(1) << endl;



    // cout << endl << endl << endl;



    // // Estudo de caso 5
    // double mean_dist = graph.medium_distance();
    // cout << "Distância média: " << mean_dist << endl;
   
    // // Algoritmo extra
    // double mean_prob_dist = graph.medium_distance_probabilistic(100);
    // cout << "Distância média probabilistica: " << mean_prob_dist << endl;

    // // Cálculo da discrepância relativa
    // double disc_rel = (mean_prob_dist - mean_dist) / mean_dist;
    // cout << "Discrepância relativa: " << disc_rel << endl;
    

    // // Estudo de caso da rede de colaboradores
    // int a = 2722;
    // int b = 343930;
    // cout << "Dijkstra entre vértices " << a << " e " << b << endl;
    // cout << "Caminho entre os pares:" << endl;
    // double dist = graph.Dijkstra_target(a, b).first;
    // cout << "Distância entre o par: " << dist << endl;

    // // Gerando a MST
    // graph.Prim(1, true);

    // // Manipulando a MST
    // w_AdjList graph("./MST.txt");
    // graph.three_Max_Degrees();
    // graph.print_neighbours(2722);
    // graph.print_neighbours(343930);   
} 
