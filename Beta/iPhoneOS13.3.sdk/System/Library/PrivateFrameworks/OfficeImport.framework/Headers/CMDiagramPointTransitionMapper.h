/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDiagramPointMapper.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CMDiagramPointTransitionMapper : CMDiagramPointMapper

{
    int mShapeType;
    NSDictionary *mAdjustValues;
}

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 shapeType:(int)arg4 adjustValues:(id)arg5 parent:(id)arg6;
- (id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 shapeType:(int)arg4 parent:(id)arg5;

@end
