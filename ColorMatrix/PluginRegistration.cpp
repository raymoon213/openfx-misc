#include "ColorMatrix.h"

namespace OFX
{
    namespace Plugin
    {
        void getPluginIDs(OFX::PluginFactoryArray &ids)
        {
            getColorMatrixPluginID(ids);
        }
    }
}
