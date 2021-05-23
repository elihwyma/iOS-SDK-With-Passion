/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <ActivityRingsUI/ARUICountdownDefaultAnimation.h>

__attribute__((visibility("hidden")))
@interface ARUICountdownFadeIn : ARUICountdownDefaultAnimation

+ (id)identifier;

- (id)identifier;
- (double)delay;
- (double)duration;
- (id)timingFunction;
- (_Bool)cancelable;
- (void)applyToCountdownView:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
