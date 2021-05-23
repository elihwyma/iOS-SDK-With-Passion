/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXFillView.h>

@class SXClippingView, SXRepeatableImageFill, SXRepeatableImageView;

@interface SXRepeatableImageFillView : SXFillView

{
    SXRepeatableImageView *_imageView;
    SXClippingView *_clippingView;
    struct CGSize _patternSize;
}

@property (nonatomic, readonly) SXRepeatableImageFill *fill;
@property (nonatomic, readonly) SXRepeatableImageView *imageView;
@property (nonatomic, readonly) SXClippingView *clippingView;
@property (nonatomic) struct CGSize patternSize;

- (void)dealloc;
- (void)load;
- (void)pause;
- (struct CGRect)contentFrame;
- (void)play;
- (void)layoutSubviews;
- (void)setContentFrame:(struct CGRect)arg1;
- (struct CGRect)fillFrameWithBoundingSize:(struct CGSize)arg1;
- (id)initWithRepeatableImageFill:(id)arg1 imageView:(id)arg2;

@end
