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
