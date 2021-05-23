/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIView.h>

@class AVStatusBarBackgroundGradientViewSubview, CABackdropLayer;

__attribute__((visibility("hidden")))
@interface AVStatusBarBackgroundGradientView : UIView

{
    AVStatusBarBackgroundGradientViewSubview *_gradientView;
}

@property (nonatomic, readonly) CABackdropLayer *layer;
@property (retain, nonatomic) AVStatusBarBackgroundGradientViewSubview *gradientView;

+ (Class)layerClass;

- (double)alpha;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;

@end
