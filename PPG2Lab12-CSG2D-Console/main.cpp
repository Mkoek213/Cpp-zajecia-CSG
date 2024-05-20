#include "libincludes.h"
#include "functions.h"

int main()
{
    constexpr std::uint32_t res_x = 80u, res_y = 40u; //mozna zmienic w zaleznosci od mozliwosci konsoli

    if(auto shape_shp = createCSG2DScene()) { drawToConsole(*shape_shp, res_x, res_y, 'X', '.'); }

    return 0;
}
