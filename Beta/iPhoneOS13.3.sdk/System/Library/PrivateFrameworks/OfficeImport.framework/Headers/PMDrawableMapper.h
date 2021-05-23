/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDrawableMapper.h>

@class CMDrawingContext, OADShape;

__attribute__((visibility("hidden")))
@interface PMDrawableMapper : CMDrawableMapper

{
    OADShape *mShape;
    CMDrawingContext *mDrawingContext;
    _Bool mTopLevelMapper;
}

- (id)drawingContext;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;
- (void)mapDiagramAt:(id)arg1 withState:(id)arg2;
- (void)mapBounds;
- (struct CGRect)transformRectToPage:(struct CGRect)arg1;
- (void)mapChartAt:(id)arg1 withState:(id)arg2;
- (struct CGRect)slideRect;
- (void)setTopLevelMapper:(_Bool)arg1;
- (void)setDrawingContext:(id)arg1;
- (_Bool)isTopLevelMapper;
- (void)mapRectangularShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapShapeAsBackgroundAt:(id)arg1 withState:(id)arg2;
- (struct CGRect)shapeTextBoxWithState:(id)arg1;
- (void)mapFreeForm:(id)arg1 orientedBounds:(id)arg2 transformedBounds:(struct CGRect *)arg3 state:(id)arg4;

@end
