/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSTimer, _UIKeyCommandDiscoverabilityHUDWindow;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUD : NSObject

{
    NSTimer *_HUDPopTimer;
    _UIKeyCommandDiscoverabilityHUDWindow *_window;
    _Bool _commandKeyIsDown;
}

+ (id)sharedKeyCommandDiscoverabilityHUD;
+ (void)clearHUDPopTimer;
+ (void)dismissHUD;

- (void)dealloc;
- (void)_clearHUDPopTimer;
- (void)_dismissHUD;
- (void)_scheduleHUDPresentation;
- (void)_applicationWillResignActive;
- (void)_didTakeScreenshot;
- (void)_HUDPopTimerFired:(id)arg1;
- (id)_performableKeyCommandsWithResponder:(id)arg1;
- (void)_presentHUDWithKeyCommands:(id)arg1;
- (void)handlePhysicalKeyboardEvent:(id)arg1;

@end
