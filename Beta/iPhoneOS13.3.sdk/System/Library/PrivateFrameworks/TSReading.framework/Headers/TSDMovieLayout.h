/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDMediaLayout.h>

@class TSDInfoGeometry;

@interface TSDMovieLayout : TSDMediaLayout

{
    TSDInfoGeometry *mDynamicInfoGeometry;
}

- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (id)movieInfo;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (id)i_computeWrapPath;
- (void)processChangedProperty:(int)arg1;
- (void)beginDynamicOperation;
- (void)endDynamicOperation;
- (_Bool)supportsRotation;
- (void)takeRotationFromTracker:(id)arg1;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (struct CGRect)computeAlignmentFrameInRoot:(_Bool)arg1;
- (struct CGRect)fullReflectionFrame;
- (struct CGRect)fullReflectionBoundsForRect:(struct CGRect)arg1;

@end
