/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarAnimationParameters.h>

@interface UIStatusBarHideAnimationParameters : UIStatusBarAnimationParameters

{
    int _hideAnimation;
    double _additionalSlideHeight;
}

@property (nonatomic) int hideAnimation;
@property (nonatomic) double additionalSlideHeight;

- (id)initWithDefaultParameters;
- (_Bool)shouldAnimate;

@end
