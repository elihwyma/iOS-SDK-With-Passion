/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPAVController;

@interface MPAVPolicyEnforcer : NSObject

{
    int _screenRecordingNotifyToken;
    _Bool _lastKnownScreenRecordingState;
    MPAVController *_controller;
}

@property (weak, nonatomic, readonly) MPAVController *controller;

- (void)dealloc;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)initWithAVController:(id)arg1;
- (void)_isScreenRecordingDidChange:(_Bool)arg1;
- (void)_registerForScreenRecordingNotifications;
- (void)_updateScreenRecordingState;
- (void)_unregisterForScreenRecordingNotifications;

@end
