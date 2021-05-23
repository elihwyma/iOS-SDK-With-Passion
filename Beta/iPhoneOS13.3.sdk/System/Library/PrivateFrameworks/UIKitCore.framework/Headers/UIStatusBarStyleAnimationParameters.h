/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarAnimationParameters.h>

@interface UIStatusBarStyleAnimationParameters : UIStatusBarAnimationParameters

{
    int _styleAnimation;
}

@property (nonatomic) int styleAnimation;

- (id)initWithDefaultParameters;
- (_Bool)shouldAnimate;

@end
