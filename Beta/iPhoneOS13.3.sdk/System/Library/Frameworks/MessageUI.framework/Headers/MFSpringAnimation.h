/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <QuartzCore/CASpringAnimation.h>

@class MFSpringAnimationDelegate;

@interface MFSpringAnimation : CASpringAnimation

@property (retain, nonatomic) MFSpringAnimationDelegate *delegate;

+ (double)defaultAnimationDuration;
+ (id)springAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;

- (id)init;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;

@end
