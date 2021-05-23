/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentAnimation.h>

@class UIColor;

@interface SXParallaxFadeScene : SXComponentAnimation

@property (nonatomic, readonly) UIColor *fadeColor;

- (Class)handlerClass;
- (_Bool)userControllable;

@end
