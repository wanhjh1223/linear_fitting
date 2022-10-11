#include<iostream>
#include "intention.h"

int main(void) {
    track A(1, 1, 0.5, prediction::intention::LEFT_C, {5,5});
    tracklist List(A.track_id);
    List.que_list_intention_type.push(A.intention_type);
    List.que_list_time.push(A.track_time);
    List.que_list_x.push(A.track_pos.first);
    List.que_list_y.push(A.track_pos.second);
    while(true){
        A.track_time = A.track_time + 0.5;
        A.track_pos.first = A.track_pos.first + 1;
        A.track_pos.second = A.track_pos.second + 1;
        List.que_list_time.push(A.track_time);
        List.que_list_x.push(A.track_pos.first);
        List.que_list_y.push(A.track_pos.second);
        if(List.que_list_time.size() == 2)
        {
            float out;
            out = prediction::intention::lateral_line_fit(List);
            std::cout << out << std::endl;
            break;
        }
    }
    return 0;
}
