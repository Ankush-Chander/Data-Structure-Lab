#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, int> map;
    
    std::cout << "Initial bucket count: " << map.bucket_count() << std::endl;
    std::cout << "Max bucket count: " << map.max_bucket_count() << std::endl;
    
    // Insert values that may collide (assuming a simple hash function behavior)
    // int collision_keys[] = {1, 14, 40,53,73, };
    for (int i = 1; i < 14; ++i) {
        map[i*13+1] = i*10;
    }
    
    std::cout << "\nAfter inserting potential collision elements:" << std::endl;
    std::cout << "Bucket count: " << map.bucket_count() << std::endl;
    
    // Print bucket distribution and elements in each bucket
    for (size_t j = 0; j < map.bucket_count(); ++j) {
        // if (map.bucket_size(j) > 1) { // Checking collision (more than one element in the bucket)
            std::cout << "Bucket " << j << " (Collision) -> " << map.bucket_size(j) << " elements: ";
            for (auto it = map.begin(); it != map.end(); ++it) {
                if (map.bucket(it->first) == j) {
                    std::cout << "(" << it->first << ", " << it->second << ") ";
                }
            }
            std::cout << std::endl;
        // }
    }
    
    return 0;
}
