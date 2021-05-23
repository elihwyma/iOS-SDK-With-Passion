/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIView.h>

@class CAGradientLayer;

__attribute__((visibility("hidden")))
@interface AVStatusBarBackgroundGradientViewSubview : UIView

{
    double _gradientOpacity;
}

@property (nonatomic, readonly) CAGradientLayer *layer;
@property (nonatomic) double gradientOpacity;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1;

@end
