/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class ISAVPlayer;

__attribute__((visibility("hidden")))
@interface ISRateCurveRequest : NSObject

{
    double _startTime;
    CDStruct_1b6d18a9 _startVideoTime;
    _Bool _cancelled;
    id _boundaryObserver;
    double _stepInterval;
    long long _stepIndex;
    float _initialRate;
    double _duration;
    ISAVPlayer *_avPlayer;
    CDUnknownBlockType _progressHandler;
    CDStruct_1b6d18a9 _targetTime;
}

@property (nonatomic, readonly) CDStruct_1b6d18a9 targetTime;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) float initialRate;
@property (weak, nonatomic, readonly) ISAVPlayer *avPlayer;
@property (copy, nonatomic, readonly) CDUnknownBlockType progressHandler;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (id)initWithTargetTime:(CDStruct_1b6d18a9)arg1 duration:(double)arg2 initialRate:(float)arg3 avPlayer:(id)arg4 progressHandler:(CDUnknownBlockType)arg5;
- (void)_stepDownRate;
- (void)_didReachTargetTime;
- (void)_stopObservingPlayer;

@end
