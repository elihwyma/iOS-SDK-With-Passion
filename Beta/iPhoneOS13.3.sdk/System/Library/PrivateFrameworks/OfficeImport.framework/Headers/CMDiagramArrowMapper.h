/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDiagramShapeMapper.h>

__attribute__((visibility("hidden")))
@interface CMDiagramArrowMapper : CMDiagramShapeMapper

{
    _Bool mIsVertical;
    _Bool mIsOutward;
    float mRadius;
}

+ (void)initialize;

- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;
- (struct CGRect)circumscribedBounds;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGSize)textSizeForShapeSize:(struct CGSize)arg1;

@end
