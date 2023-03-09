#include "Station.h"
#include "TrainLine.h"
#include <vector>
#include <string>

class TrainLine
{
    TrainLine::GetStationLines(string name)
    {
        for(int i =0;i<stations.size();i++)
        {
            if(stations[i].getName.compare(name)==0)
            {
                return stations[i].getLines();
            }
        }
        return nullptr;
    }

    TrainLine::getNeighborgs(string name)
    {
        for(int i =0;i<stations.size();i++)
        {
            if(stations[i].getName.compare(name)==0)
            {
                return stations[i].getNeighborgs();
            }
        }
        return nullptr;
    }

    Station TrainLine::getStation(string name)
    {
        for(int i =0;i<stations.size();i++)
        {
            if(stations[i].getName.compare(name)==0)
            {
                return stations[i];
            }
        }
        return nullptr;
    }
    //returns the shortest path between stations starter and ending, using a col colored train
    vector<string>TrainLine::FindShortestPath(string starter, string ending,string col)
    {
        //TODO
        return nullptr;
    }
};