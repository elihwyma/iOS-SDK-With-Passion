/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRApplicationActivity, NSArray, NSMutableArray, _MRDeviceInfoMessageProtobuf, _MRNowPlayingClientProtobuf, _MROriginProtobuf;

@protocol OS_dispatch_queue;

@interface MRNowPlayingOriginClient : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _canBeNowPlayingApp;
    double _canBeNowPlayingAppTimestamp;
    _Bool _isOverrideApp;
    unsigned int _routeDiscoveryMode;
    NSMutableArray *_applicationPickedRoutes;
    unsigned int _inputMode;
    float _volume;
    unsigned int _volumeCapabilities;
    MRApplicationActivity *_activity;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    CDUnknownBlockType _playbackQueueCallback;
    CDUnknownBlockType _playbackQueueTransactionCallback;
    CDUnknownBlockType _capabilitiesCallback;
    CDUnknownBlockType _commandCallback;
    CDUnknownBlockType _beginLyricsEventCallback;
    CDUnknownBlockType _endLyricsEventCallback;
    CDUnknownBlockType _playbackSessionCallback;
    CDUnknownBlockType _playbackSessionMigrateBeginCallback;
    CDUnknownBlockType _playbackSessionMigrateEndCallback;
    CDUnknownBlockType _playbackSessionMigrateRequestCallback;
    NSMutableArray *_nowPlayingClients;
    unsigned int _hardwareRemoteBehavior;
    _MRNowPlayingClientProtobuf *_activeNowPlayingClient;
    _MROriginProtobuf *_origin;
}

@property (nonatomic, readonly) _MROriginProtobuf *origin;
@property (nonatomic) _Bool canBeNowPlayingApp;
@property (nonatomic) _Bool isOverrideApp;
@property (nonatomic) unsigned int hardwareRemoteBehavior;
@property (nonatomic) unsigned int routeDiscoveryMode;
@property (copy, nonatomic) NSArray *applicationPickedRoutes;
@property (nonatomic) unsigned int inputMode;
@property (nonatomic) unsigned int volumeCapabilities;
@property (nonatomic) float volume;
@property (retain, nonatomic) MRApplicationActivity *activity;
@property (retain, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (copy, nonatomic) CDUnknownBlockType playbackQueueCallback;
@property (copy, nonatomic) CDUnknownBlockType playbackQueueTransactionCallback;
@property (copy, nonatomic) CDUnknownBlockType commandCallback;
@property (copy, nonatomic) CDUnknownBlockType playbackSessionCallback;
@property (copy, nonatomic) CDUnknownBlockType playbackSessionMigrateBeginCallback;
@property (copy, nonatomic) CDUnknownBlockType playbackSessionMigrateEndCallback;
@property (copy, nonatomic) CDUnknownBlockType playbackSessionMigrateRequestCallback;
@property (copy, nonatomic) CDUnknownBlockType beginLyricsEventCallback;
@property (copy, nonatomic) CDUnknownBlockType endLyricsEventCallback;
@property (retain, nonatomic) _MRNowPlayingClientProtobuf *activeNowPlayingClient;
@property (nonatomic, readonly) NSArray *nowPlayingClients;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (void)removeClient:(id)arg1;
- (id)initWithOrigin:(id)arg1;
- (void)restoreNowPlayingClientState;
- (void)_registerMediaServerNotifications;
- (void)_unregisterMediaServerNotifications;
- (void)_avSessionMediaServicesResetNotification:(id)arg1;
- (id)existingNowPlayingClientForPlayerPath:(id)arg1;
- (id)nowPlayingClientForPlayerPath:(id)arg1;

@end
