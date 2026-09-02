
class MyHashMap {
     vector<list<pair<int,int>>> mymap;
        int hashmapkey(int key){
            return key%1000;

        }
public:
    MyHashMap() {
        mymap.resize(1000);
       
    }
    
    void put(int key, int value) {
         int index=hashmapkey(key);
         for(auto &pair:mymap[index] ){
         if(pair.first==key){
            pair.second=value;
            return;
         }
         }
         mymap[index].push_back({key,value});
        
    }
    
    int get(int key) {
        int index=hashmapkey(key);
        for(auto &pair:mymap[index] ){
            if(pair.first==key){
                return pair.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        
       int index = hashmapkey(key);
        mymap[index].remove_if([&](const pair<int,int> &p){
            return p.first == key;
        });
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */