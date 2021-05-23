/*
 Image: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
 */

#import <KeyboardArbiter/UIDelayedAction.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface UIHeldAction : UIDelayedAction

{
    _Bool _holding;
    NSDate *_holdBegan;
    double _baseDelay;
    double _timeBalance;
}

- (void)cancel;
- (void)resume;
- (_Bool)isHolding;
- (void)hold;
- (void)unschedule;
- (void)touchWithDelay:(double)arg1;

@end
