// This file was generated based on C:/Users/Shumcom/AppData/Local/Fusetools/Packages/Fuse.Text/1.4.0/FontFace.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{struct Glyph;}}}

namespace g{
namespace Fuse{
namespace Text{

// public struct Glyph :10
// {
uStructType* Glyph_typeof();
void Glyph__ctor__fn(Glyph* __this, int* fontIndex, uint32_t* index);
void Glyph__New1_fn(int* fontIndex, uint32_t* index, Glyph* __retval);

struct Glyph
{
    int FontIndex;
    uint32_t Index;

    void ctor_(int fontIndex, uint32_t index);
};

Glyph Glyph__New1(int fontIndex, uint32_t index);
// }

}}} // ::g::Fuse::Text
