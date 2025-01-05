std::vector<int> vec = {1, 2, 3};
for (int i = 0; i <= vec.size(); ++i) {
  std::cout << vec[i] << std::endl;
}
This code causes a segmentation fault or unexpected behavior because it attempts to access vec[vec.size()], which is out of bounds. The correct loop condition should be i < vec.size().