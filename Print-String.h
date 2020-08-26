#include "TelcoFun.h"
namespace TelCoColorCoder
{
  string ToString()
  {
    string manual="";
    for (int i = 0; i<26; i++)
    {
      manual += GetColorFromPairNumber(i).Tostring();
    }
    return manual;
}
