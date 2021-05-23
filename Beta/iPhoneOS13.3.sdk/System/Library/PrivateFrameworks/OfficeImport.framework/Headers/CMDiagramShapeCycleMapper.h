/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDiagramShapeMapper.h>

__attribute__((visibility("hidden")))
@interface CMDiagramShapeCycleMapper : CMDiagramShapeMapper

{
    float mScale;
    _Bool mCircularArrows;
    int mDiagramType;
    int mArrowShapeType;
}

- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;
- (struct CGRect)circumscribedBounds;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGSize)nodeSize;
- (struct CGRect)nodeBoundsWithIndex:(unsigned long long)arg1;
- (void)mapTransitionPointAt:(id)arg1 index:(unsigned int)arg2 withState:(id)arg3;
- (void)mapTransitionArrowsAt:(id)arg1 index:(unsigned int)arg2 withState:(id)arg3;

@end
