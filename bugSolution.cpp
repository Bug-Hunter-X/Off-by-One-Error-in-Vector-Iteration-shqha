std::vector<int> vec = {1, 2, 3};
for (int i = 0; i < vec.size(); ++i) {
  std::cout << vec[i] << std::endl;
}
Alternatively, using iterators provides a more robust and less error-prone approach:
for (int& x : vec) {
    std::cout << x << std::endl;
}
Or using range-based for loop:
for (const auto& x : vec) {
    std::cout << x << std::endl;
}