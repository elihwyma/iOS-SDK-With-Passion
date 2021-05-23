/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <Foundation/NSObject.h>

@protocol ICDocCamPhysicalCaptureNotifierDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamPhysicalCaptureNotifier : NSObject

{
    _Bool _enabled;
    id <ICDocCamPhysicalCaptureNotifierDelegate> _delegate;
    long long _state;
    long long __volumeUpButtonState;
    long long __volumeDownButtonState;
}

@property (nonatomic, setter=_setState:) long long state;
@property (nonatomic, setter=_setVolumeUpButtonState:) long long _volumeUpButtonState;
@property (nonatomic, setter=_setVolumeDownButtonState:) long long _volumeDownButtonState;
@property (weak, nonatomic) id <ICDocCamPhysicalCaptureNotifierDelegate> delegate;
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
