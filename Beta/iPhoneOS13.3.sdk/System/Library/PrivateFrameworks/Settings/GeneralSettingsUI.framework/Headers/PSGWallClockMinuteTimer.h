/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <Foundation/NSObject.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface PSGWallClockMinuteTimer : NSObject

{
    id _target;
    SEL _action;
    NSTimer *_timer;
}

- (void)invalidate;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)startTimer;
- (void)_fireAction;

@end
