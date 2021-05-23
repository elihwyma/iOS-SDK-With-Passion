/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NMROrigin, NSArray, NSHashTable, NSMapTable, NSString;

@protocol NMRNowPlayingControllerDelegate, OS_dispatch_queue;

@interface NMRNowPlayingController : NSObject

{
    unsigned long long _registeredObserversCount;
    NSMapTable *_originControllers;
    NSHashTable *_observerDelegates;
    NMROrigin *_activeNowPlayingOrigin;
    NSString *_activeNowPlayingOriginExplanationLog;
    NSArray *_nowPlayingOrigins;
    _Bool _shouldObserveArtwork;
    _Bool _shouldObservePlaybackQueue;
    _Bool _shouldObserveLibraryAddStatus;
    id <NMRNowPlayingControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s _observerLock;
    unsigned long long _filteringOptions;
}

@property (weak, nonatomic) id <NMRNowPlayingControllerDelegate> delegate;
@property (nonatomic) _Bool shouldObservePlaybackQueue;
@property (nonatomic) _Bool shouldObserveArtwork;
@property (nonatomic) _Bool shouldObserveLibraryAddStatus;
@property (nonatomic, readonly) NMROrigin *activeNowPlayingOrigin;
@property (nonatomic, readonly) NSArray *nowPlayingOrigins;
@property (nonatomic, readonly) unsigned long long filteringOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)originObserver:(id)arg1 didUpdateNowPlayingInfoForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdateNowPlayingApplicationBundleIdentifierForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdatePlaybackStateForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdateSupportedCommandsForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdateElapsedTimeForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdateTimestampForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdatePlaybackQueueForOrigin:(id)arg2;
- (void)_setupOriginControllers;
- (id)_nowPlayingStateForOrigin:(id)arg1;
- (id)_originControllerForOrigin:(id)arg1;
- (void)_updateNowPlayingStateForOrigin:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_evaluateNowPlayingOrigins;
- (id)nowPlayingStateForOrigin:(id)arg1;
- (void)_enumerateObserverDelegates:(CDUnknownBlockType)arg1;
- (void)_handleAvailableOriginsDidChangeNotification:(id)arg1;
- (void)_addOriginControllerWithOrigin:(id)arg1;
- (void)_removeOriginControllerWithOrigin:(id)arg1;
- (id)_evaluateNowPlayingOriginsFromOrigins:(id)arg1;
- (id)_evaluateActiveNowPlayingOriginForOrderedOrigins:(id)arg1;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 toOrigin:(id)arg2 options:(id)arg3 launchApp:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (id)playbackQueueForOrigin:(id)arg1;
- (void)updateNowPlayingStateForOrigin:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateNowPlayingStateForAllOriginsWithCompletion:(CDUnknownBlockType)arg1;
- (id)launchNowPlayingURLForOrigin:(id)arg1;
- (void)addObserverDelegate:(id)arg1;
- (void)removeObserverDelegate:(id)arg1;
- (void)beginObservingOrigins;
- (void)endObservingOrigins;
- (void)setOriginObserver:(id)arg1 forOrigin:(id)arg2;
- (void)setOriginCommandHandler:(id)arg1 forOrigin:(id)arg2;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 toOrigin:(id)arg2 options:(id)arg3 launchApp:(_Bool)arg4;

@end
