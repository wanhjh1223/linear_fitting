#include "track.h"
namespace prediction{
    namespace intention{

        enum intention_type{
            LK = 0,
            LEFT_C = 1,
            RIGHT_C = 2
        };

        class position{
            private:
                const unsigned int LONG_MAX = 60;
                const unsigned int LATERAL_MAX = 20;
            public:
                float long_;
                float lateral_;

                static position &getInstance() {
                    static position instance;
                    return instance;
                }
                
                bool empty(void){
                    long_ = 0;
                    lateral_ = 0;
                    return true;
                }
        };

        float lateral_line_fit(tracklist &tracklist);
    }
}