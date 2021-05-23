/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDMediaLayout.h>

@class TSDBezierPath, TSDImageAdjustments, TSDInfoGeometry, TSDLayoutGeometry, TSDMaskLayout;

@interface TSDImageLayout : TSDMediaLayout

{
    TSDLayoutGeometry *mImageGeometry;
    TSDMaskLayout *mMaskLayout;
    struct CGPath *mPathToStroke;
    struct CGAffineTransform mLayoutToImageTransform;
    struct CGAffineTransform mLayoutToMaskTransform;
    _Bool mMaskIntersectsImage;
    TSDBezierPath *mTracedPath;
    int mHasAlpha;
    TSDLayoutGeometry *mBaseImageLayoutGeometry;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDInfoGeometry *mBaseInfoGeometry;
    int mMaskEditMode;
    _Bool mScalingInMaskMode;
    _Bool mInInstantAlphaMode;
    _Bool mIsUpdatingImageAdjustments;
    TSDImageAdjustments *mDynamicImageAdjustments;
}

@property (nonatomic, readonly) int maskEditMode;
@property (nonatomic, readonly, getter=isInMaskEditMode) _Bool inMaskEditMode;
@property (nonatomic, readonly) _Bool isDraggingInMaskEditMode;
@property (nonatomic, readonly) _Bool isRotatingInMaskEditMode;
@property (nonatomic, readonly) _Bool isResizingInMaskEditMode;
@property (nonatomic, readonly) int maskEditModeForDragging;
@property (nonatomic, readonly) int maskEditModeForRotating;
@property (nonatomic, readonly) int maskEditModeForResizing;
@property (nonatomic, readonly) int maskEditModeForLayoutState;
@property (nonatomic, readonly, getter=isInInstantAlphaMode) _Bool inInstantAlphaMode;
@property (nonatomic, readonly, getter=isInMaskScaleMode) _Bool inMaskScaleMode;

- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (_Bool)isInvisible;
- (id)imageInfo;
- (_Bool)hasAlpha;
- (id)computeLayoutGeometry;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (void)updateChildrenFromInfo;
- (id)layoutGeometryFromInfo;
- (_Bool)shouldDisplayGuides;
- (id)i_computeWrapPath;
- (void)dragBy:(struct CGPoint)arg1;
- (void)processChangedProperty:(int)arg1;
- (void)beginDynamicOperation;
- (void)endDynamicOperation;
- (_Bool)supportsRotation;
- (struct CGPoint)centerForRotation;
- (_Bool)i_useBaseCapturedAlignmentFrameOriginForInline;
- (void)beginDrag;
- (void)endDrag;
- (struct CGAffineTransform)layoutTransformInInfoSpace:(struct CGAffineTransform)arg1;
- (void)takeRotationFromTracker:(id)arg1;
- (_Bool)resizeMayChangeAspectRatio;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (void)beginResize;
- (void)resizeWithTransform:(struct CGAffineTransform)arg1 asChild:(_Bool)arg2;
- (id)inspectorGeometry;
- (struct CGPoint)centerForConnecting;
- (void)offsetGeometryBy:(struct CGPoint)arg1;
- (id)geometryForTransforming;
- (id)visibleGeometries;
- (struct CGRect)alignmentFrameForProvidingGuidesInRoot;
- (_Bool)shouldSnapWhileResizing;
- (struct CGRect)pathBoundsWithoutStroke;
- (id)smartPathSource;
- (id)maskLayout;
- (_Bool)maskIntersectsImage;
- (struct CGAffineTransform)layoutToImageTransform;
- (id)imageGeometry;
- (struct CGAffineTransform)imageDataToVisualSizeTransform;
- (void)maskWasApplied;
- (_Bool)isDynamicallyChangingImageAdjustments;
- (id)imageGeometryInRoot;
- (struct CGPoint)centerForRotationInMaskMode;
- (struct CGPath *)pathToStroke;
- (_Bool)hasMaskingPath;
- (struct CGAffineTransform)layoutToMaskTransform;
- (_Bool)shouldRenderFrameStroke;
- (id)imageAdjustments;
- (id)currentInfoGeometry;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)arg1;
- (void)maskModeScaleDidBegin;
- (void)maskModeScaleDidEnd;
- (void)endMaskEditMode;
- (struct CGRect)computeAlignmentFrameInRoot:(_Bool)arg1;
- (void)maskWasReset;
- (void)beginEditingImageInMaskEditMode;
- (void)beginEditingMaskInMaskEditMode;
- (void)beginInstantAlphaMode;
- (void)endInstantAlphaMode;
- (id)originalImageGeometry;
- (struct CGSize)sizeOfFrameRectIncludingCoverage;
- (void)dynamicImageAdjustmentsChangeDidBegin;
- (void)dynamicImageAdjustmentsUpdateToValue:(id)arg1;
- (void)dynamicImageAdjustmentsChangeDidEnd;

@end
