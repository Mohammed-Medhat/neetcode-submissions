class MyHashSet {
private:
    vector<int> keys; 

public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        // 2. Check if the iterator returned does not equal the end
        if (find(keys.begin(), keys.end(), key) == keys.end()) {
            keys.push_back(key); // Only add if it wasn't found
        }
    }
    
    void remove(int key) {
        auto it = find(keys.begin(), keys.end(), key);
        
        if (it != keys.end()) {
            keys.erase(it);
        }
    }
    
    bool contains(int key) {
       
        return find(keys.begin(), keys.end(), key) != keys.end();
    }
};