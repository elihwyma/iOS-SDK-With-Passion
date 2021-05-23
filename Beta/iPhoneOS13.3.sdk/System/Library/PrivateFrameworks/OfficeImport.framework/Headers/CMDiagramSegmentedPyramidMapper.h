/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDiagramShapeMapper.h>

__attribute__((visibility("hidden")))
@interface CMDiagramSegmentedPyramidMapper : CMDiagramShapeMapper

- (unsigned long long)layerCount;
- (unsigned long long)pointCount;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_suggestedBoundsForPyramidLayerWithIndex:(unsigned long long)arg1 inLayer:(unsigned long long)arg2 andSlice:(unsigned long long)arg3;

@end
