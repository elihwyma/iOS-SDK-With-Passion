/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISObservable.h>

@class AVPlayer, AVPlayerItem, AVVideoComposition, ISWrappedAVAudioSession, NSArray, NSError, NSMutableDictionary, NSObject;

@protocol ISWrappedAVPlayerDelegate, OS_dispatch_queue;

@interface ISWrappedAVPlayer : ISObservable

{
    NSObject<OS_dispatch_queue> *_avPlayerQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    AVPlayer *_playerQueue_avPlayer;
    ISWrappedAVAudioSession *_playerQueue_wrappedAudioSession;
    id _playerQueue_playerItemDidPlayToEndObserver;
    AVPlayerItem *_ivarQueue_currentItem;
    long long _ivarQueue_status;
    NSError *_ivarQueue_error;
    float _ivarQueue_rate;
    float _ivarQueue_volume;
    CDStruct_e83c9415 _ivarQueue_loopTimeRange;
    _Bool _ivarQueue_loopingEnabled;
    _Bool _ivarQueue_audioEnabled;
    _Bool _ivarQueue_preventsSleepDuringVideoPlayback;
    long long _ivarQueue_itemStatus;
    NSError *_ivarQueue_itemError;
    CDStruct_1b6d18a9 _ivarQueue_itemForwardPlaybackEndTime;
    CDStruct_1b6d18a9 _ivarQueue_itemDuration;
    _Bool _ivarQueue_itemPlaybackBufferFull;
    AVVideoComposition *_ivarQueue_itemVideoComposition;
    _Bool _ivarQueue_itemIsLikelyToKeepUp;
    _Bool _ivarQueue_itemPlaybackBufferEmpty;
    NSArray *_ivarQueue_currentItemLoadedTimeRanges;
    NSMutableDictionary *_observersByID;
    void *_ivarQueueIdentifier;
    _Bool _playerQueue_didBeginObservingPlayer;
    id <ISWrappedAVPlayerDelegate> _delegate;
}

@property (getter=isLoopingEnabled) _Bool loopingEnabled;
@property (weak) id <ISWrappedAVPlayerDelegate> delegate;

+ (id)observedAVPIKeysAndContexts;
+ (id)observedAVPKeys;

- (id)init;
- (void)dealloc;
- (id)error;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)status;
- (id)currentItem;
- (CDStruct_1b6d18a9)currentTime;
- (float)volume;
- (void)setVolume:(float)arg1;
- (void)setRate:(float)arg1;
- (float)rate;
- (void)setAudioEnabled:(_Bool)arg1;
- (_Bool)isAudioEnabled;
- (void)removeTimeObserver:(id)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)setAllowsExternalPlayback:(_Bool)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)setActionAtItemEnd:(long long)arg1;
- (void)setRate:(float)arg1 time:(CDStruct_1b6d18a9)arg2 atHostTime:(CDStruct_1b6d18a9)arg3;
- (void)prerollAtRate:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelPendingPrerolls;
- (void)setDimensionsOfReservedVideoMemory:(struct CGSize)arg1;
- (CDStruct_e83c9415)loopTimeRange;
- (void)setLoopTimeRange:(CDStruct_e83c9415)arg1;
- (void)setPreventsSleepDuringVideoPlayback:(_Bool)arg1;
- (void)setWrappedAudioSession:(id)arg1;
- (id)mutableChangeObject;
- (id)currentItemError;
- (void)setLoopingEnabled:(_Bool)arg1 withTemplateItem:(id)arg2;
- (_Bool)_isOnIvarQueue;
- (void)_performIvarRead:(CDUnknownBlockType)arg1;
- (void)_performIvarWrite:(CDUnknownBlockType)arg1;
- (void)attachToPlayerLayerIfNeeded:(id)arg1;
- (_Bool)preventsSleepDuringVideoPlayback;
- (_Bool)currentItemPlaybackBufferEmpty;
- (_Bool)currentItemPlaybackBufferFull;
- (_Bool)currentItemIsLikelyToKeepUp;
- (long long)currentItemStatus;
- (CDStruct_1b6d18a9)currentItemDuration;
- (void)playToTime:(CDStruct_1b6d18a9)arg1 withInitialRate:(float)arg2 overDuration:(double)arg3 progressHandler:(CDUnknownBlockType)arg4;
- (CDStruct_1b6d18a9)itemForwardPlaybackEndTime;
- (void)_assertOnIvarQueue;
- (id)_playerQueue_avPlayer;
- (void)_performPlayerTransaction:(CDUnknownBlockType)arg1;
- (id)_initWithAVPlayer:(id)arg1;
- (void)setItemForwardEndPlaybackTime:(CDStruct_1b6d18a9)arg1;
- (void)setItemBlendsVideoFrames:(_Bool)arg1;
- (id)_nextObserverUID;
- (void)_playerQueue_startObservingPlayerItem:(id)arg1;
- (void)_playerQueue_stopObservingPlayerItem:(id)arg1;
- (void)_playerItemDidPlayToEnd:(id)arg1;
- (id)_nilOrValue:(id)arg1;
- (id)currentItemLoadedTimeRanges;
- (id)currentItemVideoComposition;
- (void)_playerQueue_updatePlayerItemAudioTracksEnabled;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1 thenCall:(CDUnknownBlockType)arg2;

@end
