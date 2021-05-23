/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDFill.h>

#import <TSReading/Swift-Protocol.h>

@class NSObject, NSString, TSPData, TSUColor, TSUFlushableCachedImage;

@protocol OS_dispatch_queue;

@interface TSDImageFill : TSDFill <Swift>

{
    TSPData *mImageData;
    TSPData *mOriginalImageData;
    _Bool mInterpretsUntaggedImageDataAsGeneric;
    int mTechnique;
    TSUColor *mTintColor;
    TSUFlushableCachedImage *mStandardSizeTintedImage;
    TSUFlushableCachedImage *mHalfSizeTintedImage;
    TSUFlushableCachedImage *mQuarterSizeTintedImage;
    TSUColor *mReferenceColor;
    struct CGSize mFillSize;
    _Bool mHasIndicatedInterestInProvider;
    NSObject<OS_dispatch_queue> *mTempRenderLock;
    struct CGImage *mTempRenderCopy;
    struct CGImage *mSourceOfTempRenderCopy;
    long long mTempRenderCount;
}

@property (nonatomic) int technique;
@property (retain, nonatomic, readonly) TSPData *imageData;
@property (retain, nonatomic, readonly) TSPData *originalImageData;
@property (nonatomic, readonly) _Bool interpretsUntaggedImageDataAsGeneric;
@property (nonatomic, readonly) struct CGSize fillSize;
@property (copy, nonatomic, readonly) TSUColor *tintColor;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) NSString *presetKind;

+ (id)presetKinds;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)isOpaque;
- (id)referenceColor;
- (SEL)mapThemeAssetSelector;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (int)fillType;
- (void)p_paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(_Bool)arg4;
- (_Bool)drawsInOneStep;
- (struct CGSize)renderedImageSizeForObjectSize:(struct CGSize)arg1;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 forShapeRep:(id)arg2 inContext:(struct CGContext *)arg3;
- (void)applyToCALayer:(id)arg1 withScale:(double)arg2;
- (_Bool)canApplyToCALayer;
- (id)p_validatedImageProvider;
- (id)initWithImageData:(id)arg1 technique:(int)arg2 tintColor:(id)arg3 size:(struct CGSize)arg4 originalImageData:(id)arg5;
- (void)p_setFillSizeForApplicationData;
- (id)p_standardSizeCachedImage;
- (_Bool)p_shouldApplyTintedImage;
- (id)p_quarterSizeCachedImage;
- (id)p_halfSizeCachedImage;
- (_Bool)canApplyToCALayerByAddingSublayers;
- (id)p_cachedImageForSize:(struct CGSize)arg1 inContext:(struct CGContext *)arg2 orLayer:(id)arg3;
- (struct CGRect)p_drawnRectForImageSize:(struct CGSize)arg1 destRect:(struct CGRect)arg2 inContext:(struct CGContext *)arg3;
- (struct CGSize)p_sizeOfFillImageForDestRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)p_drawBitmapImage:(struct CGImage *)arg1 withOrientation:(long long)arg2 inContext:(struct CGContext *)arg3 bounds:(struct CGRect)arg4;
- (void)p_drawPDFWithProvider:(id)arg1 inContext:(struct CGContext *)arg2 bounds:(struct CGRect)arg3;
- (struct CGImage *)p_newTintedImageWithScale:(double)arg1;
- (struct CGImage *)p_newStandardSizeImage;
- (struct CGImage *)p_newHalfSizeImage;
- (struct CGImage *)p_newQuarterSizeImage;
- (id)initWithGenericImageData:(id)arg1 technique:(int)arg2 tintColor:(id)arg3 size:(struct CGSize)arg4 originalImageData:(id)arg5;
- (id)imageDataAtFillSize;
- (_Bool)shouldBeReappliedToCALayer:(id)arg1;
- (void)i_flushCaches;

@end
