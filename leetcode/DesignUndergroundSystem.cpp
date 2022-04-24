class UndergroundSystem {
private:
    unordered_map<int,pair<string,int>>info;
    unordered_map <string, pair<int,int>>ans;

public:
    UndergroundSystem() { 
    }
    
    void checkIn(int id, string stationName, int t) {
        info[id]={stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto &[time_, c_]=ans[info[id].first+" "+stationName];
        time_+=(t-info[id].second);
        c_++;
    }
    
    double getAverageTime(string startStation, string endStation) {
        return (double)ans[startStation+" "+endStation].first/ans[startStation+" "+endStation].second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
