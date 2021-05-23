/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UIScrollView.h>

#import <QuickLook/Swift-Protocol.h>

@class NSString;

@protocol QLPreviewScrollViewZoomDelegate;

__attribute__((visibility("hidden")))
@interface QLPreviewScrollView : UIScrollView <Swift>

{
    _Bool _inSizeChange;
    struct CGSize _lastUpdatedSize;
    _Bool _readyToCancelPanGesture;
    _Bool _needsZoomUpdate;
    _Bool _preventZoomUpdate;
    _Bool _shouldFit;
    double _minZoomScale;
    double _maxZoomScale;
    double _pinchMaxZoomScale;
    double _fillZoomScale;
    double _fitZoomScale;
    double _contentIsSmallerThanView;
    id <QLPreviewScrollViewZoomDelegate> _zoomDelegate;
    struct CGSize _contentViewSize;
    struct UIEdgeInsets _peripheryInsetsLandscape;
    struct UIEdgeInsets _peripheryInsetsPortrait;
}

@property (nonatomic) _Bool needsZoomUpdate;
@property (nonatomic) struct CGSize contentViewSize;
@property (readonly) double minZoomScale;
@property (readonly) double maxZoomScale;
@property (readonly) double pinchMaxZoomScale;
@property (readonly) double fillZoomScale;
@property (readonly) double fitZoomScale;
@property (readonly) double contentIsSmallerThanView;
@property (weak) id <QLPreviewScrollViewZoomDelegate> zoomDelegate;
@property (nonatomic) _Bool preventZoomUpdate;
@property _Bool shouldFit;
@property struct UIEdgeInsets peripheryInsetsLandscape;
@property struct UIEdgeInsets peripheryInsetsPortrait;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)layoutSubviews;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)resetZoomScale;
- (void)_updateScrollViewZomming;
- (void)updateZoomScales;
- (void)updateZoomScalesWithSize:(struct CGSize)arg1;
- (double)_maxZoomScaleForContentSize:(struct CGSize)arg1;
- (struct CGRect)zoomRectForScale:(double)arg1 withCenter:(struct CGPoint)arg2;

@end
