/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class CMDrawingContext, NSString, OADOrientedBounds, ODDPoint;

__attribute__((visibility("hidden")))
@interface CMDiagramPointMapper : CMMapper

{
    ODDPoint *mPoint;
    CMDrawingContext *mDrawingContext;
    OADOrientedBounds *mOrientedBounds;
    NSString *mPresentationName;
}

- (float)defaultFontSize;
- (id)stroke;
- (id)fill;
- (id)plainText;
- (id)shapeStyle;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)styleMatrix;
- (id)diagram;
- (id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4;
- (id)transformPresentationName;
- (id)transformForPresentationWithName:(id)arg1;
- (void)setPresentationName:(id)arg1;
- (void)applyDiagramStyleToShapeProperties;
- (void)mapTextAt:(id)arg1 withBounds:(id)arg2 isCentered:(_Bool)arg3 includeChildren:(_Bool)arg4 withState:(id)arg5;
- (void)renderShapeAsBackgroundInBounds:(id)arg1;
- (void)mapStyledRectangle:(struct CGRect)arg1 at:(id)arg2 withState:(id)arg3;
- (void)mapChlidrenAt:(id)arg1 withState:(id)arg2;
- (id)presentationName;
- (id)presentationWithName:(id)arg1;
- (id)baseTextListStyleWithBounds:(id)arg1 isCentered:(_Bool)arg2;
- (void)mapPointTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4;
- (void)mapChildrenTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4;
- (void)mapSiblingTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4;

@end
