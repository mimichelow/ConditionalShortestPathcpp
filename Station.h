#include <vector>
#include <string>
using std::vector;
using std::string;

class Station
{
    private:
        string name;
        string color;
        vector<int> lines={};
        vector<string> neighbors={};
        
        
    public:

    //Construction
        Station();
        ~Station();

    //getters
               
        string GetName() { return name; }
        string GetColor() { return color; }
        vector<int> GetLines() { return lines; }
        vector<string> GetNeighborgs() { return neighbors; }
        
    //Setters
     
        void SetName(string name){ name = name; }
        void SetColor(string color){ color = color; }
        void AddLine(int line);
        void AddNeighborg(string neighborg);
    //Functionality   
        bool HasNeighborg(string neigh);
        bool HasLine(int line);
        vector<int> MatchingLines(vector<int> line);
};