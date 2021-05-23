/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDrawableMapper.h>

__attribute__((visibility("hidden")))
@interface EMDrawableMapper : CMDrawableMapper

{
    double *mRowGrid;
    double *mColumnGrid;
}

+ (_Bool)isAnchorRelative:(id)arg1;

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setBoundingBox;
- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;
- (void)mapDiagramAt:(id)arg1 withState:(id)arg2;
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;
- (void)mapBounds;
- (id)initWithChartDrawable:(id)arg1 box:(struct CGRect)arg2 parent:(id)arg3;
- (id)worksheetMapper;
- (void)mapChartAt:(id)arg1 withState:(id)arg2;
- (struct CGRect)getImageRect;
- (struct CGRect)mapAnchorToRect:(id)arg1 rowGrid:(double *)arg2 columnGrid:(double *)arg3;
- (struct CGPoint)anchorMarkerToPosition:(struct EDCellAnchorMarker)arg1 rowGrid:(double *)arg2 columnGrid:(double *)arg3 start:(_Bool)arg4 relative:(_Bool)arg5;
- (id)initWithOADDrawable:(id)arg1 parent:(id)arg2;
- (id)initWithOADDrawable:(id)arg1 rowGrid:(double *)arg2 columnGrid:(double *)arg3;
- (id)workbookMapper;

@end
