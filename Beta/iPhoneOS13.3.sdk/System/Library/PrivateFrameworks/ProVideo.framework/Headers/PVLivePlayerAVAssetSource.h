/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVPlayerLooper, AVQueuePlayer, NSArray, NSString, PVFrameSet;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PVLivePlayerAVAssetSource : NSObject

{
    AVAsset *_asset;
    AVQueuePlayer *_playerQueue;
    AVPlayerLooper *_playerLooper;
    NSArray *_playerItemOutputs;
    int _currentPlayerItemOutput;
    CDStruct_e83c9415 _currentPlayerItemRange;
    PVFrameSet *_cacheImageFrameSet;
    struct HGSynchronizable *_cacheLock;
    CDStruct_1b6d18a9 _assetDuration;
    float _assetRate;
    CDStruct_e83c9415 _videoTrackRange;
    float _videoTrackFrameRate;
    CDStruct_1b6d18a9 _videoTrackFrameDelta;
    struct {
        int width;
        int height;
    } _videoTrackDimensions;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_semaphore> *_playbackReadyCondVar;
    NSObject<OS_dispatch_semaphore> *_outputReadyCondVar;
    _Bool loopPlayback;
    _Bool repeatFrames;
    int status;
}

@property int status;
@property (nonatomic) _Bool loopPlayback;
@property (nonatomic) _Bool repeatFrames;
@property (nonatomic, readonly) AVAsset *asset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)play;
- (void)setMuted:(_Bool)arg1;
- (void)outputSequenceWasFlushed:(id)arg1;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)itemTimeForHostTime:(double)arg1;
- (void)playerItemDidPlayToEnd:(id)arg1;
- (id)initWithAVAsset:(id)arg1;
- (void)finishReading;
- (id)imageBufferForHostTime:(double)arg1;
- (void)setupPlayer;
- (void)stopObservers;
- (struct __CVBuffer *)_copyPixelBufferForHostTime:(double)arg1;
- (void)startObservers;
- (struct __CVBuffer *)_copyPixelBufferForTime:(CDStruct_1b6d18a9)arg1;
- (void)playerItemTimeJumped:(id)arg1;
- (void)playerItemFailedToPlayToEnd:(id)arg1;
- (void)playerItemPlaybackStalled:(id)arg1;

@end
