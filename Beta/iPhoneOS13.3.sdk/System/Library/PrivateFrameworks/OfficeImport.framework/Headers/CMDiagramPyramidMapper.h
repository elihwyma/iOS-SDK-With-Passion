/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDiagramShapeMapper.h>

__attribute__((visibility("hidden")))
@interface CMDiagramPyramidMapper : CMDiagramShapeMapper

{
    _Bool mIsFlipped;
}

- (void)setIsFlipped:(_Bool)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_suggestedBoundsForNodeAtIndex:(unsigned long long)arg1;

@end
