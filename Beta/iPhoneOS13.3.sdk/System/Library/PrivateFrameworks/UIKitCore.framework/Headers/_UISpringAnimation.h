/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <QuartzCore/CASpringAnimation.h>

@class _UISpringAnimationDelegate;

__attribute__((visibility("hidden")))
@interface _UISpringAnimation : CASpringAnimation

@property (retain, nonatomic) _UISpringAnimationDelegate *delegate;

+ (double)defaultAnimationDuration;
+ (double)defaultStiffness;
+ (double)defaultDamping;
+ (void)setDefaultDamping:(double)arg1;
+ (void)setDefaultStiffness:(double)arg1;
+ (id)springAnimationWithKeyPath:(id)arg1 toLayer:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;

- (id)init;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;

@end
