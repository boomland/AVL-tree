# AVL-tree
AVL tree (https://en.wikipedia.org/wiki/AVL_tree) in my template implementation.

    template<class ValueType> class Set

### Was implemented:

1. Default constructor
2. Constructor which takes two iteartors (first and last) to a sequence with type of `ValueType`
3. Constructor which takes `std::initializer_list<ValueType>`
4. Copy constructor
5. Assignment operator
6. Destructor
7. Constant method `size_t size()` which returns number of elements in set
8. Constant method `bool empty()` which returns set is empty or not
9. Method void insert which adds element in set
10. Method void erase which removes element from set
11. Template class Iterator<class ValueType> with which you can view the values in the container
12. Method `Iterator<class ValueType> begin()` which returns iterator to the first element of container
13. Method `Iterator<class ValueType> end()` which returns iterator to the next to the last element of container
14. Constant method `Iterator<class ValueType> find()` which finds element in the container. It returns corresponding iterators to the element if found, `end()` otherwise
15. Constant method `Iterator<class ValueType> lower_bound()`  which returns iterator to the smallest element of set, which is not less than argument. If this does not exist, returns `end()`

### Asymptotic complexity:
`insert()`, `erase()`, `find()`, `lower_bound()` - **O(log(n))**

## Example of use
```
#include "avl-tree.cpp"

int main() {
	Set<int> s{10, 1, 5, 3, 6};
	s.insert(6);

	std::cout << "Initial set state: ";
	for (auto element : s) {
		std::cout << element << ' ';
	}
	std::cout << '\n';

	Iterator<int> it = s.lower_bound(5);
	std::cout << "Look at the value at the iterator: " << *it << '\n';

	s.clear();
	std::cout << "Container is empty: " << s.empty() << '\n';

	return 0;
}
```
#### Output:
```
Initial set state: 1 3 5 6 10
Look at the value at the iterator: 5
Container is empty: 1
```
