/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDStroke.h>

@class NSString, TSDFrameSpec;

@interface TSDFrame : TSDStroke

{
    TSDFrameSpec *mSpec;
    NSString *mFrameName;
    double mAssetScale;
    _Bool mScaledSizesValid;
    double mLeftWidth;
    double mRightWidth;
    double mTopHeight;
    double mBottomHeight;
    struct CGSize mAdornmentSize;
}

@property (nonatomic, readonly) double assetScale;
@property (nonatomic, readonly) TSDFrameSpec *frameSpec;

+ (Class)mutableClass;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)frameName;
- (_Bool)supportsColor;
- (_Bool)shouldRender;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)supportsLineOptions;
- (_Bool)supportsPattern;
- (_Bool)isFrame;
- (void)paintPath:(struct CGPath *)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(_Bool)arg4;
- (_Bool)isNullStroke;
- (_Bool)canApplyDirectlyToRepCALayer;
- (_Bool)canApplyToCAShapeLayer;
- (struct _TSDStrokeOutsets)outsets;
- (_Bool)prefersToApplyToCAShapeLayerDuringManipulation;
- (_Bool)drawsInOneStep;
- (id)strokeByTransformingByTransform:(struct CGAffineTransform)arg1;
- (struct CGRect)coverageRect:(struct CGRect)arg1;
- (_Bool)hasMask;
- (struct CGRect)coverageRectWithoutAdornment:(struct CGRect)arg1;
- (id)initWithFrameName:(id)arg1;
- (double)minimumAssetScale;
- (_Bool)shouldRenderForSizeIncludingCoverage:(struct CGSize)arg1;
- (id)initWithFrameSpec:(id)arg1 assetScale:(double)arg2 archivableFrameName:(id)arg3;
- (id)initWithFrameSpec:(id)arg1 assetScale:(double)arg2;
- (id)initWithFrameSpec:(id)arg1;
- (id)archivableFrameName;
- (struct CGRect)p_coverageRectWithoutAdornment:(struct CGRect)arg1;
- (struct CGRect)i_adornmentRectForRect:(struct CGRect)arg1;
- (struct CGRect)p_coverageRectWithAdornment:(struct CGRect)arg1;
- (struct CGSize)p_minimumRenderedSize;
- (double)i_leftWidth;
- (double)i_rightWidth;
- (double)i_topHeight;
- (double)i_bottomHeight;
- (_Bool)i_willRenderForRect:(struct CGRect)arg1;

@end
