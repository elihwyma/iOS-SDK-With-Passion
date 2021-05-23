/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXFillView.h>

@class SXClippingView, SXGradientView, SXLinearGradientFill;

@interface SXGradientFillView : SXFillView

{
    SXLinearGradientFill *_gradientFill;
    SXClippingView *_clippingView;
    SXGradientView *_gradientView;
}

@property (nonatomic, readonly) SXLinearGradientFill *gradientFill;
@property (nonatomic, readonly) SXClippingView *clippingView;
@property (nonatomic, readonly) SXGradientView *gradientView;

- (struct CGRect)contentFrame;
- (void)layoutSubviews;
- (void)setContentFrame:(struct CGRect)arg1;
- (struct CGRect)fillFrameWithBoundingSize:(struct CGSize)arg1;
- (id)initWithGradientFill:(id)arg1 gradientFactory:(id)arg2;

@end
