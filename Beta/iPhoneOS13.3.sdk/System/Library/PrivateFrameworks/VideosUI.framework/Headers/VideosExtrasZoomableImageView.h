/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIScrollView.h>

#import <VideosUI/Swift-Protocol.h>

@class NSString, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface VideosExtrasZoomableImageView : UIScrollView <Swift>

{
    UIImage *_image;
    double _scaleToRestoreAfterResize;
    UIImageView *_zoomView;
    struct CGSize _imageSize;
    struct CGPoint _pointToCenterAfterResize;
}

@property (nonatomic) struct CGSize imageSize;
@property (nonatomic) struct CGPoint pointToCenterAfterResize;
@property (nonatomic) double scaleToRestoreAfterResize;
@property (retain, nonatomic) UIImageView *zoomView;
@property (retain, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGPoint)_minimumContentOffset;
- (struct CGPoint)_maximumContentOffset;
- (void)_prepareToResize;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;
- (void)zoomToPoint:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)_recoverFromResizing;
- (void)_updateMinimumAndMaximumZoomScalesForCurrentBounds;

@end
