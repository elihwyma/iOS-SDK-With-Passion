/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDrawableMapper.h>

@class CMDrawingContext, ODDDiagram;

__attribute__((visibility("hidden")))
@interface CMDiagramMapper : CMDrawableMapper

{
    ODDDiagram *mDiagram;
    CMDrawingContext *mDrawingContext;
}

+ (int)diagramTypeFromString:(id)arg1;

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)styleMatrix;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4;
- (id)identifierFromLayoutTypeId:(id)arg1;
- (id)copyDiagramMapperForId:(id)arg1;
- (id)diagram;

@end
