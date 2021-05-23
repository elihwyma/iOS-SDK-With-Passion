/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIScrollView.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUISlideshowImageScrollView : UIScrollView

{
    UIImageView *_imageView;
    struct CGPoint _centerPointBeforeResize;
    double _scaleBeforeResize;
    UIImage *_image;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic, readonly) UIImageView *imageView;

- (struct CGRect)visibleRect;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_prepareToResize;
- (void)_recoverFromResize;
- (void)_resetMinMaxZoomScales;
- (void)resetZoomScale;
- (void)zoomIntoPoint:(struct CGPoint)arg1;

@end
