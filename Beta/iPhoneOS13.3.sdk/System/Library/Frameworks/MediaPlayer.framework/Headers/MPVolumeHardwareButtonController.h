/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@protocol MPVolumeControllerDataSource;

@interface MPVolumeHardwareButtonController : NSObject

{
    double _pendingVolumeChange;
    _Bool _debounceVolumeRepeat;
    _Bool _didRegisterForButtonNotifications;
    id <MPVolumeControllerDataSource> _activeDataSource;
}

@property (retain, nonatomic) id <MPVolumeControllerDataSource> activeDataSource;

+ (id)sharedController;

- (id)_init;
- (void)_commitVolumeChange;
- (void)_changeVolumeBy:(double)arg1;
- (double)_calculateButtonRepeatDelay;
- (void)increaseVolume;
- (void)decreaseVolume;
- (void)cancelVolumeEvent;
- (void)handleVolumeButtonWithType:(long long)arg1 down:(_Bool)arg2;
- (void)handleVolumeDownButton;
- (void)handleVolumeUpButton;
- (void)_volumeUpButtonTouchDown:(id)arg1;
- (void)_volumeUpButtonTouchUp:(id)arg1;
- (void)_volumeDownButtonTouchDown:(id)arg1;
- (void)_volumeDownButtonTouchUp:(id)arg1;
- (void)_applicationDidBecomeActiveNotification;
- (void)_applicationWillResignActiveNotification;
- (void)_registerForButtonNotificationsIfNeeded;
- (void)_unregisterForButtonNotificationsIfNeeded;

@end
