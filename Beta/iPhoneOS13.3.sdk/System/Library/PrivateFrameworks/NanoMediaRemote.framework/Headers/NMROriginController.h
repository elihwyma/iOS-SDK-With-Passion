/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NMRNowPlayingState, NMROrigin, NMRPlaybackQueue, NSString;

@protocol NMROriginCommandHandler, NMROriginObserver, NMROriginObserverDelegate;

__attribute__((visibility("hidden")))
@interface NMROriginController : NSObject

{
    _Bool _isObserving;
    _Bool _hasPendingNowPlayingInfoChange;
    _Bool _hasPendingElapsedTimeChange;
    _Bool _hasPendingPlaybackStateChange;
    _Bool _hasPendingSupportedCommandsChange;
    _Bool _hasPendingNowPlayingApplicationBundleIdentifierChange;
    _Bool _hasPendingTimestampChange;
    _Bool _hasPendingPlaybackQueueChange;
    _Bool _shouldObserveArtwork;
    _Bool _shouldObservePlaybackQueue;
    _Bool _shouldObserveLibraryAddStatus;
    NMROrigin *_origin;
    id <NMROriginObserverDelegate> _delegate;
    id <NMROriginObserver> _originObserver;
    id <NMROriginCommandHandler> _originCommandHandler;
}

@property (retain, nonatomic) id <NMROriginObserver> originObserver;
@property (retain, nonatomic) id <NMROriginCommandHandler> originCommandHandler;
@property (nonatomic, readonly) NMROrigin *origin;
@property (nonatomic, readonly) NMRNowPlayingState *nowPlayingState;
@property (nonatomic, readonly) NMRPlaybackQueue *playbackQueue;
@property (weak, nonatomic) id <NMROriginObserverDelegate> delegate;
@property (nonatomic) _Bool shouldObservePlaybackQueue;
@property (nonatomic) _Bool shouldObserveArtwork;
@property (nonatomic) _Bool shouldObserveLibraryAddStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)beginObserving;
- (void)endObserving;
- (void)_notifyObserverOfUpdatedNowPlayingInfo;
- (void)_notifyObserverOfUpdatedPlaybackState;
- (void)_notifyObserverOfUpdatedSupportedCommands;
- (void)_notifyObserverOfUpdatedElapsedTime;
- (void)originObserver:(id)arg1 didUpdateNowPlayingInfoForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdateNowPlayingApplicationBundleIdentifierForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdatePlaybackStateForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdateSupportedCommandsForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdateElapsedTimeForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdateTimestampForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdatePlaybackQueueForOrigin:(id)arg2;
- (void)updateNowPlayingStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2 launchApp:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithOrigin:(id)arg1 options:(unsigned long long)arg2;
- (void)_notifyObserverOfUpdatedNowPlayingApplicationBundleIdentifier;
- (void)_notifyObserverOfUpdatedTimestamp;
- (void)_notifyObserverOfUpdatedPlaybackQueue;

@end
