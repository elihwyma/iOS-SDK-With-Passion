/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class SBSHardwareButtonService;

@protocol CKCamPhysicalCaptureNotifierDelegate;

@interface CKCamPhysicalCaptureNotifier : NSObject

{
    _Bool _enabled;
    id <CKCamPhysicalCaptureNotifierDelegate> _delegate;
    long long _state;
    long long __volumeUpButtonState;
    long long __volumeDownButtonState;
    SBSHardwareButtonService *__cameraButtonRequest;
}

@property (nonatomic, setter=_setState:) long long state;
@property (nonatomic, setter=_setVolumeUpButtonState:) long long _volumeUpButtonState;
@property (nonatomic, setter=_setVolumeDownButtonState:) long long _volumeDownButtonState;
@property (retain, nonatomic) SBSHardwareButtonService *_cameraButtonRequest;
@property (weak, nonatomic) id <CKCamPhysicalCaptureNotifierDelegate> delegate;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (id)init;
- (void)dealloc;
- (void)_updateCaptureButtonNotifications;
- (void)_handleVolumeUpButtonUpNotification:(id)arg1;
- (void)_handleVolumeUpButtonDownNotification:(id)arg1;
- (void)_handleVolumeDownButtonUpNotification:(id)arg1;
- (void)_handleVolumeDownButtonDownNotification:(id)arg1;
- (void)_updateStateAndNotifyDelegateIfNeeded;

@end
