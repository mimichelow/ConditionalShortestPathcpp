#include "vector"
#include "string"
#include "Station.h"
using std::vector;
using std::string;

class TrainLine
{
    private:
        vector<Station> stations={};

    public:
    TrainLine() {}
    //setters
    void addStation(Station add) { stations.push_back(add); }

    //getters
    vector<int> getStationLines(string name);
    vector<string> getNeighborgs(string name);
    Station getStation(string name);
 
    //returns the shortest path between stations starter and ending, using a col colored train
    vector<string> FindShortestPath(string starter, string ending,string col);
};