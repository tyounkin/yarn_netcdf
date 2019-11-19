#include <netcdf>
//#include "ncFile.h"
//#include <iostream>

using namespace netCDF;

int main()
{
//  std::cout << "Hello World!" << std::endl;
    int nR_closeGeom = 4;
    NcFile ncFile_hash("geomHash.nc", NcFile::replace);
    NcDim hashNR = ncFile_hash.addDim("nR",nR_closeGeom);
    ncFile_hash.close();
    return 0;
}
