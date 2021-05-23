/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDContainerLayout.h>

@class TSDBezierPath, TSDLayoutGeometry;

@interface TSDGroupLayout : TSDContainerLayout

{
    TSDLayoutGeometry *mDynamicLayoutGeometry;
    struct CGRect mBoundsForStandardKnobs;
    TSDBezierPath *mCachedWrapPath;
    TSDBezierPath *mCachedExternalWrapPath;
}

@property (nonatomic, readonly) int wrapContainerMode;

- (void)dealloc;
- (void)invalidate;
- (struct CGSize)minimumSize;
- (void)setGeometry:(id)arg1;
- (_Bool)canFlip;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (id)descendentWrappables;
- (id)i_computeWrapPath;
- (id)i_wrapPath;
- (void)dragBy:(struct CGPoint)arg1;
- (void)invalidateExteriorWrap;
- (void)processChangedProperty:(int)arg1;
- (id)i_externalWrapPath;
- (_Bool)allowsConnections;
- (void)beginDynamicOperation;
- (void)endDynamicOperation;
- (struct CGRect)boundsForStandardKnobs;
- (_Bool)supportsRotation;
- (struct CGRect)alignmentFrame;
- (void)setDynamicGeometry:(id)arg1;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (void)takeRotationFromTracker:(id)arg1;
- (_Bool)resizeMayChangeAspectRatio;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (id)computeInfoGeometryDuringResize;
- (id)reliedOnLayouts;
- (struct CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (_Bool)providesGuidesForChildLayouts;
- (id)visibleGeometries;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (_Bool)supportsParentRotation;
- (_Bool)supportsFlipping;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_invalidateParentForWrap;
- (void)p_invalidateDescendentWrapPaths;
- (id)p_childWrapPathsFrom:(id)arg1;
- (void)wrappableChildInvalidated;

@end
