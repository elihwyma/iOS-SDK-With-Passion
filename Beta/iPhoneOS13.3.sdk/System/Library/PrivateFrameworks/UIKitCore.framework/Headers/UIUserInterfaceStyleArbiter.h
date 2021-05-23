/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSBackgroundActivityScheduler, NSDate, NSString, UISUserInterfaceStyleMode, _UICustomScheduleController, _UISunScheduleController;

@interface UIUserInterfaceStyleArbiter : NSObject

{
    UISUserInterfaceStyleMode *_styleMode;
    long long _currentModeValue;
    long long _currentStyle;
    long long _lastProposedAutomaticStyle;
    struct {
        long long style;
        long long timing;
    } _lastOverride;
    int _screenDimmingNotificationToken;
    _Bool _isDim;
    _UISunScheduleController *_sunScheduleController;
    _UICustomScheduleController *_customScheduleController;
    NSDate *_lastUpdateDate;
    NSBackgroundActivityScheduler *_backgroundActivityScheduler;
    int _notificationToken;
}

@property (nonatomic, readonly) long long currentStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_init;
- (void)_updateCurrentStyleAndNotify:(_Bool)arg1 forReason:(long long)arg2;
- (void)_logPeriodicEvent;
- (void)toggleCurrentStyleWithOverrideTiming:(long long)arg1;
- (void)_updateCurrentStyleForReason:(long long)arg1;
- (_Bool)_updateControllersWithOldModeValue:(long long)arg1 newModeValue:(long long)arg2;
- (long long)_proposedStyleForCurrentMode;
- (void)_setWatchesScreenDim:(_Bool)arg1;
- (void)_logChangeEventWithNewMode:(long long)arg1 oldMode:(long long)arg2 newStyle:(long long)arg3 oldStyle:(long long)arg4 reason:(long long)arg5;
- (void)_updateScreenDimUpdatingStyle:(_Bool)arg1;
- (void)userInterfaceStyleModeDidChange:(id)arg1;
- (void)toggleCurrentStyle;
- (id)nextTransition;

@end
