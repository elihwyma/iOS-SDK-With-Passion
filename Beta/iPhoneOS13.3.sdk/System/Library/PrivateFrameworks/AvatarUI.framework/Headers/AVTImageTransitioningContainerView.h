/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIView.h>

@class AVTUIAnimatingImageView, UIImage;

@interface AVTImageTransitioningContainerView : UIView

{
    UIView *_liveView;
    UIImage *_staticImage;
    long long _layoutMode;
    AVTUIAnimatingImageView *_imageViewsContainer;
    UIView *_borderMaskView;
    struct CGSize _aspectRatio;
}

@property (nonatomic, readonly) AVTUIAnimatingImageView *imageViewsContainer;
@property (nonatomic, readonly) UIView *borderMaskView;
@property (nonatomic, readonly) UIView *staticView;
@property (retain, nonatomic) UIView *liveView;
@property (retain, nonatomic) UIImage *staticImage;
@property (nonatomic) struct CGSize aspectRatio;
@property (nonatomic, readonly) long long layoutMode;

+ (struct CGRect)imageViewRectForContentRect:(struct CGRect)arg1 liveViewRect:(struct CGRect)arg2 imageSize:(struct CGSize)arg3 scale:(double)arg4;
+ (struct CGRect)borderMaskRectForContentRect:(struct CGRect)arg1;
+ (struct CGRect)liveViewRectForContentRect:(struct CGRect)arg1 aspectRatio:(struct CGSize)arg2 layoutMode:(long long)arg3 scale:(double)arg4;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 layoutMode:(long long)arg2;
- (void)setStaticImage:(id)arg1 animated:(_Bool)arg2;
- (void)transitionStaticViewToFront;
- (void)transitionLiveViewToFront;
- (void)setStaticViewVisible:(_Bool)arg1;

@end
