/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDLayout.h>

@class TSDImageLayout, TSDInfoGeometry, TSDPathSource;

@interface TSDMaskLayout : TSDLayout

{
    struct {
        unsigned int path:1;
        unsigned int tightPathBounds:1;
    } mMaskInvalidFlags;
    struct CGPath *mCachedPath;
    struct CGPath *mCachedPathNoScale;
    struct CGRect mCachedTightPathBounds;
    struct CGRect mCachedTightPathBoundsNoScale;
    double mPathScale;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDPathSource *mDynamicPathSource;
    TSDPathSource *mPathSourceWithProvidedSize;
    _Bool mScalingInMaskMode;
}

@property (nonatomic) double pathScale;
@property (nonatomic, readonly) _Bool hasSmartPath;
@property (nonatomic, readonly) TSDImageLayout *imageLayout;

- (void)dealloc;
- (void)invalidate;
- (struct CGPath *)path;
- (id)initWithInfo:(id)arg1;
- (void)invalidatePath;
- (struct CGRect)pathBounds;
- (id)computeLayoutGeometry;
- (_Bool)shouldDisplayGuides;
- (void)dragBy:(struct CGPoint)arg1;
- (void)processChangedProperty:(int)arg1;
- (id)infoGeometry;
- (void)beginDynamicOperation;
- (void)endDynamicOperation;
- (id)dependentLayouts;
- (struct CGRect)alignmentFrame;
- (struct CGAffineTransform)originalTransformForProvidingGuides;
- (struct CGAffineTransform)layoutTransformInInfoSpace:(struct CGAffineTransform)arg1;
- (void)resizeWithTransform:(struct CGAffineTransform)arg1 asChild:(_Bool)arg2;
- (struct CGRect)alignmentFrameForProvidingGuidesInRoot;
- (_Bool)shouldSnapWhileResizing;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (unsigned long long)numberOfControlKnobs;
- (id)pathSource;
- (struct CGPath *)p_cachedPath;
- (id)maskInfo;
- (struct CGAffineTransform)affineTransformForTightPathBounds;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)arg1;
- (void)maskModeScaleDidBegin;
- (void)maskModeScaleDidEnd;
- (struct CGRect)p_cachedTightPathBoundsNoScale;
- (struct CGRect)p_cachedTightPathBounds;
- (void)p_calculateCachedPathIfNecessary;
- (struct CGPath *)p_cachedPathNoScale;
- (void)p_calculateTightPathBoundsIfNecessary;
- (void)takeScaledMaskGeometry:(id)arg1;
- (void)dynamicMovePathKnobDidBegin;
- (void)dynamicallyMovedSmartShapeKnobTo:(struct CGPoint)arg1 withTracker:(id)arg2;

@end
