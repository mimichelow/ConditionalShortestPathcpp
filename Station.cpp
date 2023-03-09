#include "Station.h"
class Station
{
    
        Station()
        {
            name = "" ;
            color = "WHITE"; 
        }
        ~Station()
        {
            delete(this.name);
            delete(this.color);
            delete(this.lines);
            delete(this.neighbors)
        }
    
        void Station::AddLine(int line)
        {
            for(int i=0;i<this.lines.size();i++)
            {
                if (lines[i]==line)
                {
                    break;
                }
            }
            lines.push(line);
        }
        void Station::AddNeighborg(string neighborg)
        {
            for(int i=0;i<neighborgs.size();i++)
            {
                if(neighborgs[i].compare(neighborg==0))
                {
                    break;
                }
                neighborgs.push(neighborg)
            }
        }
        //checking methods

        bool Station::HasNeighborg(string neigh)
        {
            for(int i=0;i<neighborgs.size();i++)
            {
                if(neighborgs[i].compare(neigh)==0)
                {
                    return true;
                }
                return false;
            }
        }
        bool Station::HasLine(int line)
        {
            for(int i=0;i<lines.size();i++)
            {
                if(lines[i]== line)
                {
                    return true;
                }
                return false;
            }
        }

        vector<int> Station::MatchingLines(vector<int> line)
        {
            vector<int> answer={};
            for(int i =0;i<line.size();i++)
            {
                if(this.hasLine(line[i]))
                {
                    answer.push(line[i]);                    
                }
            }
            return answer;
        }
     
}