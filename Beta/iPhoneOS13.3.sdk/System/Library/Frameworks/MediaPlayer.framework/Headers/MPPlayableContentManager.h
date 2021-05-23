/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class CARSessionStatus, MPPlayableContentManagerContext, NSArray, NSMutableSet, NSOperationQueue, NSString;

@protocol MPPlayableContentDataSource, MPPlayableContentDelegate, OS_dispatch_queue;

@interface MPPlayableContentManager : NSObject

{
    NSMutableSet *_mutatedContentItems;
    NSMutableSet *_contentItemIdentifiersSentToMediaRemote;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOperationQueue *_artworkUpdateQueue;
    _Bool _coalescingUpdates;
    _Bool _scheduledSupportedAPIsChange;
    CARSessionStatus *_currentSessionStatus;
    id <MPPlayableContentDataSource> _dataSource;
    id <MPPlayableContentDelegate> _delegate;
    MPPlayableContentManagerContext *_context;
    NSArray *_nowPlayingIdentifiers;
}

@property (retain, nonatomic) MPPlayableContentManagerContext *context;
@property (weak, nonatomic) id <MPPlayableContentDataSource> dataSource;
@property (weak, nonatomic) id <MPPlayableContentDelegate> delegate;
@property (copy, nonatomic) NSArray *nowPlayingIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_deviceIsCarplayCapable;
+ (id)sharedContentManager;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)reloadData;
- (void)beginUpdates;
- (void)endUpdates;
- (void)_setupNotifications;
- (void)_tearDownNotifications;
- (void)sessionDidConnect:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;
- (void)_contentItemChangedNotification:(id)arg1;
- (void)_enqueueArtworkUpdate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_enqueueArtworkUpdate:(id)arg1 size:(struct CGSize)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_setupMediaRemoteEndpoint;
- (void)_tearDownMediaRemoteEndpoint;
- (void)_pushContentItemsUpdate;
- (void)_handlePlaybackInitializationCompletedWithContext:(id)arg1 error:(id)arg2;
- (_Bool)_contentItemWasSentToMediaRemote:(id)arg1;
- (_Bool)_onQueueContentItemWasSentToMediaRemote:(id)arg1;
- (void)_markContentItemsAsSentToMediaRemote:(id)arg1;
- (void)_limitedUIChanged:(id)arg1;
- (void)_browsableContentEndpointChanged:(id)arg1;
- (_Bool)_musicListsLimited;
- (_Bool)_areContentLimitsEnforced;
- (void)_updateSupportedAPIs;
- (void)_scheduleUpdateSupportedAPIs;

@end
