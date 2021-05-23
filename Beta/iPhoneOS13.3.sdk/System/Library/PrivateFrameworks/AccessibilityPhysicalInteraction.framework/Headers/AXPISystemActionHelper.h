/*
 Image: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface AXPISystemActionHelper : NSObject

{
    struct __IOHIDUserDevice *_homeButtonUserDevice;
    unsigned long long _sysdiagnoseCancelCount;
    NSObject<OS_dispatch_queue> *_sysdiagnoseCancelCountQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)toggleNotificationCenter;
- (void)rebootDevice;
- (void)takeScreenshot;
- (void)toggleReachability;
- (void)activateSOSMode;
- (void)armApplePay;
- (void)toggleDock;
- (void)toggleSpotlight;
- (void)revealSpotlight;
- (void)adjustSystemZoom:(long long)arg1;
- (void)increaseVolume;
- (void)decreaseVolume;
- (void)warm;
- (void)toggleMute;
- (void)pressHomeButtonDown;
- (void)liftHomeButtonUp;
- (void)_handleHomeButtonDispatch:(_Bool)arg1;
- (void)pressLockButtonDown;
- (void)liftLockButtonUp;
- (void)_sendButtonEvent:(unsigned int)arg1;
- (void)pressVolumeDownButtonDown;
- (void)liftVolumeDownButtonUp;
- (void)pressVolumeUpButtonDown;
- (void)liftVolumeUpButtonUp;
- (void)_sendShakeEvent;
- (void)_sendDeviceOrientationChange:(int)arg1;
- (void)activateSiri;
- (void)activateVoiceControl;
- (void)activateHomeButton;
- (void)toggleCommandAndControl;
- (void)toggleAppSwitcher;
- (void)activateLockButton;
- (void)toggleRingerSwitch:(_Bool)arg1;
- (void)activateTripleClick;
- (void)shake;
- (void)toggleControlCenter;
- (void)rotatePortrait;
- (void)rotateUpsideDown;
- (void)rotateLeft;
- (void)rotateRight;
- (void)performSysdiagnoseWithStatusUpdateHandler:(CDUnknownBlockType)arg1;
- (void)_showAlertForReboot;

@end
