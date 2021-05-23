/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarAnimationParameters.h>

@interface UIStatusBarOrientationAnimationParameters : UIStatusBarAnimationParameters

{
    int _orientationAnimation;
}

@property (nonatomic) int orientationAnimation;

- (id)initWithDefaultParameters;
- (_Bool)shouldAnimate;

@end
