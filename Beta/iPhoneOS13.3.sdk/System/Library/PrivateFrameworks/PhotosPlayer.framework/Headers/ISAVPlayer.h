/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <AVFoundation/AVPlayer.h>

@class ISRateCurveRequest;

@interface ISAVPlayer : AVPlayer

{
    ISRateCurveRequest *_currentRequest;
}

- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1;
- (void)setRate:(float)arg1;
- (void)playToTime:(CDStruct_1b6d18a9)arg1 withInitialRate:(float)arg2 overDuration:(double)arg3 progressHandler:(CDUnknownBlockType)arg4;
- (void)_setRate:(float)arg1;
- (void)_cancelRateCurveRequest;

@end
