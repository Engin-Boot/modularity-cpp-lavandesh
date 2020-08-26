#include "TelcoFun.h"
namespace TelCoColorCoder
{
  void ToString()
  {
    string manual="";
    for (int i = 0; i<26; i++)
    {
      manual += GetColorFromPairNumber(i).Tostring();
    }
    cout << manual << endl;
}
