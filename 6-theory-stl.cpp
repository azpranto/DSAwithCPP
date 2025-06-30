#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>

using namespace std;

int main() {
    vector<int> vec;

    vec.push_back(1); // TC O(1) amortized, SC O(n)
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6); // emplace_back is used to construct an object in place at the end of the vector. works like push_back but can be more efficient for complex objects.

    vec.pop_back(); // removes the last element from the vector

    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Size of vector: " << vec.size() << endl; // returns the number of elements in the vector
    cout << "Capacity of vector: " << vec.capacity() << endl; // returns the number of elements that can be stored in the vector without reallocating memory

    cout << "front element: " << vec.front() << endl; // returns the first element of the vector
    cout << "back element: " << vec.back() << endl; // returns the last element of the vector

    vector<int> vec2 = {10, 20, 30, 40, 50}; // initializing a vector with values
    vector<int> vec3(10, -1); // initializing a vector with 10 elements, each initialized to -1

    vector<int> vec4(vec2); // copy constructor, creates a new vector vec4 with the same elements as vec2
    vector<int> vec5 = vec2; // another way to copy a vector

    //erase (TC O(n), SC O(1))
    vec2.erase(vec2.begin()); //removes the first element of vec2
    vec2.erase(vec2.begin() + 1); // removes the second element of vec2
    vec2.erase(vec2.begin() + 1, vec2.end()); // removes elements from the second element to the end of vec2

    //erase or clear func changes the size of the vector, but not its capacity.

    //insert (TC O(n), SC O(1))
    vec2.insert(vec2.begin(), 100); // inserts 100 at the 0th position of vec2
    vec2.insert(vec2.begin() + 2, 200); // inserts 200 at the 2nd position of vec2. if {1, 2, 3} then it will become {1, 2, 200, 3}

    //clear (TC O(n), SC O(1))
    vec2.clear(); // removes all elements from vec2, making it empty. size becomes 0, but capacity remains the same.

    // empty
    cout << "Is vec2 empty? " << (vec2.empty()) << endl; // checks if the vector is empty, returns true if size is 0. here it will return true since we cleared vec2.

    //iterators
    vector<int> vec6 = {1, 2, 3, 4, 5};
    cout << *(vec6.begin()) << endl; // prints the first element
    cout << *(vec6.end() - 1) << endl; // prints the last element. *(vec6.end()) prints the next element after the last element, which is undefined behavior.

    vector<int>::iterator it; // declaring an iterator for vector<int>
    // we can also use auto it = vec6.begin(); to automatically deduce the type
    
    for(it = vec6.begin(); it != vec6.end(); ++it) {
        cout << *(it) << " "; // prints all elements in vec6. we dereference the iterator to get the value it points to.
    }

    vector<int>::reverse_iterator rit; // declaring a reverse iterator for vector<int>
    for(rit = vec6.rbegin(); rit != vec6.rend(); ++rit) { // we could also use the (vector<int>::reverse_iterator) syntax inside the for loop, like this: for(vector<int>::reverse_iterator rit = vec6.rbegin(); rit != vec6.rend(); rit++) {...}
        cout << *(rit) << " "; // prints all elements in vec6 in reverse order
    }

    // or, modern c++ understands the datatype of the iterator automatically, so we can use auto, like this:
    for(auto it = vec6.begin(); it != vec6.end(); it++) {
        cout << *it << " "; // prints all elements in vec6
    }

    //list
    list<int> l;

    l.push_back(1); // TC O(1), SC O(n)
    l.push_back(2); // same goes for emplace_back()
    l.push_back(3);
    l.push_front(4); // inserts 4 at the front of the list
    l.push_front(5); // same goes for emplace_front()
    l.push_front(6);

    l.pop_back(); // removes the last element from the list
    l.pop_front(); // removes the first element from the list

    for(int val : l) {
        cout << val << " ";
    }

    cout << endl;

    //deque
    // operation works exactly similar like list, but it is more efficient for random access.
    // there are 2 deques in C++: deque and dequeue. deque means double-ended queue, which allows insertion and deletion at both ends. 
    // dequeue pops/deletes any running queue
    
    deque<int> d = {1, 2, 3, 4, 5};

    for(int val : d) {
        cout << val << " ";
    }
    cout << endl;

    cout << d[3] << endl; // prints the 4th element of the deque, which is 4. deque supports random access like vector. it would show an error if we used list instead of deque here, because list does not support random access.

    //pair

    pair<int, int> p = {1, 2}; // pair is a simple data structure that holds two values of different types. it can be used to return multiple values from a function.
    cout << p.first << " " << p.second << endl; // prints the first and second elements of the pair

    pair<int, string> p2 = {1, "hello"}; // pair can hold different types of values
    cout << p2.first << " " << p2.second << endl; // prints the first and second elements of the pair

    pair<int, pair<char, int>> p3 = {1, {'a', 3}}; // pair can hold another pair as its second element
    cout << p3.first << " " << p3.second.first << " " << p3.second.second << endl; // prints the first element and the two elements of the second pair
    // only p3.second shows an error because it is a pair, and we cannot print a pair directly. we need to access its elements using first and second.

    vector<pair<int, int>> vec_pairs = {{1, 2}, {3, 4}, {5, 6}}; // vector of pairs

    vec_pairs.push_back({7, 8}); // adding a new pair to the vector
    vec_pairs.emplace_back(9, 10); // emplace_back can also be used. create in-place objects in the vector. no need to create a pair object first.
    vec_pairs.push_back(make_pair(11, 12)); // make_pair is a function that creates a pair object. it is equivalent to {11, 12}.
    
    for(pair<int, int> p : vec_pairs) { // auto can also be used here, like this: for(auto p : vec_pairs)
        cout << p.first << " " << p.second << endl; // prints the first and second elements of each pair in the vector
    }

    //stack
    //last in, first out (LIFO) data structure

    stack<int> s; // stack of integers

    s.push(1); // TC O(1), SC O(n)
    s.push(2);
    s.push(3);

    cout << "Top element of stack: " << s.top() << endl; // returns the top element of the stack, which is 3
    /*
    while(!s.empty()) { // checks if the stack is empty
        cout << s.top() << " "; // prints the top element of the stack
        s.pop(); // removes the top element from the stack
    }
    cout << endl;
    // Note: stack does not support iterators, so we cannot iterate over it like vector or list.
    // We can only access the top element, check if it is empty, push new elements, and pop elements from the top.
    
    */
    
    stack<int> s2; // another stack of integers

    s2.swap(s); // swaps the contents of s2 and s. now s2 has the elements 1, 2, 3 and s is empty.

    cout << "size of s: " << s.size() << endl; // prints the size of the stack s, which is 0
    cout << "size of s2: " << s2.size() << endl; // prints the size of the stack s2, which is 3

    //queue
    //first in, first out (FIFO) data structure

    queue<int> q; // queue of integers

    q.push(1); // TC O(1), SC O(n)
    q.push(2);
    q.push(3);

    cout << "Front element of queue: " << q.front() << endl; // returns the front element of the queue, which is 1
    cout << "Back element of queue: " << q.back() << endl; // returns the back element of the queue, which is 3

    while(!q.empty()) { // checks if the queue is empty
        cout << q.front() << " "; // prints the front element of the queue
        q.pop(); // removes the front element from the queue
    }
    cout << endl;

    //note: size, swap, and empty functions work the same way as in stack.

    //priority queue
    // a priority queue is a special type of queue where elements are ordered based on their priority. the highest priority element is at the front of the queue.
    
    priority_queue<int> pq; // max heap by default, which means the largest element is at the top

    pq.push(5); // TC O(log n), SC O(n)
    pq.push(3);
    pq.push(10);
    pq.push(4);

    cout << "Top element of priority queue: " << pq.top() << endl; // returns the top element of the priority queue, which is 10

    while(!pq.empty()) { // checks if the priority queue is empty
        cout << pq.top() << " "; // prints the top element of the priority queue
        pq.pop(); // removes the top element from the priority queue
    }

    priority_queue<int, vector<int>, greater<int>> rpq; // min heap, which means the smallest element is at the top

    rpq.push(5); // TC O(log n), SC O(n)
    rpq.push(3);
    rpq.push(10);
    rpq.push(4);

    cout << "Top element of priority queue: " << rpq.top() << endl; // returns the top element of the priority queue, which is 3

    while(!rpq.empty()) { // checks if the priority queue is empty
        cout << rpq.top() << " "; // prints the top element of the priority queue
        rpq.pop(); // removes the top element from the priority queue
    }

    //push, emplace, pop, top, size, empty, swap functions work the same way as in stack and queue.


    //map

    map<string, int> m; // map of string to int

    m["tv"] = 100; // inserts a key-value pair into the map, where "tv" is the key and 100 is the value
    m["laptop"] = 100;
    m["headphone"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;
    //these all get stored in lexicographical order of the keys, which is "headphone", "laptop", "tablet", "tv", "watch".

    m.insert({"phone", 200}); // another way to insert a key-value pair into the map
    m.emplace("camera", 300); // emplace can also be used to insert a key-value pair into the map. it constructs the pair in place. no need to create a pair object first.

    for(auto p: m) { // iterating over the map using a range-based for loop
        cout << p.first << " " << p.second << endl; // prints the key and value of each pair in the map
    }

    cout << "count of tv: " << m.count("tv") << endl; // returns the number of elements with the key "tv". it will return 1 if "tv" is present in the map, otherwise 0.
    cout << "value of tv: " << m["tv"] << endl; // returns the value associated with the key "tv". if "tv" is not present in the map, it will insert a new key "tv" with a value of 0 and return 0.

    m.erase("tv"); // removes the key "tv" from the map. if "tv" is not present in the map, it does nothing.

    if(m.find("tv") != m.end()) { // checks if the key "tv" is present in the map
        cout << "tv is present in the map" << endl;
    } else {
        cout << "tv is not present in the map" << endl; // this will be printed since we erased "tv" from the map
    }


    //multimap
    multimap<string, int> mm; // multimap of string to int, allows duplicate keys

    mm.insert({"tv", 100}); // inserts a key-value pair into the multimap, where "tv" is the key and 100 is the value
    mm.insert({"tv", 200}); // inserts another key-value pair with the same key "tv" but a different value 200
    mm.insert({"tv", 100});
    mm.emplace("laptop", 100); // emplace can also be used to insert a key-value pair into the multimap. it constructs the pair in place. no need to create a pair object first.
    mm.emplace("tv", 200); // inserts another key-value pair with the same key "tv" but a different value 200

    //mm.erase("tv"); // removes all elements with the key "tv" from the multimap. if "tv" is not present in the multimap, it does nothing.
    mm.erase(mm.find("tv")); // removes only the first occurrence of the key "tv" from the multimap. if "tv" is not present in the multimap, it does nothing.

    for(auto p: mm) { // iterating over the multimap using a range-based for loop
        cout << p.first << " " << p.second << endl; // prints the key and value of each pair in the multimap
    }

    //unordered_map

    unordered_map<string, int> um; // unordered_map of string to int, does not allow duplicate keys, and does not maintain any order

    um["tv"] = 100; // inserts a key-value pair into the unordered_map, where "tv" is the key and 100 is the value
    um["laptop"] = 100;
    um["headphone"] = 50;
    um["tablet"] = 120;
    um["watch"] = 50;
    //these all get stored in no particular order.

    um.insert({"phone", 200}); // another way to insert a key-value pair into the unordered_map
    um.emplace("camera", 300); // emplace can also be used to insert a key-value pair into the unordered_map. it constructs the pair in place. no need to create a pair object first.

    for(auto p: um) { // iterating over the unordered_map using a range-based for loop
        cout << p.first << " " << p.second << endl; // prints the key and value of each pair in the unordered_map
    }

    cout << "count of tv: " << um.count("tv") << endl; // returns the number of elements with the key "tv". it will return 1 if "tv" is present in the unordered_map, otherwise 0.
    cout << "value of tv: " << um["tv"] << endl; // returns the value associated with the key "tv". if "tv" is not present in the unordered_map, it will insert a new key "tv" with a value of 0 and return 0.

    um.erase("tv"); // removes the key "tv" from the unordered_map. if "tv" is not present in the unordered_map, it does nothing.

    if(um.find("tv") != um.end()) { // checks if the key "tv" is present in the unordered_map
        cout << "tv is present in the unordered_map" << endl;
    } else {
        cout << "tv is not present in the unordered_map" << endl; // this will be printed since we erased "tv" from the unordered_map
    }

    //difference between map and unordered_map:
    //1. Ordering: map maintains the order of elements based on the key, while unordered_map does not maintain any order.
    //2. Implementation: map is typically implemented as a balanced binary tree (e.g., red-black tree), while unordered_map is implemented as a hash table.
    //3. Performance: map has O(log n) time complexity for insertions, deletions, and lookups, while unordered_map has average O(1) time complexity for these operations.
    //4. Memory usage: unordered_map may use more memory due to the underlying hash table and its need for rehashing.

    //set
    set<int> s1; // set of integers, does not allow duplicate elements and maintains order

    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(2); // this will not insert 2 again, since set does not allow duplicate elements

    cout << "Size of set: " << s1.size() << endl; // returns the number of elements in the set, which is 3. not 4, because 2 was not inserted again.

    for(int val : s1) {
        cout << val << " "; // prints the elements in the set in ascending order
    }
    cout << endl;

    // set supports various operations like insert, emplace, size, empty, erase, find, count, and iterators.

    //lower_bound and upper_bound
    s1.insert(4);
    s1.insert(5);
    s1.insert(6);
    cout << "Lower bound of 4: " << *(s1.lower_bound(4)) << endl; 
    // returns the first element that is not less than 4, which is 4. if 4 is not present in the set, it returns the next greater element. if there is no greater element, it returns end(). which possibly returns 0 or some undefined value, so we should check if it is not equal to end() before dereferencing it.
    cout << "Upper bound of 4: " << *(s1.upper_bound(4)) << endl;
    // returns the first element that is greater than 4, which is 5. if 4 is not present in the set, it returns the next greater element. if there is no greater element, it returns end(). which possibly returns 0 or some undefined value, so we should check if it is not equal to end() before dereferencing it.

    //multiset
    multiset<int> ms; // multiset of integers, allows duplicate elements and maintains order

    //unordered_set
    unordered_set<int> us; // unordered_set of integers, does not allow duplicate elements and does not maintain any order
    //TC O(1) for insertions, deletions, and lookups on average, but can be O(n) in the worst case due to hash collisions.
    //this is frequently used when we need to store unique elements and do not care about the order of elements,  due to its average O(1) time complexity for insertions, deletions, and lookups.

    
    return 0;
}