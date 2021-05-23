/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

#import <ProVideo/Swift-Protocol.h>

@class NSString;

@interface OZFxPlugTimingAPI : NSObject <Swift>

{
    struct OZFxPlugSharedBase *_plugin;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct OZScene *)scene;
- (const struct OZSceneSettings *)sceneSettings;
- (id)initWithPlugin:(struct OZFxPlugSharedBase *)arg1;
- (double)startTimeOfInputToFilter:(id)arg1;
- (double)startTimeOfInputAToTransition:(id)arg1;
- (double)startTimeOfInputBToTransition:(id)arg1;
- (double)startTimeOfImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (double)durationOfInputToFilter:(id)arg1;
- (double)durationOfInputAToTransition:(id)arg1;
- (double)durationOfInputBToTransition:(id)arg1;
- (double)durationOfImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (unsigned long long)fieldOrderForInputToFilter:(id)arg1;
- (unsigned long long)fieldOrderForInputAToTransition:(id)arg1;
- (unsigned long long)fieldOrderForInputBToTransition:(id)arg1;
- (unsigned long long)fieldOrderForImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (unsigned long long)timelineFpsNumeratorForEffect:(id)arg1;
- (unsigned long long)timelineFpsDenominatorForEffect:(id)arg1;
- (double)inPointOfTimelineForEffect:(id)arg1;
- (double)outPointOfTimelineForEffect:(id)arg1;
- (double)startTimeForEffect:(id)arg1;
- (double)durationForEffect:(id)arg1;
- (double)timelineTimeFromInputTime:(double)arg1 forFilter:(id)arg2;
- (double)timelineTimeFromInputATime:(double)arg1 forTransition:(id)arg2;
- (double)timelineTimeFromInputBTime:(double)arg1 forTransition:(id)arg2;
- (double)timelineTimeFromImageTime:(double)arg1 forParmId:(unsigned int)arg2 forEffect:(id)arg3;
- (double)inputTimeForFilter:(id)arg1 fromTimelineTime:(double)arg2;
- (double)inputATimeForTransition:(id)arg1 fromTimelineTime:(double)arg2;
- (double)inputBTimeForTransition:(id)arg1 fromTimelineTime:(double)arg2;
- (double)imageTimeForParmId:(unsigned int)arg1 forEffect:(id)arg2 fromTimelineTime:(double)arg3;
- (double)transitionTimeFractionAtTime:(double)arg1;
- (void)frameDuration:(CDUnion_baaf6063 *)arg1;
- (void)sampleDuration:(CDUnion_baaf6063 *)arg1;
- (void)startFxTimeForEffect:(CDUnion_baaf6063 *)arg1;
- (void)durationFxTimeForEffect:(CDUnion_baaf6063 *)arg1;
- (void)startFxTimeOfInputAToTransition:(CDUnion_baaf6063 *)arg1;
- (void)startFxTimeOfInputBToTransition:(CDUnion_baaf6063 *)arg1;
- (void)durationFxTimeOfInputAToTransition:(CDUnion_baaf6063 *)arg1;
- (void)durationFxTimeOfInputBToTransition:(CDUnion_baaf6063 *)arg1;
- (void)startFxTimeOfInputToFilter:(CDUnion_baaf6063 *)arg1;
- (void)durationFxTimeOfInputToFilter:(CDUnion_baaf6063 *)arg1;
- (void)startFxTime:(CDUnion_baaf6063 *)arg1 ofImageParam:(unsigned int)arg2;
- (void)durationFxTime:(CDUnion_baaf6063 *)arg1 ofImageParm:(unsigned int)arg2;
- (void)inPointFxTimeOfTimelineForEffect:(CDUnion_baaf6063 *)arg1;
- (void)outPointFxTimeOfTimelineForEffect:(CDUnion_baaf6063 *)arg1;
- (void)timelineFxTime:(CDUnion_baaf6063 *)arg1 fromInputTime:(CDUnion_baaf6063)arg2;
- (void)timelineFxTime:(CDUnion_baaf6063 *)arg1 fromInputATime:(CDUnion_baaf6063)arg2;
- (void)timelineFxTime:(CDUnion_baaf6063 *)arg1 fromInputBTime:(CDUnion_baaf6063)arg2;
- (void)timelineFxTime:(CDUnion_baaf6063 *)arg1 fromImageTime:(CDUnion_baaf6063)arg2 forParmId:(unsigned int)arg3;
- (void)inputFxTime:(CDUnion_baaf6063 *)arg1 fromTimelineTime:(CDUnion_baaf6063)arg2;
- (void)inputAFxTime:(CDUnion_baaf6063 *)arg1 fromTimelineTime:(CDUnion_baaf6063)arg2;
- (void)inputBFxTime:(CDUnion_baaf6063 *)arg1 fromTimelineTime:(CDUnion_baaf6063)arg2;
- (void)imageFxTime:(CDUnion_baaf6063 *)arg1 forParmId:(unsigned int)arg2 fromTimelineTime:(CDUnion_baaf6063)arg3;
- (_Bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (void)copyFxTime:(CDUnion_baaf6063)arg1 toFxTime:(CDUnion_baaf6063 *)arg2;
- (CDUnion_baaf6063)zeroTime;
- (CDUnion_baaf6063)invalidTime;
- (CDStruct_1b6d18a9)timeOffsetForImageParameter:(unsigned int)arg1;
- (double)timelineDurationForEffect:(id)arg1;

@end
