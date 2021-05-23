/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDiagramPointMapper.h>

__attribute__((visibility("hidden")))
@interface CMDiagramPointArrowMapper : CMDiagramPointMapper

{
    int mArrowType;
}

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4;
- (id)transformPresentationName;
- (id)getTextBoundsForBounds:(id)arg1;

@end
