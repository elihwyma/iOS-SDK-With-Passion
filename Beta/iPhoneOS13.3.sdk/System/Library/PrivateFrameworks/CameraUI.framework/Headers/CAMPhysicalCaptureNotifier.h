/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class UIView;

@protocol BSInvalidatable, CAMPhysicalCaptureNotifierDelegate;

@interface CAMPhysicalCaptureNotifier : NSObject

{
    _Bool _enabled;
    id <CAMPhysicalCaptureNotifierDelegate> _delegate;
    long long _state;
    long long __volumeUpButtonState;
    long long __volumeDownButtonState;
    UIView *__view;
    id <BSInvalidatable> __cameraButtonRequest;
}

@property (nonatomic, setter=_setState:) long long state;
@property (nonatomic, setter=_setVolumeUpButtonState:) long long _volumeUpButtonState;
@property (nonatomic, setter=_setVolumeDownButtonState:) long long _volumeDownButtonState;
@property (nonatomic, readonly) UIView *_view;
@property (retain, nonatomic) id <BSInvalidatable> _cameraButtonRequest;
@property (weak, nonatomic) id <CAMPhysicalCaptureNotifierDelegate> delegate;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (void)dealloc;
- (id)initWithView:(id)arg1;
- (void)_updateCaptureButtonNotifications;
- (void)_handleVolumeUpButtonUpNotification:(id)arg1;
- (void)_handleVolumeUpButtonDownNotification:(id)arg1;
- (void)_handleVolumeDownButtonUpNotification:(id)arg1;
- (void)_handleVolumeDownButtonDownNotification:(id)arg1;
- (void)_updateStateAndNotifyDelegateIfNeeded;

@end
