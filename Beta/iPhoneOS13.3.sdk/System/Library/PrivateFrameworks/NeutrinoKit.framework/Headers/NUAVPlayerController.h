/*
 Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
 */

#import <NSObject.h>

@class AVAsset, AVAudioMix, AVPlayer, AVVideoComposition, NSMutableArray, NUObservatory;

@protocol NUAVPlayerControllerDelegate;

@interface NUAVPlayerController : NSObject

{
    id _playerTimeObserver;
    NUObservatory *_observatory;
    struct {
        _Bool registeredPlayer;
    } _playerControllerKVOFlags;
    NSMutableArray *_playerItemObservations;
    _Bool _currentlySeeking;
    _Bool _loopsVideo;
    _Bool _muted;
    AVPlayer *_player;
    double _updateInterval;
    AVAsset *_videoAsset;
    AVVideoComposition *_videoComposition;
    AVAudioMix *_audioMix;
    id <NUAVPlayerControllerDelegate> _delegate;
}

@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) double updateInterval;
@property (nonatomic, readonly) AVAsset *videoAsset;
@property (nonatomic, readonly) AVVideoComposition *videoComposition;
@property (nonatomic, readonly) AVAudioMix *audioMix;
@property (weak, nonatomic) id <NUAVPlayerControllerDelegate> delegate;
@property (nonatomic) _Bool loopsVideo;
@property (nonatomic, getter=isMuted) _Bool muted;
@property (nonatomic, readonly) CDStruct_198678f7 currentTime;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1;
- (void)play;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)step:(long long)arg1;
- (void)_removeTimeObserver;
- (void)_setRate:(float)arg1;
- (_Bool)prepareWithAVAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 loopsVideo:(_Bool)arg4;
- (id)_playerItemsWithVideoAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 loopsVideo:(_Bool)arg4;
- (id)_playerItemWithVideoAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3;
- (id)_loopingPlayerItemWithVideoAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3;
- (void)updateVideoComposition:(id)arg1;
- (void)updateAudioMix:(id)arg1;
- (void)seekForward;
- (void)seekBack;
- (void)seek:(CDStruct_198678f7)arg1 exact:(_Bool)arg2;
- (void)addPlaybackRateObserver:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_notifyPlaybackRateChange:(float)arg1;
- (void)addPlaybackTimeObserver:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_notifyPlaybackTimeChange:(CDStruct_198678f7)arg1;
- (void)addPlayerStatusObserver:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_notifyPlayerStatusChange:(long long)arg1;
- (void)_addTimeObserver;
- (CDStruct_198678f7)_effectiveTimeForTime:(CDStruct_198678f7)arg1;
- (void)_removePlayerKVO;
- (void)_addPlayerKVO;
- (void)_removePlayerItemKVO:(id)arg1;
- (void)_removePlayerItemKVO:(id)arg1 removeFromArray:(_Bool)arg2;
- (void)_addPlayerItemKVO:(id)arg1;

@end
