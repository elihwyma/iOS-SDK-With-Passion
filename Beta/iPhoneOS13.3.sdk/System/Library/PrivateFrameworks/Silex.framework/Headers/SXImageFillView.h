/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXFillView.h>

@class SXAnimatedImage, SXClippingView, SXImageFill, SXImageResource, SXImageView, UIImage;

@interface SXImageFillView : SXFillView

{
    SXClippingView *_clippingView;
    SXImageFill *_imageFill;
    SXImageResource *_imageResource;
    SXImageView *_imageView;
}

@property (retain, nonatomic) SXClippingView *clippingView;
@property (nonatomic, readonly) SXImageView *imageView;
@property (nonatomic, readonly) SXImageFill *imageFill;
@property (nonatomic, readonly) SXImageResource *imageResource;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) SXAnimatedImage *animatedImage;

- (void)dealloc;
- (void)load;
- (void)pause;
- (struct CGRect)contentFrame;
- (void)play;
- (void)layoutSubviews;
- (void)setContentFrame:(struct CGRect)arg1;
- (struct CGRect)fillFrameWithBoundingSize:(struct CGSize)arg1;
- (id)initWithImageFill:(id)arg1 imageResource:(id)arg2 imageViewFactory:(id)arg3;
- (id)dragable;

@end
