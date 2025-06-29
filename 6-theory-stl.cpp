#include <iostream>
#include <vector>
#include <list>
#include <deque>

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
    // there are 2 deques in C++: deque and dequeue. deque means double-ended queue, which allows insertion and deletion at both ends. dequeue pops/deletes any running queue
    
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


    return 0;
}