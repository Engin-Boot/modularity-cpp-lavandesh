#include "TelcoFun.h"
namespace TelCoColorCoder
{
  void ToString()
  {
    std::string manual="";
    for (int i = 0; i<26; i++)
    {
      manual += GetColorFromPairNumber(i).ToString();
    }
    std::cout << manual << std::endl;
  }
}
