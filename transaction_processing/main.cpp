#include "Person.h"
#include "Tweeter.h"
#include "logger.h"
using std::string;

int main() {
  Person p1("Joshua", "Uzo", 908);
  {
    Tweeter t = Tweeter("Someone", "Else", 567, "@someone-else");
    LOG(t.getName())
    LOG(t.getId())
  }
  LOG("after innermost block")
  LOG(p1.getName())
  LOG(p1.getId())
  return 0;
}
