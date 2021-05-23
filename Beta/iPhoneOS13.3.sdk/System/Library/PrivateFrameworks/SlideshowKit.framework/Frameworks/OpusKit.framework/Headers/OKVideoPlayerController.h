/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer;

@protocol OKVideoControllerDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface OKVideoPlayerController : NSObject

{
    NSObject<OS_dispatch_queue> *_videoPlayerControllerSerialQueue;
    id _timeObserver;
    struct {
        unsigned int delegateDidStartPlayingItem:1;
        unsigned int delegateDidFinishPlayingItem:1;
        unsigned int delegateDidFailToPlayItem:1;
        unsigned int delegateIsReadyToPlay:1;
        unsigned int delegateStateDidChange:1;
        unsigned int delegateBufferingStateDidChange:1;
    } _delegateFlags;
    _Bool _isReady;
    AVPlayerLayer *_playerLayer;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    unsigned long long _state;
    unsigned long long _bufferingState;
    id <OKVideoControllerDelegate> _delegate;
    NSObject<OS_dispatch_semaphore> *_seekToTimeSemaphore;
    unsigned long long _readyState;
}

@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) AVPlayerItem *playerItem;
@property (nonatomic) _Bool isReady;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *seekToTimeSemaphore;
@property (nonatomic) unsigned long long readyState;
@property (retain, nonatomic, readonly) AVPlayerLayer *playerLayer;
@property (nonatomic) double currentTime;
@property (nonatomic, readonly) double duration;
@property (nonatomic) float volume;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) unsigned long long bufferingState;
@property (nonatomic) id <OKVideoControllerDelegate> delegate;

- (void)dealloc;
- (id)description;
- (void)pause;
- (void)stop;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_setState:(unsigned long long)arg1;
- (void)play;
- (id)_playerKeysToObserve;
- (id)initWithPlayerLayer:(id)arg1;
- (void)_setupPlayer;
- (void)_playerItemDidReachEndNotification:(id)arg1;
- (void)_playerItemFailedToPlayToEndNotification:(id)arg1;
- (void)playPlayerItem:(id)arg1;
- (void)_resetPlayer;
- (void)_resetPlayerItem;
- (void)_cancelSeeking;
- (id)_playerItemKeysToObserve;
- (void)_updateBufferingStateWithState:(unsigned long long)arg1;

@end
