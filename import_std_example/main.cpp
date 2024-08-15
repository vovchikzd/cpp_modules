#include <string>

void hello_world(const std::string&);

auto main(int argc, char* argv[]) -> int {
  hello_world(argv[0] ? argv[0] : "I have no clue who you are");
  return 0;
}
