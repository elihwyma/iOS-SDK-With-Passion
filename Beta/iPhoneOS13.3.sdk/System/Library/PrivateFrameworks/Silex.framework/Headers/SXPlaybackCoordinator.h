/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError, NSHashTable, NSString, SVKeyValueObserver, SXAVPlayer;

@protocol SXAVPlayerFactory, SXVideoPlaybackHost, SXVideoProviding;

@interface SXPlaybackCoordinator : NSObject

{
    _Bool _playbackLikelyToKeepUp;
    _Bool _playbackBufferFull;
    _Bool _muted;
    _Bool _playbackRequested;
    _Bool _initiatedPlayback;
    id <SXVideoProviding> _video;
    unsigned long long _state;
    NSObject<SXVideoPlaybackHost> *_host;
    NSError *_error;
    NSHashTable *_observers;
    SXAVPlayer *_player;
    CDUnknownBlockType _cancelHandler;
    SVKeyValueObserver *_playerItemPresentationSizeObserver;
    SVKeyValueObserver *_readyForDisplayObserver;
    id <SXAVPlayerFactory> _playerFactory;
    SVKeyValueObserver *_muteStateObserver;
    SVKeyValueObserver *_playbackLikelyToKeepUpObserver;
    SVKeyValueObserver *_playbackBufferFullObserver;
    struct CGSize _dimensions;
}

@property (nonatomic) _Bool playbackRequested;
@property (nonatomic, readonly) NSHashTable *observers;
@property (retain, nonatomic) SXAVPlayer *player;
@property (copy, nonatomic) CDUnknownBlockType cancelHandler;
@property (nonatomic) _Bool initiatedPlayback;
@property (nonatomic) struct CGSize dimensions;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) SVKeyValueObserver *playerItemPresentationSizeObserver;
@property (retain, nonatomic) SVKeyValueObserver *readyForDisplayObserver;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, readonly) id <SXAVPlayerFactory> playerFactory;
@property (retain, nonatomic) SVKeyValueObserver *muteStateObserver;
@property (retain, nonatomic) SVKeyValueObserver *playbackLikelyToKeepUpObserver;
@property (retain, nonatomic) SVKeyValueObserver *playbackBufferFullObserver;
@property (nonatomic, readonly) id <SXVideoProviding> video;
@property (nonatomic, readonly) NSArray *loadedTimeRanges;
@property (nonatomic, readonly) double loadingProgress;
@property (nonatomic, readonly) _Bool playbackLikelyToKeepUp;
@property (nonatomic, readonly) _Bool playbackBufferFull;
@property (weak, nonatomic) NSObject<SXVideoPlaybackHost> *host;
@property (nonatomic) _Bool muted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double time;
@property (nonatomic, readonly) double framerate;
@property (nonatomic, readonly) double timePlayed;
@property (nonatomic, readonly) double volume;

- (void)load;
- (void)pause;
- (void)addPlaybackObserver:(id)arg1;
- (void)removePlaybackObserver:(id)arg1;
- (void)stateChanged;
- (void)playbackStarted;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackFinished;
- (void)playbackFailedWithError:(id)arg1;
- (void)loadVideoIfNeeded;
- (void)loadedTimeRangesChanged;
- (void)playbackInitiatedWithButtonTapped:(_Bool)arg1;
- (void)timeElapsed:(double)arg1 duration:(double)arg2;
- (void)setupPlayerWithURL:(id)arg1;
- (void)addPlayerItemPresentationSizeObserver;
- (void)addMuteStateObserver;
- (void)addPlaybackBuferObserver;
- (void)addPlaybackLikelyToKeepUpObserver;
- (void)playbackBufferFullStateChanged;
- (void)playbackLikelyToKeepUpStateChanged;
- (void)muteStateChanged;
- (id)initWithVideo:(id)arg1 playerFactory:(id)arg2;
- (void)playWithButtonTapped:(_Bool)arg1;
- (void)seekToTime:(double)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)removePlayerItemPresentationSizeObserver;

@end
