#include <vector>
#include <queue>
#include <functional>

int kth_largest(std::vector<int> values, int k){
    std::priority_queue<int, std::vector<int>, std::greater<int>> queue;
    for (int value : values){
        queue.push(value); 
        if (queue.size()>k){
            queue.pop(); 
        }
    }
    return queue.top();
}
