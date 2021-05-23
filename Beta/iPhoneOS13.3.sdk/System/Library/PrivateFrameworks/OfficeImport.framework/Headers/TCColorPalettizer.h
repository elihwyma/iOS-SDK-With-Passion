/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TCColorPalettizer : NSObject

{
    struct _tagOctree *m_pTree;
    _Bool isDefaultPaletteSize;
}

- (void)dealloc;
- (int)createOctree:(struct _tagOctree **)arg1 maxPaletteSize:(unsigned short)arg2;
- (int)deleteOctree:(struct _tagOctree *)arg1;
- (_Bool)addQuadColor:(struct _tagRgbQuad)arg1;
- (int)addPixelToOctree:(struct _tagOctree *)arg1 pixel:(struct _tagRgbQuad)arg2;
- (int)reduceOctree:(struct _tagOctree *)arg1;
- (unsigned short)getPaletteFromOctree:(struct _tagOctreeNode *)arg1 paletteEntry:(struct _tagRgbQuad *)arg2 index:(unsigned short)arg3;
- (int)paletteIndexFromQuadColor:(struct _tagRgbQuad)arg1;
- (int)rgbToIndexOctree:(struct _tagOctree *)arg1 source:(struct _tagRgbQuad)arg2 destination:(char *)arg3;
- (id)initWitMaxPaletteSize:(unsigned int)arg1;
- (id)initWitDefaultPaletteSize;
- (_Bool)addTSUColor:(id)arg1;
- (void)createPalette;
- (unsigned int)paletteColorCount;
- (id)getPaletteDataRaw;
- (id)getPngPaletteData;
- (id)getPaletteData;
- (int)paletteIndexFromTSUColor:(id)arg1;
- (int)createNodeOctree:(struct _tagOctreeNode **)arg1 parent:(struct _tagOctreeNode *)arg2;
- (int)deleteNodeOctree:(struct _tagOctreeNode *)arg1;
- (int)deleteListOctree:(struct _tagLevelItem *)arg1;

@end
