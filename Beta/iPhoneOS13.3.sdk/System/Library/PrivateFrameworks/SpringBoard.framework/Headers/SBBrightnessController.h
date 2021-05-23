/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SBBrightnessController : NSObject

{
    _Bool _debounce;
    struct BKSDisplayBrightnessTransaction *_brightnessDownTransaction;
    struct BKSDisplayBrightnessTransaction *_brightnessUpTransaction;
    NSMutableArray *_maximumBrightnessAssertions;
}

+ (id)sharedBrightnessController;

- (void)setBrightnessLevel:(float)arg1;
- (void)handleBrightnessEvent:(struct __IOHIDEvent *)arg1;
- (void)cancelBrightnessEvent;
- (float)_calcButtonRepeatDelay;
- (void)_increaseBrightnessAndRepeat;
- (void)_decreaseBrightnessAndRepeat;
- (void)_exitMaximumBrightnessMode;
- (void)_enterMaximumBrightnessMode;
- (void)_setBrightnessLevel:(float)arg1 showHUD:(_Bool)arg2;
- (void)_adjustBacklightLevel:(_Bool)arg1;
- (id)acquireMaximumBrightnessAssertionForReason:(id)arg1;

@end
