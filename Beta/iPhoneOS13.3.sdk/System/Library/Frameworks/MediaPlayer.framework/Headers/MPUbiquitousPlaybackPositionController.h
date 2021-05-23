/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class SBCPlaybackPositionDomain, SBCPlaybackPositionSyncService;

@protocol OS_dispatch_queue;

@interface MPUbiquitousPlaybackPositionController : NSObject

{
    _Bool _isServiceActive;
    _Bool _externallyActive;
    _Bool _beganUsingPlaybackPositionMetadata;
    _Bool _databaseHasBookmarkableContents;
    _Bool _applicationBecomingActive;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    SBCPlaybackPositionSyncService *_uppServiceProxy;
    SBCPlaybackPositionDomain *_uppDomain;
}

@property (retain, nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic, readonly) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain, nonatomic) SBCPlaybackPositionSyncService *uppServiceProxy;
@property (retain, nonatomic) SBCPlaybackPositionDomain *uppDomain;
@property (nonatomic, getter=isServiceActive) _Bool serviceActive;
@property (nonatomic, getter=isServiceActive) _Bool beganUsingPlaybackPositionMetadata;
@property (nonatomic) _Bool databaseHasBookmarkableContents;
@property (nonatomic, readonly) _Bool applicationBecomingActive;
@property (nonatomic) _Bool externallyActive;

+ (id)sharedUbiquitousPlaybackPositionController;

- (id)init;
- (void)dealloc;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)beginUsingPlaybackPositionMetadata;
- (void)_applicationDidEnterForegroundNotification:(id)arg1;
- (void)noteChangedPlaybackPositionMetadataForTrackPersistentID:(long long)arg1 isCheckpoint:(_Bool)arg2;
- (id)playbackPositionForLocalEntityIdentifier:(id)arg1;
- (id)playbackPositionForLocalEntityIdentifiers:(id)arg1;
- (void)persistPlaybackPositionMetadataEntity:(id)arg1 isCheckpoint:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_playbackPositionEntityWithValuesFromMusicLibraryTrackPersistentID:(long long)arg1;
- (_Bool)_onQueue_shouldBeActive;
- (_Bool)_onQueue_isEnabled;
- (id)_onServiceQueue_connectedUPPServiceProxy;
- (void)_onServiceQueue_resignActiveService;
- (void)_onServiceQueue_becomeActiveService;
- (void)_onServiceQueue_updateActiveServiceIfNeeded;

@end
