/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <AVFoundation/AVPlayer.h>

@class NSString, SVKeyValueObserver;

@interface SXAVPlayer : AVPlayer

{
    int _audioMode;
    int _playbackPosition;
    int _playbackStatus;
    CDUnknownBlockType _playbackStatusBlock;
    CDUnknownBlockType _playbackProgressBlock;
    CDUnknownBlockType _loadingProgressBlock;
    double _elapsedTime;
    double _duration;
    double _frameRate;
    id _timeObserver;
    SVKeyValueObserver *_timeControlStatusObserver;
    SVKeyValueObserver *_statusObserver;
    SVKeyValueObserver *_durationObserver;
    SVKeyValueObserver *_loadedTimeRangesObserver;
    CDStruct_1b6d18a9 _cumulativeTimePlayed;
}

@property (nonatomic) int playbackStatus;
@property (nonatomic) double elapsedTime;
@property (nonatomic) double duration;
@property (nonatomic) double frameRate;
@property (retain, nonatomic) id timeObserver;
@property (nonatomic) CDStruct_1b6d18a9 cumulativeTimePlayed;
@property (retain, nonatomic) SVKeyValueObserver *timeControlStatusObserver;
@property (retain, nonatomic) SVKeyValueObserver *statusObserver;
@property (retain, nonatomic) SVKeyValueObserver *durationObserver;
@property (retain, nonatomic) SVKeyValueObserver *loadedTimeRangesObserver;
@property (nonatomic, readonly) int audioMode;
@property (nonatomic) int playbackPosition;
@property (copy, nonatomic) CDUnknownBlockType playbackStatusBlock;
@property (copy, nonatomic) CDUnknownBlockType playbackProgressBlock;
@property (copy, nonatomic) CDUnknownBlockType loadingProgressBlock;
@property (nonatomic, readonly) double totalTimePlayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (void)statusChanged;
- (id)initWithURL:(id)arg1 audioMode:(int)arg2;
- (id)initWithPlayerItem:(id)arg1 audioMode:(int)arg2;
- (void)addObservers;
- (void)loadFrameRate;
- (void)stopTimeObserver;
- (void)updateTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2;
- (void)setElapsedTime:(double)arg1 duration:(double)arg2;
- (void)timeControlStatusChanged;
- (void)durationChanged;
- (void)loadedTimeRangesChanged;
- (void)playedToEnd:(id)arg1;
- (void)startTimeObserver;
- (void)seekToStartWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
