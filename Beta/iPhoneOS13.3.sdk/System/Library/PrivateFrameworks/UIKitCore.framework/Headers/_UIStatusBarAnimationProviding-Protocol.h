/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIStatusBarHideAnimationParameters, UIStatusBarStyleAnimationParameters;

@protocol _UIStatusBarAnimationProviding <Swift>

@property (nonatomic, readonly, getter=_preferredStatusBarStyleAnimationParameters) UIStatusBarStyleAnimationParameters *preferredStatusBarStyleAnimationParameters;
@property (nonatomic, readonly, getter=_preferredStatusBarHideAnimationParameters) UIStatusBarHideAnimationParameters *preferredStatusBarHideAnimationParameters;
@property (nonatomic, readonly) long long preferredStatusBarUpdateAnimation;

@end
