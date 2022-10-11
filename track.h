#include<queue>

class track{
public:
    int intention_type;
    int track_id;
    int tar_type;
    float track_time;
    std::pair<float,float> track_pos;
    track() {};
    track(int id, int type, int intention, float time, std::pair<float,float> pos) {
        track_id = id;
        tar_type = type;
        intention_type = intention;
        track_pos = pos;
        track_time = time;
    };
private:
    // 
    

};

class tracklist{
public:
    int id;
    std::queue<int> que_list_intention_type;
    std::queue<float> que_list_x;
    std::queue<float> que_list_y;
    std::queue<float> que_list_time;
    tracklist() {};
    tracklist(int track_id) {
        id = track_id;
    };
private:
    
};