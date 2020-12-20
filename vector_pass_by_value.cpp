#include <iostream>
#include <vector>

std::vector<int> create_vector(){
  std::vector<int> v {1,3,4,90,90};
  return v;
}

std::vector<int> create_vector(const size_t N){
  std::vector<int> v;
  v.resize(N,954);
  return v;
}

int main(int argc, char* argv[]) {
  for (size_t i = 0; i < 10; i++ ) {
    const size_t N = 1024 * 1024 * 100;
    std::vector<int> v = create_vector(N);
    std::cout << v.size() << std::endl;
    if (v[i] != 954) {
      std::cout << "Some dummy test" << "\n";
      return 0;
    }
  }
  return 0;
}
