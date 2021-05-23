/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class _TVImageView;

__attribute__((visibility("hidden")))
@interface VUICollectionViewFeaturedView : UIView

{
    _TVImageView *_imageView;
    UIView *_overlayView;
}

@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) UIView *overlayView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
