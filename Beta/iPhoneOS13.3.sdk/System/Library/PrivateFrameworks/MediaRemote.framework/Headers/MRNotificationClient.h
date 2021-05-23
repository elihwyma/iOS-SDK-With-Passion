/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSOrderedSet;

@protocol OS_dispatch_queue;

@interface MRNotificationClient : NSObject

{
    unsigned long long _registeredNowPlayingObservers;
    NSObject<OS_dispatch_queue> *_customNotificationsQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSOrderedSet *_nowPlayingNotifications;
    NSOrderedSet *_routesChangedNotifications;
    NSOrderedSet *_volumeControlNotifications;
    NSOrderedSet *_externalScreenNotifications;
    NSOrderedSet *_originNotifications;
    NSOrderedSet *_supportedCommandsNotifications;
    NSOrderedSet *_voiceInputNotifications;
    NSOrderedSet *_errorNotifications;
    _Bool _receivesExternalScreenTypeChangedNotifications;
    _Bool _receivesSupportedCommandsNotifications;
    _Bool _receivesRoutesChangedNotifications;
    _Bool _receivesVolumeControlNotifications;
    _Bool _receivesOriginChangedNotifications;
    _Bool _receivesPlaybackErrorNotifications;
    _Bool _receivesVoiceInputRecordingStateNotifications;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, readonly, getter=isRegisteredForNowPlayingNotifications) _Bool registeredForNowPlayingNotifications;
@property (nonatomic) _Bool receivesExternalScreenTypeChangedNotifications;
@property (nonatomic) _Bool receivesSupportedCommandsNotifications;
@property (nonatomic) _Bool receivesRoutesChangedNotifications;
@property (nonatomic) _Bool receivesVolumeControlNotifications;
@property (nonatomic) _Bool receivesOriginChangedNotifications;
@property (nonatomic) _Bool receivesPlaybackErrorNotifications;
@property (nonatomic) _Bool receivesVoiceInputRecordingStateNotifications;

+ (id)nowPlayingNotifications;

- (id)init;
- (void)registerForNowPlayingNotificationsWithQueue:(id)arg1;
- (void)unregisterForNowPlayingNotifications;
- (void)registerForNowPlayingNotificationsWithQueue:(id)arg1 force:(_Bool)arg2;
- (void)dispatchNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3;
- (_Bool)postNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3;
- (_Bool)_postNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3 withHandler:(CDUnknownBlockType)arg4;

@end
