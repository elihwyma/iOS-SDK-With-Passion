/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMusicPlayerController.h>

@class MPCPlayerPath, MPCRemotePlaybackEngine, NSObject, _MPMusicPlayerQueueTransaction;

@protocol OS_dispatch_queue;

@interface MPMusicPlayerApplicationController : MPMusicPlayerController

{
    _MPMusicPlayerQueueTransaction *_queueTransaction;
    MPCPlayerPath *_playerPath;
    MPCRemotePlaybackEngine *_playbackEngine;
    long long _notificationsCount;
    NSObject<OS_dispatch_queue> *_queueTransactionQueue;
}

@property (nonatomic, readonly) MPCPlayerPath *playerPath;
@property (nonatomic, readonly) MPCRemotePlaybackEngine *playbackEngine;
@property (nonatomic) long long notificationsCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queueTransactionQueue;
@property (retain, nonatomic) _MPMusicPlayerQueueTransaction *queueTransaction;

+ (_Bool)_isPlayerInstalled;

- (void)prepareToPlay;
- (id)_initWithClientIdentifier:(id)arg1;
- (void)beginGeneratingPlaybackNotifications;
- (void)endGeneratingPlaybackNotifications;
- (void)_queueDidChangeWithResponse:(id)arg1;
- (void)performQueueTransaction:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_playbackEngineDidDisconnect:(id)arg1;
- (void)_playerPathDidChange:(id)arg1;
- (id)_onAccessQueue_beginQueueTransactionWithCompletionHandler:(CDUnknownBlockType)arg1 usingSemaphore:(id)arg2;
- (void)_onAccessQueue_transitionQueueTransactionToState:(long long)arg1;
- (void)_onAccessQueue_endQueueTransactionWithTracklist:(id)arg1 forReason:(long long)arg2 error:(id)arg3;
- (_Bool)_onAccessQueue_isPerformingQueueTransactionWithID:(id)arg1;
- (id)_queueFromTracklist:(id)arg1;
- (id)_mutableQueueFromTracklist:(id)arg1 mediaToResponseItemMap:(id *)arg2;
- (id)_queueModificationRequestsFromTracklist:(id)arg1 withMutatedQueue:(id)arg2 mediaToResponseItemMap:(id)arg3;

@end
