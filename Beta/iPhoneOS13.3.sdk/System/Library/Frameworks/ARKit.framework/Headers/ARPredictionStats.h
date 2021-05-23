/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARCriticalTimer, ARPredictedSamplesQueue, ARSession, NSMutableArray;

@protocol OS_dispatch_queue;

@interface ARPredictionStats : NSObject

{
    ARSession *_session;
    NSMutableArray *_predictedSamples;
    ARPredictedSamplesQueue *_predictedSamplesQueue;
    ARCriticalTimer *_sleepTimer;
    long long _predictedSamplesIndex;
    long long _predictedSamplesCount;
    NSObject<OS_dispatch_queue> *_predictionQueue;
}

@property (retain, nonatomic) NSMutableArray *predictedSamples;
@property (retain, nonatomic) ARPredictedSamplesQueue *predictedSamplesQueue;
@property (retain, nonatomic) ARCriticalTimer *sleepTimer;
@property (nonatomic) long long predictedSamplesIndex;
@property (nonatomic) long long predictedSamplesCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *predictionQueue;
@property (weak, nonatomic) ARSession *session;

+ (_Bool)enabled;

- (id)init;
- (id)samples;
- (void)_fillSlotWithFrameNumber:(unsigned long long)arg1 type:(unsigned long long)arg2 pose:(id)arg3 timeStamp:(double)arg4;
- (long long)_findSlotForFrameNumber:(unsigned long long)arg1;
- (_Bool)_isSlotIndexValid:(long long)arg1;
- (_Bool)_isTimeStamp:(double)arg1 withinStart:(double)arg2 andEnd:(double)arg3;
- (void)_schedulePredictionAtTime:(double)arg1 frameNumber:(unsigned long long)arg2;
- (void)_resetSlotForSlotIndex:(long long)arg1;
- (long long)_getIndexFromFrameNumber:(unsigned long long)arg1;
- (_Bool)_slotIndex:(long long)arg1 hasFrameNumber:(unsigned long long)arg2;
- (void)predictedRenderingPose:(id)arg1 frameNumber:(unsigned long long)arg2 timeStamp:(double)arg3;
- (void)predictedCompositingStartPose:(id)arg1 frameNumber:(unsigned long long)arg2 timeStamp:(double)arg3;
- (void)predictedCompositingEndPose:(id)arg1 frameNumber:(unsigned long long)arg2 timeStamp:(double)arg3;
- (void)drawablePresentedAtTime:(double)arg1 frameNumber:(unsigned long long)arg2 presentTime:(double)arg3 vsyncTime:(double)arg4;
- (long long)_nextIndex:(long long)arg1;
- (long long)_previousIndex:(long long)arg1;
- (_Bool)_isPoseValid:(id)arg1;

@end
