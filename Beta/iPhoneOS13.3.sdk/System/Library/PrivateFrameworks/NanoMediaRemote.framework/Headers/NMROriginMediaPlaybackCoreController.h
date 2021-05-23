/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class MPCPlayerPath, MPRequestResponseController, NMRNowPlayingState, NMROrigin, NMRPlaybackQueue, NMRPlayerResponseNowPlayingState, NSString;

@protocol NMROriginObserverDelegate, OS_dispatch_queue;

@interface NMROriginMediaPlaybackCoreController : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _isEnforcingApplicationFilter;
    MPCPlayerPath *_playerPath;
    unsigned long long _filteringOptions;
    MPRequestResponseController *_requestResponseController;
    NMRPlayerResponseNowPlayingState *_nowPlayingState;
    unsigned long long _numberOfConsecutiveFailuresToResolve;
    _Bool _shouldObserveLibraryAddStatus;
    _Bool shouldObserveArtwork;
    _Bool shouldObservePlaybackQueue;
    id <NMROriginObserverDelegate> _delegate;
    NMROrigin *_origin;
    NMRPlaybackQueue *playbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NMROrigin *origin;
@property (nonatomic, readonly) NMRNowPlayingState *nowPlayingState;
@property (nonatomic, readonly) NMRPlaybackQueue *playbackQueue;
@property (weak, nonatomic) id <NMROriginObserverDelegate> delegate;
@property (nonatomic) _Bool shouldObservePlaybackQueue;
@property (nonatomic) _Bool shouldObserveArtwork;
@property (nonatomic) _Bool shouldObserveLibraryAddStatus;

- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;
- (_Bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
- (void)beginObserving;
- (void)endObserving;
- (id)_requestResponseController;
- (void)_updateIsEnforcingApplicationFilterWithNowPlayingState:(id)arg1;
- (void)_notifyObserverOfUpdatedNowPlayingInfo;
- (void)_notifyObserverOfUpdatedNowPlayingApplicationBundleID;
- (void)_notifyObserverOfUpdatedPlaybackState;
- (void)_notifyObserverOfUpdatedSupportedCommands;
- (void)_notifyObserverOfUpdatedElapsedTime;
- (void)_notifyObserversOfUpdatedTimestamp;
- (void)_notifyObserversOfUpdatedPlaybackQueue;
- (void)_asyncToSerialQueueCheckingProcessWithBlock:(CDUnknownBlockType)arg1;
- (void)updateNowPlayingStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2 launchApp:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithPlayerPath:(id)arg1 options:(unsigned long long)arg2;

@end
