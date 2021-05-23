/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <CoreHandwriting/CHPointFIFO.h>

@class MISSING_TYPE, UIView;

@interface AKBitmapFIFO : CHPointFIFO

{
    char *_bitmapDataPtr;
    struct CGContext *_bitmapContext;
    struct CGImage *_bitmapImage;
    struct CGPath *_cachedPath;
    UIView *_view;
    _Bool _isInLiveDraw;
    _Bool _bitmapSizeHasBeenUpdatedOnceForLiveDraw;
    double _bitmapSizeMultiplier;
    double _shadowRadiusInView;
    struct CGSize _bitmapSize;
    MISSING_TYPE *_lastPoint;
    struct CGRect _unionDirtyRect;
    struct CGAffineTransform _viewToBitmapTransform;
}

@property struct CGSize bitmapSize;
@property _Bool bitmapSizeHasBeenUpdatedOnceForLiveDraw;
@property MISSING_TYPE *lastPoint;
@property struct CGRect unionDirtyRect;
@property struct CGAffineTransform viewToBitmapTransform;
@property double bitmapSizeMultiplier;
@property (nonatomic) _Bool isInLiveDraw;
@property (retain, nonatomic) UIView *view;
@property double shadowRadiusInView;

- (void)clear;
- (void)flush;
- (void)teardown;
- (void)addPoint: /* Error: Ran out of types for this method. */;
- (id)initWithFIFO:(id)arg1;
- (struct CGPath *)newPathFromCurrentBitmap;
- (struct CGImage *)currentBitmap;
- (struct CGRect)bitmapRectInView;
- (void)resetDirtyRect;
- (void)_clearAllBitmapData;
- (void)_clearCachedPath;
- (void)_createBitmapContextIfNecessary;
- (void)_addPointToBitmap: /* Error: Ran out of types for this method. */;
- (void)_updateBitmapSizeFromViewIfNecessary;
- (struct CGPoint)_convertPointToScreenBacking:(struct CGPoint)arg1;
- (void)_createBitmapIfNecessary;
- (void)_addSinglePointToBitmap: /* Error: Ran out of types for this method. */;
- (void)_applyDirtyRectToView;
- (void)_addToDirtyRect:(struct CGRect)arg1;

@end
