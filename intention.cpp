#include "intention.h"
namespace prediction{
    namespace intention{
        float lateral_line_fit(tracklist &tracklist){
            float pred_time = 1;
            if(tracklist.que_list_time.size() > 1)
            {
                float k = (tracklist.que_list_y.back() - tracklist.que_list_y.front()) / (tracklist.que_list_time.back() - tracklist.que_list_time.front());
                float b = tracklist.que_list_y.back() - k * tracklist.que_list_time.back();
                float output_pred = k * (tracklist.que_list_time.back() + pred_time) + b;
                return output_pred;
            }
            return 0;
        }
    }
}