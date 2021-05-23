/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBFStaticWallpaperView.h>

@class NSString, SBFSubject, SBFWallpaperParallaxSettings, UIImageView, UIScrollView;

@protocol SBFCancelable;

@interface SBFScrollableStaticWallpaperView : SBFStaticWallpaperView

{
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    SBFWallpaperParallaxSettings *_parallaxSettings;
    SBFSubject *_scrollViewObserver;
    id <SBFCancelable> _colorBoxCancelToken;
    id <SBFCancelable> _parallaxCancelToken;
    double _minimumZoomScaleForParallax;
    double _minimumZoomScale;
    _Bool _automaticallyEnablesParallax;
}

@property (nonatomic) _Bool automaticallyEnablesParallax;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_shouldScaleForParallax;
+ (_Bool)_canCacheImages;
+ (_Bool)_canDownscaleSampleImage;

- (void)dealloc;
- (void)setContentView:(id)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)didMoveToWindow;
- (id)_scrollView;
- (struct CGRect)_cropRect;
- (struct CGSize)_imageSize;
- (double)_throttleDuration;
- (struct CGRect)cropRect;
- (void)_setupScrollView;
- (void)setParallaxEnabled:(_Bool)arg1;
- (id)_newImageView;
- (double)parallaxFactor;
- (_Bool)supportsCropping;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6;
- (void)_setupContentViewWithOptions:(unsigned long long)arg1;
- (void)setCropRect:(struct CGRect)arg1 zoomScale:(double)arg2;
- (double)cropZoomScale;
- (struct CGPoint)_boundedContentOffsetForOverhang;
- (double)_parallaxFactorWithZoomScale:(double)arg1 contentOffset:(struct CGPoint)arg2;
- (double)_scrollViewParallaxFactor;
- (struct CGPoint)_minimumContentOffsetForOverhang;
- (struct CGPoint)_maximumContentOffsetForOverhang;
- (void)_resetColorBoxes;
- (void)_setupScrollViewObserver;
- (void)_setupColorBoxObserver;
- (void)_setupParallaxObserver;
- (void)_updateParallaxForScroll;
- (void)_updateScrollViewZoomScales;
- (id)_wallpaperImageForAnalysis;

@end
