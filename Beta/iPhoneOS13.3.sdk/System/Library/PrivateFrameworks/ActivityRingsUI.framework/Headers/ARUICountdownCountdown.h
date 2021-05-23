/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <ActivityRingsUI/ARUICountdownDefaultAnimation.h>

__attribute__((visibility("hidden")))
@interface ARUICountdownCountdown : ARUICountdownDefaultAnimation

{
    unsigned long long _step;
    _Bool _cancelable;
    double _percent;
}

@property (nonatomic) double percent;

+ (id)identifier;

- (id)description;
- (id)identifier;
- (double)delay;
- (double)duration;
- (id)timingFunction;
- (_Bool)cancelable;
- (void)applyToCountdownView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)countdownStep;
- (id)initWithPercent:(double)arg1 andStep:(unsigned long long)arg2 cancelable:(_Bool)arg3;

@end
